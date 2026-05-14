#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int marks[5]={};
    
    double price[]={98.99,105.67,30.00};

    

    // sizeof array
    // cout<<sizeof(marks)/sizeof(int)<<endl;
    
    
    //Get Inputted array by user
    for (int i = 0; i < 5; i++)
    {
        cin>>marks[i];
    }

    //Printing array 
    for (int i = 0; i < 5; i++)
    {
        cout<<marks[i]<<"\t";
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<price[i]<<"\t";
    }
 
    return 0;
}