#include <iostream>
using namespace std;
    
    int main(){
	
	int a = 10 ;
	int b = 20 ; 
	
	// 1.const����ָ�� --- ����ָ�� 
	// ����ָ���ָ������޸ģ���ָ��ָ���ֵ�����޸� 
	const int * p = &a ; 
	// *p = 20 ; ���� 
	p = &b ; // ��ȷ 
	cout << *p << endl ; 
	
	
    // 2.const���γ��� --- ָ�볣��
    // ָ�볣����ָ�򲻿��Ըģ���ָ��ָ���ֵ�����޸�
    int * const p2 = &a ; 
    *p2 = 20 ; //��ȷ
	// p2 = &b ; ���� 
    cout << *p2 << endl ;  
    
    
    // 3.const������ָ�룬�����γ��� 
    // ������£�ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵҲ�����Ը� 
	const int * const p3 = &a ;
	// *p2 = 20 ; ���� 
	// p2 = &b ; ���� 
	
	cout << " const����ʲô��ʲô�Ͳ����޸� " << endl ; 
	
	
	system("pause");
	return 0;
}
