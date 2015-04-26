#ifndef MODULE_ONE_FUNCTION
#define MODULE_ONE_FUNCTION

#include <QString>

//模块一：判断表达式是否为命题公式的算法实现
//构造函数输入表达式，ifFormular()成员函数返回bool值结果

typedef struct tagFormNode
{
    int type;
    struct tagFormNode *left;
    struct tagFormNode *right;
} FormNode;

class ModuleOneFunction {
private:
	QString str;
private:
	int priority(int ch);
	FormNode *new_node();
	int check_paren(const char *formular, int start, int end, int *wrapped);
	int findOp(const char *formular, int start, int end, int *op);
	int setup(const char *formular, int start, int end, FormNode *pNode);
	void deWhite(char *str);
	void destroy(FormNode *pNode);	
public:
	bool isFormular();
	ModuleOneFunction(const QString& s);
};

#endif

