#include <iostream>
using namespace std;
    
    int main(){
	
    int a = 10 ;  // 定义指针 
    
    int * p ;  // 指针定义的语法： 数据类型 * 指针变量名 ； 
    
    p = &a ;  // 指针记录变量 a 的地址 
    
    cout << &a << endl ; // a的地址 
    cout << p << endl ; // 指针 p 就是地址 
    
    // 可通过解引用的方式来找到指针指向的内存中的数据 
    // 指针前加 * 表示解引用，
    
    *p = 1000 ; // 且可以修改 a 的数据 
	 
    cout << a << endl ;  
    cout << *p << endl ; 
    
    
	system("pause");
	return 0;
}
