#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
} ;

// 1.ֵ���� 
void printstudent1(struct student s1)
{
	s1.age = 100;
	cout<<"�Ӻ���1��,������"<<s1.name
	    <<",���䣺"<<s1.age
	    <<",������"<<s1.score<<endl;
}
// 2.��ַ����
void printstudent2(struct student * p)
{
	p->age = 200;
	cout<<"�Ӻ���2��,������"<<p->name
	    <<",���䣺"<<p->age
	    <<",������"<<p->score<<endl;
}
 


int main(){
	
	struct student s1;
	s1.name="����";
	s1.age=18; 
	s1.score=100;
	// ע��ֵ���ݺ͵�ַ���ݵ����� 
    printstudent1(s1);
    //printstudent2(&s1);
    cout<<"main������,����Ϊ"<<s1.name
	    <<",����Ϊ"<<s1.age
	    <<",����Ϊ"<<s1.score<<endl;
	
	system("pause");
	return 0;
}
