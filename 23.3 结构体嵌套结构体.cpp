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
	t1.name = "陈老师";
	t1.age = 40;
	t1.stu.name = "张三";
	t1.stu.age = 20;
	t1.stu.score = 80;
	cout<<"老师姓名："<<t1.name<<endl
	    <<"老师编号："<<t1.id<<endl
	    <<"老师年龄："<<t1.age<<endl
	    <<"老师所辅导学生的姓名："<<t1.stu.name<<endl
	    <<"学生年龄："<<t1.stu.age<<endl
	    <<"学生分数："<<t1.stu.score<<endl; 
	
	system("pause");
	return 0;
}
