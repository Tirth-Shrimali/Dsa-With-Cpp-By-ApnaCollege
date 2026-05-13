#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;
    
    char ch = 'A';
    
    for (int i = 0; i < choice; i++)
    {
        for (int j = 0; j < i; j++)//spaces
        {
            cout<<" ";
        }
        for (int j = 0; j < choice-i; j++)//data
        {
            cout<<ch;
            ch++;
        }
        
        cout<<endl;
    }
    
    return 0;
}