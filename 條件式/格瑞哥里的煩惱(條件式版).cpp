#include<iostream>
#include<string>
using namespace std;

int main(){
	int y;
	cin>>y;
	if(y%4 == 0 and y%100!=0) 
	cout<<"a leap year\n";
	else if(y%400==0)
	cout<<"a leap year\n";
	else
	cout<<"a normal year\n";	
}
