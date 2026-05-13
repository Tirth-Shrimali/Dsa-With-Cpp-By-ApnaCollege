#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;
    
    for (int i = 1; i <= choice; i++)
    {
        for (int j = 1; j <= choice; j++)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}