#include <iostream>
using namespace std;
#include <string>

// ����ѧ���������ͣ������������䣬������ 
struct student
{
    string  name;
    int age;
    int score;
}s3; // �����֣�����ṹ��ʱ˳�㴴������  


int main(){
	
    // struct �ṹ���� ������ 
    struct student s1;
    // �� s1 ���Ը�ֵ��ͨ�� .���ʽṹ������е����� 
    s1.name = "����";
    s1.age = 18;
    s1.score = 100; 
    cout <<"����Ϊ"<<s1.name<<",����Ϊ"<<s1.age<<"������Ϊ"<<s1.score<<endl;
    
    // struct �ṹ���� ������ = {һֵ����ֵ��...}�� 
    struct student s2 = {"����",19,80}; 
    cout<<"����Ϊ"<<s2.name
	    <<",����Ϊ"<<s2.age
		<<"������Ϊ"<<s2.score<<endl;
    
    // ����ṹ��ʱ˳�㴴������ 
    s3.name = "����";
	s3.age = 20;
	s3.score = 90;
	cout<<"����Ϊ"<<s3.name
	    <<",����Ϊ"<<s3.age
		<<"������Ϊ"<<s3.score<<endl;
    
    
	system("pause");
	return 0;
}
