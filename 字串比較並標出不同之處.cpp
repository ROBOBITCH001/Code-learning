#include<iostream>
using namespace std;
int main()
{
	int num;
	string d1,d2;
	cin>>num;//輸入做幾次 
	
	for (int i=0;i<num; ++i) //做幾次 
	{
		cin >> d1 >> d2;//輸入資料1和資料2 
		
		cout << d1 << '\n' << d2 << '\n';//將資料1&2先印出來 
		
		for (int j=0; j < d1.size();j++)//讀取資料 
			{
			if (d1[j]==d2[j])//如果資料相同印出"." 
				cout<<'.';
			else 
				cout<<'*';//如果資料不同印出"*"
			} 
		cout<<'\n''\n';
		
	}
	
}
