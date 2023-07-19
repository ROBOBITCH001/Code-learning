#include <iostream>  
using namespace std;

int main()
{

int a[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};//3橫排,每排5個 
	    
for (int i=0;i<3;i++)//建立橫排高度索引 
{
	for(int j=0;j<5;j++)//定義每個橫排該顯示多少數字
	{
		cout<<a[i][j]<<' ';//將建立的索引顯示出來 
	}
		cout<<"\n";
}

} 
