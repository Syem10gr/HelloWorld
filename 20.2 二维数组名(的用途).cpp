#include <iostream>
using namespace std;

int main(){
	
	// һ���������Ƶ���;��
	// 1.����ͳ�������������ڴ��еĳ��ȣ�
    int arr[2][3]={
		{1,2,3}	,
		{4,5,6}
	} ;
	cout << sizeof(arr) << endl ;  // �������� ռ���ֽ� 
	cout << sizeof(arr[0]) << endl ;  // ��һ�� ռ���ֽ� 
	cout << sizeof(arr[0][0]) << endl ;  // ��һ�е�һ�� ռ���ֽ�
	cout << sizeof(arr)/sizeof(arr[0]) << endl ;  // ���� 
	cout << sizeof(arr[0])/sizeof(arr[0][0]) << endl ;  // ���� 
	
	// 2.���Ի�ȡ�������ڴ��е��׵�ַ�� 
	cout << arr << endl; // 16����
	cout << &arr[1] << endl; // ������ �ڶ���Ԫ�� ���׵�ַ 16���� 
	cout << &arr[1][2] << endl; // ������ �ڶ��е�����Ԫ�� ���׵�ַ 16����
	
	system("pause");
	return 0;
}
