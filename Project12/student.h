#include<string>
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	Student() {};
	Student(int num,const char tname[20], char sex);
	void setValue();
	
private:
	int num;
	char  name[20]="NULL";
	char  sex;
};

