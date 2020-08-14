#include <iostream>
using namespace std;

int main(){
	
	//do...while会先执行循环，再判断循环条件(区别 while)
	//执行(循环)直至... （？） 
	//任务：在屏幕中输出 0 到 9 这10个数字 
	int num= 0; 
	
	do
	{
		cout << num << endl;
		num++; // +1递增 
	} 
	while(num < 10);
	
	//while和do...while几乎一致 
	
	system("pause");
	return 0;
} 
