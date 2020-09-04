#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
} ;

int main(){
	struct student stuarr[3]=
	{
		{"张三",18,100},
		{"李四",19,80},
		{"王五",20,90}
	};
	// stuarr[2].name = "赵六"； 可以后续进行修改 
	
	for(int i = 0;i<3;i++)
	{
		cout<<"姓名："<<stuarr[i].name
		    <<"，年龄："<<stuarr[i].age
			<<",分数："<<stuarr[i].score<<endl;
	} 
	
	
	
	system("pause");
	return 0;
}
