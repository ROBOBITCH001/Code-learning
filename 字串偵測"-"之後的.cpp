#include <iostream>  
#include<string>
using namespace std;


int main()
{
    string s;
    cin>>s;
    cout<<s[0];//優先印出首個字母 
    for (int i =0; i<s.size();i++)//從零開始讀取整串字元 
    {
        if (s[i]=='-')//如果是-之後的 
        cout<<s[i+1];//第一個字，就印出來 
    }




    return 0;

} 
