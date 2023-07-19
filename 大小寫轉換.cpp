#include <iostream>  
using namespace std;
int main()
{
	string s;
	int n;
	cin>>n>>s;//輸入位數(其實沒作用) 
	int len = s.size();//len=字元長度 
	for (int i = 0; i < len; i++)
	{
    if (s[i] > 'Z') s[i] -= 32;//轉換成大寫 
	
	//A~Z 的 ASCII 為 65 ~ 90
	//a~z 的 ASCII 為 97 ~ 122
	//同一個字母的大小寫 ASCII 會相差 32
	//所以可以利用以上三點特質來做大小寫的轉換
    
	else s[i] += 32;//轉換成小寫 
	}
cout << s << '\n';
}
