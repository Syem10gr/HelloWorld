#include <iostream>
using namespace std;
    
int main(){
	
	// 空指针 用于初始化指针变量
	// 空指针指向的内存是不可以访问的
	 
	int * p = NULL ; 
	
	*p = 100 ; 
	
	cout << *p << endl ;
	
	
	
	
	
	system("pause");
	return 0;
}
