#include <iostream>
using namespace std;
    
    int main(){
	
	// ����ָ����������е�Ԫ�� 
	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; 
	cout << arr[0] << endl ;
	
	int * p = arr ; // ָ�������ָ�� 
	cout << *p << endl ; // ��һ��Ԫ�� 
	
	p++ ; // ��ָ�����ƫ���ĸ��ֽڣ�����ռ4���ֽڣ�
	
	cout << *p << endl ; // �ڶ���Ԫ�� 
	
	
	int * p2 = arr ; 
	
	for(int i = 0; i < 10; i++)
	{
		//cout << arr[i] << endl ;
		cout << *p2 << endl ;
		p2++ ;
	}
	
	
	system("pause");
	return 0;
}
