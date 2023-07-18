#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	while (cin>>n)//讓程式重複跑 
		if(n%4 ==0 and n%100!=0 )//判斷是4的倍數但不是100的倍數 
		cout<<"a leap year\n";
		else if(n%400==0)//判斷是400的倍數
		cout<<"a leap year\n";
		else
		cout<<"a normal year\n";
		
		

	return 0;
}
