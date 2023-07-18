#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];//宣告一個為n的陣列 
	for (int j=0; j<n;j++ )//輸入會有幾個數字 
	{
		cin>>a[j];//輸入數字
	}
	for (int f=1;f<=5; f++){//印出五次 
			for (int j=0; j<n;j++ )
				{
					cout<<a[j];//印出數字 
				}
	}
//這破東西的功能是覆誦輸入的數字 	
}
