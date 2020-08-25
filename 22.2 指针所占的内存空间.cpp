#include <iostream>
using namespace std;
    
    int main(){
	
	int a = 10 ;
	
    int * p = & a ; // 简便创建指针的语法 
	/*
        int * p ;
        p = &a ;
    */
    
    cout << sizeof(p) << endl ;
    cout << sizeof(int *) << endl ;
    cout << sizeof(float *) << endl ;
    cout << sizeof(double *) << endl ;
    cout << sizeof(char *) << endl ;
    
	system("pause");
	return 0;
}
