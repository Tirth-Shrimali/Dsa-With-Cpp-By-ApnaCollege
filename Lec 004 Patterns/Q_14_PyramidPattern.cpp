#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;
    
    
    for (int i = 0; i < choice; i++)
    {
        for (int j = 0; j < choice-i-1; j++)//spaces
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i+1; j++)//data
        {
            cout<<j;
        }
        
        for (int j = i; j >0; j--)//backward
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    
    return 0;
}