#include <iostream>
using namespace std;
#include <string>

#include <stdlib.h>
// rand()��������Ҫ��ͷ�ļ�
#include <ctime>
// �������������Ҫ��ͷ�ļ� 

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
		Tarr[i].Tname = "��ʦ_"; 
		Tarr[i].Tname += nameSeed[i];
		for(int j=0;j<5;j++)
		{
			Tarr[i].Sarr[j].Sname = "ѧ��_";
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
		cout<<"��ʦ������"<<Tarr[i].Tname<<endl;
		for(int j=0;j<5;j++)
		{
			cout<<"ѧ��������"<<Tarr[i].Sarr[j].Sname
	            <<",ѧ��������"<<Tarr[i].Sarr[j].score<<endl; 
		}
	}
}

int main(){
	// ��������� 
	srand((unsigned int)time(NULL)); 
	
	struct teacher Tarr[3];
	int len=sizeof(Tarr) / sizeof Tarr[0];
	allocateSpace(Tarr,len);
	printinfo(Tarr,len);
	
	system("pause");
	return 0;
}
