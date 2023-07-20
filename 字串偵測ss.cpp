#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int num=s.size();
	bool b=false;
	for (int i =0;i<num;i++)//開始讀文字
	{
		if(s[i]=='s'&&s[i+1]=='s')//偵測到兩個ss黏再一起
		{
			b=true;//輸出true
			break;//跳出去
		}

	
	}
	if (b==true)
		cout<<"hiss\n";
	else
		cout<<"no hiss\n";
}
