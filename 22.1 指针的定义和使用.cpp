#include <iostream>
using namespace std;
    
    int main(){
	
    int a = 10 ;  // ����ָ�� 
    
    int * p ;  // ָ�붨����﷨�� �������� * ָ������� �� 
    
    p = &a ;  // ָ���¼���� a �ĵ�ַ 
    
    cout << &a << endl ; // a�ĵ�ַ 
    cout << p << endl ; // ָ�� p ���ǵ�ַ 
    
    // ��ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ��е����� 
    // ָ��ǰ�� * ��ʾ�����ã�
    
    *p = 1000 ; // �ҿ����޸� a ������ 
	 
    cout << a << endl ;  
    cout << *p << endl ; 
    
    
	system("pause");
	return 0;
}
