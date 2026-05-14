#include<iostream>
#include<string>

using namespace std;

int reverseArray(int arr[],int size){
    int start = 0,end = size - 1;
    
    //Reversing An array 
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    // Printing an array
    cout<<"\nArray after reverse :=";
    for (int i = 0; i < 5; i++){
        cout<<"\t"<<arr[i]<<"\t";
    }
}

int main(){
    
    int arr[5]={};
    
    int size;
    //Get Inputted array by user
    cout<<"Enter The Element of an array:=\n\n";
    for (int i = 0; i < 5; i++){
        cout<<"Enter element of arr["<<i<<"]:=";
        cin>>arr[i];
    }
    
    size = sizeof(arr)/sizeof(int);
    
    
    cout<<"\nArray before reverse:=";
    for (int i = 0; i < 5; i++){
        cout<<"\t"<<arr[i]<<"\t";
    }
    
    reverseArray(arr,size);
    
    return 0;
}