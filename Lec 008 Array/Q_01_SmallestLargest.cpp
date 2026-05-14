#include<iostream>
#include<string>
#include<climits>   //For INT_MAX

using namespace std;

int main(){
    
    int nums[5]={};

    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    //Get Inputted array by user
    cout<<"Enter The Element of an array:=";
    for (int i = 0; i < 5; i++)
    {
        cin>>nums[i];
    }

    //Printing array 
    for (int i = 0; i < 5; i++)
    {
        smallest = min(nums[i],smallest);
        largest = max(nums[i],largest);
    }
    
    cout<<"Smalest Number"<<smallest<<"\nLargest Number"<<largest;
    return 0;
}