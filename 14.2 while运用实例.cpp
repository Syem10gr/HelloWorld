#include <iostream>
using namespace std;
#include <cstdlib>  //C++中使用rand要添加 

//srand(time(NULL)); /*根据当前时间设置“随机数种子”*/

int main (){
	
	int a = rand() % 100 + 1 ; //生成 0 + 1 ~ 99 + 1 的随机数
//	cout<< a << endl;
	
	while (1) // "1" 一直循环 
	{
	    int co = 0 ;
        cin >> co ;
	
    	if(co > a){
	    	cout << "您猜的数字大了" <<endl; 
    	}
    	else if(co < a)
    	{
    		cout << "您猜的数字小了" <<endl; 
    	}
    	else
	    {
    		cout << "您猜对了" << endl;
    		break;//退出当前循环 
    	}
	}
	
	system("pause");
	return 0;
}
