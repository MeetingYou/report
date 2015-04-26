#ifndef MODULE_TWO_FUNCTION_H
#define MODULE_TWO_FUNCTION_H
#include <QString>
#include <vector>
#include <string>
#include <map>
#include <stack>
#include <cstdlib>
#include <ctype.h>
using namespace std;

//模块二：求任意公式的真值表
//构造函数输入表达式，generate()返回真值表

typedef vector<int> Line;


class ModuleTwoFunction {

private:
    vector<char> varNames;  //保存命题变元
    string formular;    //保存表达式
    string postfix;     //保存后缀形式
private:
    string inToPost(string infix);      //转换成后缀表达式
    int compute(string s);          //计算后缀表达式的值
    int calculate(Line ln);         //计算给定一组变元01组合时 公式的值
public:
	ModuleTwoFunction(const QString& s);
	string getFormular();
	string getPostfix();
	vector<char> getVarNames();
	vector<Line> generate();
};

#endif
