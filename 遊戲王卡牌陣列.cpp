#include<iostream>
using namespace std;
int main()
{	string arr[10];//建立一個十格的陣列 
	int num,putnumber;
	string card;//輸入資料 
	cin>>num;//輸入共多少筆資料
	
	for (int i=0;i<num; ++i) 
	{
		cin>>card>>putnumber;//輸入資料與資料存放位置 
		arr[putnumber-1]=card;
		
		
	}
	for(int j=0;j<10;j++)//將10個陣列印出來 
	{
		if(arr[j].empty())//如果那格是空的印出EMPTY 
			cout<<"EMPTY\n";
		else
			cout<<arr[j]<<'\n';//印出存在裡面的資料 
	}
}
