#include <iostream>
using namespace std;
    
    void swap01(int a,int b)
    {
    	int temp = a ;
		a = b ; 
		b = temp ;
		cout << "swap01 a = " << a << endl ;
    	cout << "swap01 b = " << b << endl ;
	} 
	
	void swap02(int *p1,int *p2) 
    {
    	int temp = * p1 ;
    	*p1 = *p2 ;
    	*p2 = temp ;
    	cout << "swap02 a = " << *p1 << endl ;
    	cout << "swap02 b = " << *p2 << endl ;
	} 
    
    int main(){
    	
	int a = 10 ;
	int b = 20 ;
	swap01(a,b) ;  // 1.ֵ����
	cout << "a = " << a << endl ;
	cout << "b = " << b << endl << endl ;
	
	swap02(&a,&b) ;  // 2.��ַ���� 
	cout << "a = " << a << endl ;
	cout << "b = " << b << endl << endl ;
	
	//  ֵ���� ���ı��βΣ����ı�ʵ�� 
	// ��ַ���ݣ��ı��βΣ�Ҳ�ı�ʵ��
	cout << "1. �����㶨��һ������void add��int a, int b��������� a �� b �����βΡ�" << endl ;
	cout << "2. ������к������õ�ʱ��add��1, 2��������� 1 �� 2 ����ʵ�Ρ�" << endl ;
    
    
	system("pause");
	return 0;
}
