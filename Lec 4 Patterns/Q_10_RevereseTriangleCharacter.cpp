#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;

    
    
    for (int i = 0; i < choice; i++)
    {
        for (char j ='A'+i; j >='A'; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}