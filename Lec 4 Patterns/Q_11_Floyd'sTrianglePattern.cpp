#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;
    
    int number = 1;
    
    for (int i = 0; i <= choice; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    
    return 0;
}