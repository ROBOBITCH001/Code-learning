#include <iostream>  
using namespace std;
int main()
{
	int n;
	cin>>n;//輸入幾位數字 
	int a[n];
	for (int j=0;j<n;j++)
	{
		cin>>a[j];//輸入數字 
	}
	for (int j=n-1; j>=0;j-- )//n-1~0數 
	{
		cout<<a[j]<<"\n"; 
	}

}
