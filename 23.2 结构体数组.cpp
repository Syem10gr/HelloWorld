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
		{"����",18,100},
		{"����",19,80},
		{"����",20,90}
	};
	// stuarr[2].name = "����"�� ���Ժ��������޸� 
	
	for(int i = 0;i<3;i++)
	{
		cout<<"������"<<stuarr[i].name
		    <<"�����䣺"<<stuarr[i].age
			<<",������"<<stuarr[i].score<<endl;
	} 
	
	
	
	system("pause");
	return 0;
}
