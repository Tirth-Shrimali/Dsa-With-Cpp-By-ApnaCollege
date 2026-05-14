#include<iostream>
#include<string>
#include<utility>
using namespace std;

pair <int,int> sumProduct(int arr[],int size){
    int sum = 0;
    int product = 1;

    for (int i = 0; i < 5; i++){
        sum += arr[i];
        product *= arr[i];
    }
    return {sum,product};
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
    
    pair<int,int> result= sumProduct(arr,size);

    cout<<"Sum of an array:= "<<result.first;
    cout<<"\nProduct of an array:= "<<result.second;
    
    return 0;
}