#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;
    
    int temp = 1 ;

    for (int i = 1; i <= choice; i++)
    {
        for (int j = 1; j <= choice; j++)
        {
            cout<<temp<<"\t";
            temp++;
        }
        cout<<endl;
    }
    
    return 0;
}