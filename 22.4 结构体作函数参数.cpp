#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
} ;

// 1.值传递 
void printstudent1(struct student s1)
{
	s1.age = 100;
	cout<<"子函数1中,姓名："<<s1.name
	    <<",年龄："<<s1.age
	    <<",分数："<<s1.score<<endl;
}
// 2.地址传递
void printstudent2(struct student * p)
{
	p->age = 200;
	cout<<"子函数2中,姓名："<<p->name
	    <<",年龄："<<p->age
	    <<",分数："<<p->score<<endl;
}
 


int main(){
	
	struct student s1;
	s1.name="张三";
	s1.age=18; 
	s1.score=100;
	// 注意值传递和地址传递的区别 
    printstudent1(s1);
    //printstudent2(&s1);
    cout<<"main函数中,姓名为"<<s1.name
	    <<",年龄为"<<s1.age
	    <<",分数为"<<s1.score<<endl;
	
	system("pause");
	return 0;
}
