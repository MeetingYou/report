#include "moduletwofunction.h"
#include <math.h>
#include <iostream>

ModuleTwoFunction::ModuleTwoFunction(const QString& s)
{
	formular = s.toStdString();

    for (unsigned i=0; i<formular.length(); i++) {
        if ((formular[i]>='a' && formular[i]<='z') || (formular[i]>='A' && formular[i]<='Z')) {
            bool flag = true;
            for (unsigned j=0; j<varNames.size(); j++) {     //去重
                if (formular[i] == varNames[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                varNames.push_back(formular[i]);
        }
	}

	postfix = inToPost(formular);
}

string ModuleTwoFunction::getFormular()
{
	return formular;
}

vector<char> ModuleTwoFunction::getVarNames()
{
	return varNames;
}

string ModuleTwoFunction::getPostfix()
{
    return postfix;
}

vector<Line> ModuleTwoFunction::generate()
{
    vector<Line> result;
    Line line;

    for (int i = 0; i < pow(2, this->varNames.size()); i++) {
        for (unsigned j=0; j<varNames.size(); j++) {
/*
            int tmp = pow(2, j);
            tmp = tmp & i;
            tmp = tmp >> j;
*/
			int tmp = 1 << (varNames.size()-j-1);
			tmp = tmp & i;
			tmp >>= (varNames.size()-j-1);
            line.push_back(tmp);
        }
		int value = calculate(line);

		line.push_back(value);
        result.push_back(line);
        line.clear();
    }
    return result;	
}


string ModuleTwoFunction::inToPost(string infix)
{
    stack<char> stack;
    char current = 0;//读入的字符
    string postfix;//写入后缀表达式的字符串

    map<char,int> priority;//运算符号优先级表 ! > & > | > - > =
    priority['='] = 0;
    priority['-'] = 1;
    priority['|'] = 2;
    priority['&'] = 3;
    priority['!'] = 4;

    for(unsigned i = 0;i<infix.length();++i) {//逐个读取中缀表达式字符串中的字符
        current =infix[i];
        if(isalpha(current)) {//如果是变元直接输出
            postfix.push_back(current);
	    continue;
	}
	switch(current)
	{
	case '=':
	case '-':
	case '|':
	case '&':
	case '!':
		if(!stack.empty()) {//比较目前符号与栈顶符号优先级，低于则出栈，并输出字符串
			char tempTop=stack.top();
			while(tempTop != '(' && priority[current]<=priority[tempTop]) {
				char tempOut;
				tempOut=stack.top(); stack.pop();
				postfix.push_back(tempOut);
				if(stack.empty())
					break;
                    tempTop=stack.top();
                }
            }
		stack.push(current);//符号全部出栈或者遇到了'('或者大于栈顶符号的优先级，将新符号压入栈中
		break;
	case '(':
		stack.push(current);//左括号直接入栈
		break;
	case ')':
	//postfix.push_back('#');//右括号说明前方数字输入完成，标识一下
		char tempTop;
		tempTop=stack.top();
		while(tempTop !='(') {//直到栈顶元素是左括号才停止循环
			char tempOut;
			tempOut=stack.top(); stack.pop();
			postfix.push_back(tempOut);
			tempTop=stack.top();
		}
		stack.top(); stack.pop();
		break;
	default:
		break;
	}
    }

    while(!stack.empty()) {
        char tempOut=stack.top(); stack.pop();
        postfix.push_back(tempOut);
    }
    return postfix;
}


int ModuleTwoFunction::compute(string s)
{
    stack<int> stack;

    int curr;

    int  temNum1;
    int  temNum2;
    for(string::iterator i = s.begin();i<s.end();i++)  
    {
        switch(*i)  
        {
        case '&':  
            temNum1=stack.top(); stack.pop();
            temNum2=stack.top(); stack.pop();
            stack.push(temNum2 & temNum1);
            break;
        case '|':
            temNum1=stack.top(); stack.pop();
            temNum2=stack.top(); stack.pop();
            stack.push(temNum2 | temNum1);
            break;
        case '-':
            temNum1=stack.top(); stack.pop();
            temNum2=stack.top(); stack.pop();
        if (temNum1 == 0 && temNum2 == 1)
	      stack.push(0);
	    else
	      stack.push(1);
            break;
        case '=':
            temNum1=stack.top(); stack.pop();
            temNum2=stack.top(); stack.pop();
	    temNum1 == temNum2 ? stack.push(1) : stack.push(0);
            break;
        case '!':
	    temNum1 = stack.top();stack.pop();
	    stack.push(1-temNum1);
            break;
        default:
	    curr = *i == '0' ? 0 : 1; 
            stack.push(curr);
            break;
        }
    }
    curr=stack.top(); stack.pop();
    return curr;
}


int ModuleTwoFunction::calculate(Line ln)
{
	string postfixVal;
	map<char, int> relation;	//变元与具体值的对应
	
    for (unsigned i=0; i<varNames.size(); i++)
	  relation[varNames[i]] = ln[i];

    for (unsigned i=0; i<postfix.length(); i++) {
	    	char tmp = postfix[i];
	    if (tmp>='a' && tmp<='z')
            postfixVal.push_back(relation[tmp]+'0');
	    else
	      postfixVal.push_back(tmp);
	}
    return compute(postfixVal);
}


