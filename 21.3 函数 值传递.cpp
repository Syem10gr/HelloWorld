#include <iostream>
using namespace std;

// ����һ��ʵ���������ֽ��н����ĺ��� 
// �����������Ҫ����ֵ��������ʱ�����д void 
void swap(int num1, int num2)
{
	cout << "����ǰ��num1 = " << num1 << " ��num2 = " << num2 << endl ; 
	
	int temp = num1 ;
	num1 = num2 ;
	num2 = temp ; 
	
	cout << "������num1 = " << num1 << " ��num2 = " << num2 << endl ;
	
	return; // ����Ҫ����ֵʱ�����Բ�д return 
}

int main(){
	
	int a = 10 ;
	int b = 20 ;
	
	swap(a,b);
	
	system("pause");
	return 0;
}
