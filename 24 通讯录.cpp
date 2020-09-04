#include <iostream>
using namespace std;
#include <string>
#define MAX 1000 //最大人数 

void showMenu()
{
	cout<<"*****************************"<<endl;
	cout<<"*****   1，添加联系人   *****"<<endl; 
	cout<<"*****   2，显示联系人   *****"<<endl; 
	cout<<"*****   3，删除联系人   *****"<<endl; 
	cout<<"*****   4，查找联系人   *****"<<endl; 
	cout<<"*****   5，修改联系人   *****"<<endl; 
	cout<<"*****   6，清空联系人   *****"<<endl; 
	cout<<"*****   0，退出通讯录   *****"<<endl; 
	cout<<"*****************************"<<endl;
}

struct person
{
	string name;
	int age;
	string phone;
	string addr;
};

struct addressbooks
{
    struct person personarr[MAX]; 
    int size; // 通讯录中人员数 
};

// 添加联系人 
void addperson(addressbooks * abs)
{
	if(abs->size == abs) // 判断通讯录是否已满 
	{
		cout<<"通讯录已满，无法添加"<<endl; 
		return;
	}
	else 
	{
		string name;
		cout<<"请输入姓名"<<endl;
		cin>>name; 
		abs->personarr[abs->size].name = name;
		
	} 
} 

int main(){
	
	addressbooks abs;
	abs.size = 0;
	
	
	while(true)
	{
		showMenu(); // 菜单调用 
    
        int select = 0; // 创建一个用户选择输入的变量 
        cin>>select;
    
    	switch(select) 
        {
            case 1: // 添加联系人
            addperson(&abs); // 用地址传递修饰实参 
    		break; 
    		
        	case 2: // 显示联系人
    		break; 
	    	
        	case 3: // 删除联系人
	    	break;
		
    		case 4: // 查找联系人
			break;
			
    		case 5: // 修改联系人
			break;
		
    		case 6: // 清空联系人
			break;
			
    		case 0: // 退出通讯录
	 	   system("pause");
	 	   return 0;
			break;
			
			default:
			break;
		}
	}
	
    
}
