#include<iostream>
#include<string>

using namespace std;

int linearSearch(int arr[],int size,int target){
    //Printing array 
    for (int i = 0; i < size; i++){
        if(arr[i] == target){//Found
            return i;
        }
    }
    return -1;//Not Found
}

int main(){
    
    int nums[5]={};

    int target;
    int size;
    //Get Inputted array by user
    cout<<"Enter The Element of an array:=";
    for (int i = 0; i < 5; i++){
        cin>>nums[i];
    }

    cout<<"Enter number for search:=";
    cin>>target;

    size = sizeof(nums)/sizeof(int);
    
    cout<< linearSearch(nums,size,target)<<endl;
    
    return 0;
}