#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int x;
	x = 15;
	int y;
	int n;
	cin>>y;
	n=y-x;
	if (n<=0)
	n=n+24;
	else
	n=n+0;
	if (n==24)
	n=0;
	cout<<n<<"\n";	
	
	return 0;
}
