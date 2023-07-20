#include<iostream>
#include<string>
using namespace std;
int main()
{
string s1,s2,n1,n2;
 
cin>>s1>>n1>>s2>>n2;
if(s1==s2&&n1==n2)
	{
		cout<<"GOOD\n";
	}
else if(s1!=s2&&n1!=n2)
	{
		cout<<"OTZ\n";	
	}
else
	{
		cout<<"=~=\n";
	}
}
