#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
#include<string>
using namespace std;
int main()
{
	Student stud;//�������
	stud.setValue();
	Student stud1(007,"tcg", 'm');
	stud.display();              //ִ��stud�����display����
	return 0;
}
