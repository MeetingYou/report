#include "modulethreefunction.h"
#include <QStringList>
#include <QSet>

QString ModuleThreeFunction::deBlank(const QString &strs)
{
    QString tmp = strs;
	
    int len = strs.length();
    for (int i=0;i<len;i++)
    {
        /*
        if (!strs.at(i).isSpace())
        {
            tmp += strs[i]; 
        }
        */
        if (strs.at(i).isSpace())
            tmp[i] = QChar(',');
    }
	return tmp;
}

//求两个集合的并集
QString ModuleThreeFunction::mergeSet(const QString& str_A, const QString& str_B)
{
	QString strA = deBlank(str_A);
	QString strB = deBlank(str_B);
	QStringList listA = strA.split(",", QString::SkipEmptyParts);
	QStringList listB = strB.split(",", QString::SkipEmptyParts);
	QStringList listC;
	
	QSet<QString> setA;	
	QSet<QString> setB;	
	QSet<QString> setC;	

	for (int i=0; i<listA.size(); i++)
		setA.insert(listA.value(i));	
	
	for (int i=0; i<listB.size(); i++)
		setB.insert(listB.value(i));	

	setC = setA + setB;	
	listC = setC.toList();
	listC.sort();	

	return listC.join(", ");
}


//求两个集合的交集
QString ModuleThreeFunction::intersectSet(const QString& str_A, const QString& str_B)
{
	QString	strA = deBlank(str_A);
	QString strB = deBlank(str_B);
	QStringList listA = strA.split(",", QString::SkipEmptyParts);
	QStringList listB = strB.split(",", QString::SkipEmptyParts);
	QStringList listC;
	
	QSet<QString> setA;
	QSet<QString> setB;
	QSet<QString> setC;	

	for (int i=0; i<listA.size(); i++)
		setA.insert(listA.value(i));	
	
	for (int i=0; i<listB.size(); i++)
		setB.insert(listB.value(i));	
	
	setC = setA & setB;

	listC = setC.toList();
	listC.sort();

	return listC.join(", ");
}


QString ModuleThreeFunction::diffSet(const QString& str_A, const QString& str_B)
{
	QString strA = deBlank(str_A);
	QString strB = deBlank(str_B);
	QStringList listA = strA.split(",", QString::SkipEmptyParts);
	QStringList listB = strB.split(",", QString::SkipEmptyParts);
	QStringList listC;
	
	QSet<QString> setA;
	QSet<QString> setB;
	QSet<QString> setC;	

	for (int i=0; i<listA.size(); i++)
		setA.insert(listA.value(i));	
	
	for (int i=0; i<listB.size(); i++)
		setB.insert(listB.value(i));	
	
	setC = setA - setB;

	listC = setC.toList();
	listC.sort();

	return listC.join(", ");		
}


/*
*
*/
/*
QString ModuleThreeFunction::setCalculate(const QString& str_A, const QString& str_B, const QChar flag)
{
	QString strA = deBlank(str_A);
	QString strB = deBlank(str_B);
	QStringList listA = strA.split(",", QString::SkipEmptyParts);
	QStringList listB = strB.split(",", QString::SkipEmptyParts);
	QStringList listC;
	
	QSet<QString> setA;
	QSet<QString> setB;
	QSet<QString> setC;	

	for (int i=0; i<listA.size(); i++)
		setA.insert(listA.value(i));	
	
	for (int i=0; i<listB.size(); i++)
		setB.insert(listB.value(i));	

	
	switch (flag) {
	case "+":
		setC = setA + setB;
		break;
	case "&":
		setC = setA & setB;
		break;
	case "-":
		setC = setA - setB;
		break;
	default:
	}
	
	listC = setC.toList();
	return listC.join(", ");
}
*/
