#include <iostream>
using namespace std;

int main(){
	
	// һ���������Ƶ���;��
	// 1.����ͳ�������������ڴ��еĳ��ȣ�
		int arr[5] = {1,2,3,4,5};
	 
	cout << sizeof(arr) <<endl;
	for(int i=0; i<5; i++)
	{
		cout << sizeof(arr[i]) <<endl;
	} 
	// 2.���Ի�ȡ�������ڴ��е��׵�ַ�� 
	cout << arr << endl; // 16���� 
	cout << &arr[0] << endl; // ������Ԫ�ص��׵�ַ 16���� 
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;
	cout << &arr[3] << endl;
	cout << &arr[4] << endl;
	
	system("pause");
	return 0;
}
