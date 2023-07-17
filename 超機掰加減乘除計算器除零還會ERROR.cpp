#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double a,b,c;
	char ch;
	cin>>a;
	cin>>ch;
	cin>>b;
	cout<<fixed <<setprecision(4);
	if (b!=0)
	cout<<a<<' '<<ch<<' '<<b<<" = ";
	
	if(ch == '+'){
	c=a+b;
	}
	else if(ch == '-')
		c=a-b;
	else if(ch == '*')
		c=a*b;
	else if(ch == '/')
		c=a/b;
	if(b == 0&&ch =='/' )
		cout<<"ERROR\n";

	else
	cout<<fixed <<setprecision(4) <<c<<endl;
	return 0;
}
