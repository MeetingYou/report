#ifndef MODULE_THREE_FUNCTION_H
#define MODULE_THREE_FUNCTION_H

#include <QString>

//模块三：两个集合的交并补运算
//输入：两个字符串，元素之间用", "分隔
//输出：结果字符串

class ModuleThreeFunction {

private:
	static QString deBlank(const QString &strs);
public:
	static QString mergeSet(const QString& str_A, const QString& str_B);
	static QString intersectSet(const QString& str_A, const QString& str_B);
	static QString diffSet(const QString& str_A, const QString& str_B);
	//static QString setCalculate(const QString& strA, const QString& strB, const QChar flag);
};

#endif
