#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;

    cout<<"Enter choice:=";
    cin>>choice;
    
    char ch = 'A' ;

    for (int i = 1; i <= choice; i++)
    {
        for (int j = 1; j <= choice; j++)
        {
            cout<<ch<<"\t";
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}