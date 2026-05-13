#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;
    

    for (int i = 0; i < choice; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}