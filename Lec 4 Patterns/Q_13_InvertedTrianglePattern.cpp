#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;
    
    
    for (int i = 0; i < choice; i++)
    {
        for (int j = 0; j < i; j++)//spaces
        {
            cout<<" ";
        }
        for (int j = 0; j < choice-i; j++)//data
        {
            cout<<i+1;
        }
        
        cout<<endl;
    }
    
    return 0;
}