#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
} ;

int main(){
	
	teacher t1;
	t1.id = 10000;
	t1.name = "����ʦ";
	t1.age = 40;
	t1.stu.name = "����";
	t1.stu.age = 20;
	t1.stu.score = 80;
	cout<<"��ʦ������"<<t1.name<<endl
	    <<"��ʦ��ţ�"<<t1.id<<endl
	    <<"��ʦ���䣺"<<t1.age<<endl
	    <<"��ʦ������ѧ����������"<<t1.stu.name<<endl
	    <<"ѧ�����䣺"<<t1.stu.age<<endl
	    <<"ѧ��������"<<t1.stu.score<<endl; 
	
	system("pause");
	return 0;
}
