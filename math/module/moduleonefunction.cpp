#include "moduleonefunction.h"
#include <QRegExp>

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAXL 255
#define MAX_PRI 255
#define NOT '!'
#define NUL 0



int ModuleOneFunction::priority(int ch)
{
    switch (ch) {
        case '!': return 5;
        case '&': return 4;
        case '|': return 3;
        case '-': return 2;
        case '=': return 1;
        default: return 0;
    }	
}

FormNode* ModuleOneFunction::new_node()
{
    FormNode *p;
    if ((p = (FormNode*)malloc(sizeof(FormNode))) == NULL)
    {
        exit(-1);
    }
    p->left = p->right = 0;
    return p;
}

int ModuleOneFunction::check_paren(const char *formular, int start, int end, int *wrapped)
{
    int np = 0, i, flag = 0;
    for (i = start; i <= end; ++i)
    {
        if (formular[i] == '(')
            ++np;
        else if (formular[i] == ')')
            --np;
        if (np < 0)
            return 0;
        if (np == 0 && i < end)
            flag = 1;
    }
    if (np != 0) return 0;
    *wrapped = 0;
    if (formular[start] == '(' && formular[end] == ')' && !flag)
        *wrapped = 1;
    return 1;
}

int ModuleOneFunction::findOp(const char *formular, int start, int end, int *op)
{
    int i, ch, pri, tmp, pos, np = 0;
    *op = NUL;
    pri = MAX_PRI;
    for (i = start; i <= end; ++i)
    {
        ch = formular[i];
        if (ch == '(')
            ++np;
        else if (ch == ')')
            --np;
        if (np == 0)
            if ((tmp = priority(ch)) > 0 && tmp < pri)
            {
                pri = tmp;
                *op = ch;
                pos = i;
            }
    }
    if (*op == NUL) return -1;
    if (*op == NOT)
	{
        if (formular[start] == NOT)
            pos = start;
        else
        {
            *op = NUL;
            return -1;
        }
	}
    return pos;
}

int ModuleOneFunction::setup(const char *formular, int start, int end, FormNode *pNode)
{
    int wrapped, op, pos;
    if (start > end) return 0;
    if (start == end)
    {
        if (isalpha(formular[start]))
        {
            pNode->type = formular[start];
            return 1;
        } else
            return 0;
    }
    if (!check_paren(formular, start, end, &wrapped))
    {
        return 0;
    }
    if (wrapped)
    {
        return setup(formular, start+1, end-1, pNode);
    }

    if ((pos = findOp(formular, start, end, &op)) >= 0)
    {
        pNode->type = op;
        pNode->left = new_node();
        if (op == NOT)
            return setup(formular, start+1, end, pNode->left);            
        else
        {
            if (!setup(formular, start, pos-1, pNode->left))
                return 0;
            pNode->right = new_node();
            return setup(formular, pos+1, end, pNode->right);
        }
    }
    return 0;
}

void ModuleOneFunction::deWhite(char *str)
{
    int i, j;
    for (i = j = 0; str[j] != '\0'; ++j)
    {
        if (!isspace(str[j]))
            str[i++] = str[j];
    }
    str[i] = '\0';
}

void ModuleOneFunction::destroy(FormNode *pNode)
{
    if (pNode == NULL)
        return;
    destroy(pNode->left);
    destroy(pNode->right);
    free(pNode);
}

bool ModuleOneFunction::isFormular()
{

    QRegExp reg("[a-zA-Z\\&\\|\\!\\=\\-\\(\\)\\s]*");
	if (!reg.exactMatch(str))
		return false;
	
	const char *s = str.toStdString().c_str();
	int len = strlen(s)+1;
	char *formular = (char*)malloc(len);
	memset(formular, 0, len);
	memcpy(formular, s, len);


	FormNode *root = new_node();
	deWhite(formular);

	bool result;
	if (setup(formular, 0, strlen(formular)-1, root))
		result = true;
	else
		result = false;
	
	destroy(root);
	
	return result;
}


//构造函数
ModuleOneFunction::ModuleOneFunction(const QString& s)
{
	str = s;
}

