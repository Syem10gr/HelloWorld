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
	swap01(a,b) ;  // 1.值传递
	cout << "a = " << a << endl ;
	cout << "b = " << b << endl << endl ;
	
	swap02(&a,&b) ;  // 2.地址传递 
	cout << "a = " << a << endl ;
	cout << "b = " << b << endl << endl ;
	
	//  值传递 ，改变形参，不改变实参 
	// 地址传递，改变形参，也改变实参
	cout << "1. 比如你定义一个函数void add（int a, int b），这里的 a 和 b 就是形参。" << endl ;
	cout << "2. 当你进行函数调用的时候，add（1, 2），这里的 1 和 2 就是实参。" << endl ;
    
    
	system("pause");
	return 0;
}
