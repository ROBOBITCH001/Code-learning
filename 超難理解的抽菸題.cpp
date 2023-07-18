#include<iostream>
#include<string>
using namespace std;

int main(){
	int smoke,butt,sig;
	while(cin>>smoke>>butt){//分次輸入菸和菸屁股 
        sig=smoke;//目前吸的菸 
        while(smoke>=butt){//菸>菸屁股 
            sig+=(smoke/butt);//菸除菸屁股並加到sig 
            smoke=(smoke/butt)+(smoke%butt);//菸=菸/菸屁股之商數,餘數 
        }
        cout<<sig<<"\n";
}
}


