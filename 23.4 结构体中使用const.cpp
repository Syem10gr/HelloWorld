#include <iostream>
using namespace std;
#include <string>

struct student
{
	string name;
	int age;
	int score;
} ;

// �����е��βθ�Ϊָ�룬���Լ���ռ�õ��ڴ�ռ� 
void printstudent(const student * s) // ǰ�� const�������޸� 
{
	// s->age=150;  �� const���ᱨ�� 
    cout<<"������"<<s->name
        <<",���䣺"<<s->age
        <<",������"<<s->score<<endl;
}

int main(){
	
	struct student s = {"����",18,100};
	
	printstudent(&s);
	
	
	
	
	
	system("pause");
	return 0;
}
