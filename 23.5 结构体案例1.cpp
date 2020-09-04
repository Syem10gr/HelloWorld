#include <iostream>
using namespace std;
#include <string>

#include <stdlib.h>
// rand()函数所需要的头文件
#include <ctime>
// 随机数种子所需要的头文件 

struct student
{
	string Sname;
	int score;
};

struct teacher
{
	string Tname;;
	struct student Sarr[5];
} ;

void allocateSpace(struct teacher Tarr[ ],int len)
{
	string nameSeed="ABCDE";
	for(int i = 0;i<len;i++)
	{
		Tarr[i].Tname = "老师_"; 
		Tarr[i].Tname += nameSeed[i];
		for(int j=0;j<5;j++)
		{
			Tarr[i].Sarr[j].Sname = "学生_";
			Tarr[i].Sarr[j].Sname += nameSeed[j];
			
			int random=rand() % 61+40; //40~100 
			Tarr[i].Sarr[j].score = random;
		}
	}
}

void printinfo(struct teacher Tarr[ ],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<"老师姓名："<<Tarr[i].Tname<<endl;
		for(int j=0;j<5;j++)
		{
			cout<<"学生姓名："<<Tarr[i].Sarr[j].Sname
	            <<",学生分数："<<Tarr[i].Sarr[j].score<<endl; 
		}
	}
}

int main(){
	// 随机数种子 
	srand((unsigned int)time(NULL)); 
	
	struct teacher Tarr[3];
	int len=sizeof(Tarr) / sizeof Tarr[0];
	allocateSpace(Tarr,len);
	printinfo(Tarr,len);
	
	system("pause");
	return 0;
}
