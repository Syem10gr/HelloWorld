#include <iostream>
using namespace std;
    
    int main(){
	
	// 野指针变量指向非法的内存空间 
	// 避免出现野指针 
	
	int * p = (int *)0x1100 ; 
	
	// cout << *p << endl ; 
	
	
	system("pause");
	return 0;
}
