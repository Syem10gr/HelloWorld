#include <iostream>
using namespace std;
	
	// �����Ķ��壺
	// ����ֵ����  ������ �������б� 
	// {
    //     ���������
	//     return���ʽ 
	// }
	
	int add(int num1,int num2) 
	{
		int sum = num1 + num2 ;
		return sum; 
	}
	
	int main(){
	
	int a = add(1,2);
	int b = add(3,4);
	cout << a << endl ;
	cout << b << endl ;
	
	system("pause");
	return 0;
}
	
