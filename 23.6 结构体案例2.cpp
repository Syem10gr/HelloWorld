#include <iostream>
using namespace std;
#include <string>

struct hero
{
	string name;
	int age;
	string sex;
};

void BubbleSort(struct hero Harr[],int len)
{
    for(int i=0;i<len -1;i++)
    {
    	for(int j = 0;j<len-i-1;j++)
    	{
    		if(Harr[j].age<Harr[j+1].age)
    		{
    			struct hero temp=Harr[j];
    			Harr[j]=Harr[j+1];
    			Harr[j+1]=temp;
			}
		}
	}
}

void printhero(struct hero Harr[],int len)
{
	for(int i=0;i<len ;i++)
    {
    	cout<<"姓名："<<Harr[i].name
       	    <<",年龄："<<Harr[i].age
       	    <<",性别："<<Harr[i].sex<<endl;
	}
}


int main(){
	
    struct hero Harr[5]=
    {
    	{"刘备",23,"男"},
    	{"张飞",20,"男"},
    	{"关羽",22,"男"},
    	{"赵云",21,"男"},
    	{"貂蝉",19,"女"}
	};
    
    int len = sizeof(Harr) / sizeof(Harr[0]);
    for(int i = 0;i<len;i++) 
	{
       	cout<<"姓名："<<Harr[i].name
       	    <<",年龄："<<Harr[i].age
       	    <<",性别："<<Harr[i].sex<<endl;
	}
    
    BubbleSort(Harr,len);
    cout<<endl;
    printhero(Harr,len);
    
	system("pause");
	return 0;
}
