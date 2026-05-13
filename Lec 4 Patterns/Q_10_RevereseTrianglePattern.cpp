#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;
    

    for (int i = 0; i <= choice - 1; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout<<j<<" ";

        }
        cout<<endl;
    }
    
    return 0;
}