#include <iostream>
using namespace std;
    
    int main(){
	
	int a = 10 ;
	int b = 20 ; 
	
	// 1.const修饰指针 --- 常量指针 
	// 常量指针的指向可以修改，但指针指向的值不可修改 
	const int * p = &a ; 
	// *p = 20 ; 错误 
	p = &b ; // 正确 
	cout << *p << endl ; 
	
	
    // 2.const修饰常量 --- 指针常量
    // 指针常量的指向不可以改，但指针指向的值可以修改
    int * const p2 = &a ; 
    *p2 = 20 ; //正确
	// p2 = &b ; 错误 
    cout << *p2 << endl ;  
    
    
    // 3.const既修饰指针，又修饰常量 
    // 此情况下，指针的指向不可以改，指针指向的值也不可以改 
	const int * const p3 = &a ;
	// *p2 = 20 ; 错误 
	// p2 = &b ; 错误 
	
	cout << " const修饰什么，什么就不能修改 " << endl ; 
	
	
	system("pause");
	return 0;
}
