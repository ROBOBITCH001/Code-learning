#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	for (int n1=1;n1<=9; n1++)//被乘數1~9
	{
		for (int n2 =1; n2<=9;n2++)//乘數1~9
			{
				cout<<n1<<'*'<<n2<<'='<<n1*n2<<'\t';//被乘數 * 乘數 = 乘數被乘數(積)
			}
			cout<<"\n";
	}
	cout<<"\n";
}
