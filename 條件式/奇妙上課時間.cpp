#include<iostream>
#include<string>
using namespace std;

int main(){
	int h,m;
	cin>>h>>m;
	if (h>=17||h<7||h==7&&m<30)
	cout<<"Off School\n";
	else 
	cout<<"At School\n";
}
