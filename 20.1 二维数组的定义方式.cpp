#include <iostream>
using namespace std;

int main(){
	// 二维数组定义方式：( 行 = 竖 ， 列 = 横 )
	// 1.数据类型  数组名[ 行数 ][ 列数 ] ;
	int arr[2][3];
	arr[0][0] = 1 ;
	arr[0][1] = 2 ;
	arr[0][2] = 3 ;
	arr[1][0] = 4 ;
	arr[1][1] = 5 ;
	arr[1][2] = 6 ;
	
	for(int i = 0; i<2; i++)  // 外层循环，打印行数 
	{
		for(int j = 0; j<3; j++)  // 内层循环，打印列数 
	    {
		    cout << arr[i][j] << " " ; 
    	} 
    	cout << endl;
	} 
	
	cout << endl;
	
	// 2.数据类型  数组名[ 行数 ][ 列数 ] = { {数据1 ， 数据2} ， {数据3 ，数据4} } ;
	int arr2[2][3]={
		{1,2,3}	,
		{4,5,6}
	} ;
	
	for(int i = 0; i<2; i++)  // 外层循环，打印行数 
	{
		for(int j = 0; j<3; j++)  // 内层循环，打印列数 
	    {
		    cout << arr2[i][j] << " " ; 
    	} 
    	cout << endl;
	} 
	
	cout << endl;
	
	// 3.数据类型  数组名[ 行数 ][ 列数 ] = { 数据1 ， 数据2 ， 数据3 ， 数据4 } ;
	int arr3[2][3] = {1,2,3,4,5,6} ;
	
	for(int i = 0; i<2; i++)  // 外层循环，打印行数 
	{
		for(int j = 0; j<3; j++)  // 内层循环，打印列数 
	    {
		    cout << arr3[i][j] << " " ; 
    	} 
    	cout << endl;
	} 
	
	cout << endl;
	
	// 4.数据类型  数组名[  ][列数] = { 数据1 ， 数据2 ， 数据3 ， 数据4 } ;
	int arr4[ ][3] = {1,2,3,4,5,6} ;
	
	for(int i = 0; i<2; i++)  // 外层循环，打印行数 
	{
		for(int j = 0; j<3; j++)  // 内层循环，打印列数 
	    {
		    cout << arr4[i][j] << " " ; 
    	} 
    	cout << endl;
	} 
	
	cout << endl;
	
	system("pause");
	return 0;
}
