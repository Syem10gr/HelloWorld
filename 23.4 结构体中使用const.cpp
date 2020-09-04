#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
} ;

// 函数中的形参改为指针，可以减少占用的内存空间 
void printstudent(const student * s) // 前加 const，不可修改 
{
	// s->age=150;  有 const，会报错 
    cout<<"姓名："<<s->name
        <<",年龄："<<s->age
        <<",分数："<<s->score<<endl;
}

int main(){
	
	struct student s = {"张三",18,100};
	
	printstudent(&s);
	
	
	
	
	
	system("pause");
	return 0;
}
