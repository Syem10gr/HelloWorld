#include <iostream>
using namespace std;

// ����������:
int max(int a,int b) ; 

// �����Ķ���:
int max(int a, int b)
{
    return a > b ? a : b ;
} 

// ���������ж����������ֻ����һ�ζ��� 
// �������Ķ����ں��棬����Ҫ��ǰ����������ôһ������ 

int main(){
	
	int a = 10 ;
	int b = 20 ;
	
	cout << max(a,b) << endl ;
	
	system("pause");
	return 0;
}
