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
    	cout<<"������"<<Harr[i].name
       	    <<",���䣺"<<Harr[i].age
       	    <<",�Ա�"<<Harr[i].sex<<endl;
	}
}


int main(){
	
    struct hero Harr[5]=
    {
    	{"����",23,"��"},
    	{"�ŷ�",20,"��"},
    	{"����",22,"��"},
    	{"����",21,"��"},
    	{"����",19,"Ů"}
	};
    
    int len = sizeof(Harr) / sizeof(Harr[0]);
    for(int i = 0;i<len;i++) 
	{
       	cout<<"������"<<Harr[i].name
       	    <<",���䣺"<<Harr[i].age
       	    <<",�Ա�"<<Harr[i].sex<<endl;
	}
    
    BubbleSort(Harr,len);
    cout<<endl;
    printhero(Harr,len);
    
	system("pause");
	return 0;
}
