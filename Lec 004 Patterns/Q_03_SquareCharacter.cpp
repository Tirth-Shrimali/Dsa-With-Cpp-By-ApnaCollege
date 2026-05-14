#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;
    
    for (int i = 1; i <= choice; i++)
    {
        char ch ='A';
        for (int j = 1; j <= choice; j++)
        {
            cout<<ch<<"   ";
            ch =ch + 1 ;
        }
        cout<<endl;
    }
    
    return 0;
}