#include<iostream>
using namespace std;
int main()
{
	int num;
	string d1,d2;
	cin>>num;
	
	for (int i=0;i<num; ++i) {
		cin >> d1 >> d2;
		
		cout << d1 << '\n' << d2 << '\n';
		
		for (int j=0; j < d1.size();j++)
			{
			if (d1[j]==d2[j])
				cout<<'.';
			else 
				cout<<'*';
			} 
		cout<<'\n''\n';
		
	}
	
}
