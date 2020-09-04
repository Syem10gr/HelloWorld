#include <iostream>
using namespace std;
#include <string>

// 创建学生数据类型：（姓名，年龄，分数） 
struct student
{
    string  name;
    int age;
    int score;
}s3; // 第三种：定义结构体时顺便创建变量  


int main(){
	
    // struct 结构体名 变量名 
    struct student s1;
    // 给 s1 属性赋值，通过 .访问结构体变量中的属性 
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100; 
    cout <<"姓名为"<<s1.name<<",年龄为"<<s1.age<<"，分数为"<<s1.score<<endl;
    
    // struct 结构体名 变量名 = {一值，二值，...}； 
    struct student s2 = {"李四",19,80}; 
    cout<<"姓名为"<<s2.name
	    <<",年龄为"<<s2.age
		<<"，分数为"<<s2.score<<endl;
    
    // 定义结构体时顺便创建变量 
    s3.name = "王五";
	s3.age = 20;
	s3.score = 90;
	cout<<"姓名为"<<s3.name
	    <<",年龄为"<<s3.age
		<<"，分数为"<<s3.score<<endl;
    
    
	system("pause");
	return 0;
}
