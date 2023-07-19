#include <iostream>  
using namespace std;
int main()
{
	string s;
	int n;//輸入位移的數目
	cin>>n>>s; 
	int len = s.size();
	n=n%26; //不讓位移成原本的樣子
	for (int i = 0; i < len; i++)
	{
    	c=int(s[i]-n);//往前位移n個字母
		if (c<65)//避免超過A
			s[i]=s[i]+26-n;//前移超過了A補償26個位數後減n
	 	else
	 		s[i]=s[i]-n;	//減n
	}
	cout << s << '\n';
}
