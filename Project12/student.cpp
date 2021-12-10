#include <iostream>
#include"student.h"  
#include<string>
using namespace std;
Student::Student(int tnum, const char tname[20], char tsex) {
   num=tnum;
   strcpy_s(name, tname);
   sex = tsex;

}
void Student::setValue()
{
    num = 001;
    sex = 'N';
    strcpy_s(name, "NULL");
}
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
