#include "modulefourfunction.h"
#include <QStringList>
#include <QChar>



QString ModuleFourFunction::deBlank(const QString &strs)
{
	QString tmp = strs;
	int len = strs.length();
	for (int i=0;i<len;i++)
	{
		if (strs.at(i).isSpace())
		{
		    tmp[i] = QChar(','); 
		}
	}
	

	return tmp;
}

QString ModuleFourFunction::deSymbol(const QString &strs)
{
	QString tmp = strs;
	
	int len = strs.length();
	for (int i=0;i<len;i++)
	{
		if (strs.at(i) == QChar('('))
		{
		    tmp[i] = QChar('<'); 
		} else if (strs.at(i) == QChar(')')) {
		    tmp[i] = QChar('>'); 
		}
	}
	
	return tmp;
}

ModuleFourFunction::ModuleFourFunction(QString strSet, QString strR)
{
    //初始化成员 set
	strSet = deBlank(strSet);
	//对于List类型, [], .at(), .value() 基本具有相同功能
	//.at()返回的是const 引用，.value() 返回的是变量， [] 返回的是引用
	QStringList listA = strSet.split(",", QString::SkipEmptyParts);
	for (int i=0; i<listA.size(); i++)
		set.insert(listA.value(i));
	


    //初始化成员R
	strR = deSymbol(strR);
	strR = deBlank(strR);
	QStringList listB;
	QRegExp rx("<(.*)>");
	rx.setMinimal(true);
	int pos = 0;
	while ((pos = rx.indexIn(strR, pos)) != -1 ) {
		listB << rx.cap(1);
		pos += rx.matchedLength();
	}


	for (int i=0; i<listB.size(); i++) {
		QStringList listTmp;
		listTmp = deBlank(listB.at(i)).split(",", QString::SkipEmptyParts);

        R.insert(listTmp[0], listTmp[1]);
	}
    /*
    调试查看R关系，需引入c++头文件
    QMultiMap<QString,QString>::iterator i = R.begin();
    while (i!=R.end()) {
        cout << i.key().toStdString();
        cout << "->";
        cout << i.value().toStdString();
        cout << endl;
        i++;
    }
    */


    //初始化成员matrix
    for (QSet<QString>::iterator i=set.begin(); i!=set.end(); i++) {
        for(QSet<QString>::iterator j=set.begin(); j!=set.end(); j++) {
            matrix[QPair<QString, QString> (*i, *j)] = 0;
        }
    }

    for (QMultiMap<QString, QString>::iterator i=R.begin(); i!=R.end(); i++) {
        matrix[QPair<QString, QString>(i.key(), i.value())] = 1;
    }

}


QString ModuleFourFunction::relations()
{
    QString result;

    //如果该关系对应的邻接矩阵的主对角线元素都为1，则该关系具有自反性；如果该关系对应的邻接矩阵的主对角线元素都为0，则该关系具有反自反性；
    QMap<QPair<QString, QString>, int>::iterator i = matrix.begin();
    int count = 0;
    while (i!=matrix.end()) {

        if ((i.key().first == i.key().second) && i.value()==1) {
            count++;
        }
        i++;
    }
    if (count == set.size())
        result += " 自反性 ";
    else if (count == 0)
        result += " 反自反性 ";


    //如果该关系对应的邻接矩阵具有对称性，则该关系具有对称性；如果该关系对应的邻接矩阵除主对角线元素之外的任何元素R[i][j]=1时，R[j][i]必等于0，则该关系具有反对称性；
    bool flag = true;
    for (i=matrix.begin(); i!=matrix.end(); i++) {
        if (i.value() == matrix[QPair<QString, QString> (i.key().second, i.key().first)])
            continue;
        else {
            flag = false;
            break;
        }
    }
    if (flag)
        result += " 对称性 ";

    flag = true;
    for (i=matrix.begin(); i!=matrix.end(); i++) {
        if (i.key().first == i.key().second)
            continue;
        else if (i.value() == 1) {
            if (matrix[QPair<QString, QString>(i.key().second, i.key().first)] != 0) {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        result += " 反对称性 ";

    //如果该关系对应的邻接矩阵当元素R[i][j]=1且R[j][k]=1时，必有R[i][k]=1，则该关系具有传递性；
    flag = true;
    for (i=matrix.begin(); i!=matrix.end(); i++) {
        if (i.value() == 1) {

            for(QMap<QPair<QString, QString>, int>::iterator j=matrix.begin(); j!=matrix.end(); j++) {
                if (matrix[QPair<QString, QString> (i.key().second, j.key().first)] == 1) {
                    if (matrix[QPair<QString, QString> (i.key().first, j.key().first)] != 1) {
                        flag = false;
                        break;
                    }
                }
            }
            if (!flag)
                break;
        }
    }
    if (flag)
        result += " 传递性 ";

    return result;
}

