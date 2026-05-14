#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int number1= 10, number2 =5;

    //Arithmatic operators
    cout<<"Sum := "<<number1+number2<<endl;
    cout<<"Difference := "<<number1 - number2<<endl;
    cout<<"Produc := t"<<number1 * number2<<endl;
    cout<<"Division := "<<number1 / number2<<endl;
    cout<<"Remender [Modulo] := "<<number1 % number2<<endl;


    //Relational Operator
    // int ;

    cout<<" 3 < 5 :="<<(3 < 5);
    cout<<"\n 3 > 5 :="<<(3 > 5);
    cout<<"\n 3 <= 5 :="<<(3 <= 5);
    cout<<"\n 3 == 5 :="<<(3 ==5);
    cout<<"\n 3 != 5 :="<<(3 != 5);
    
    //Logical Opertaors
    cout<<"\n (3 != 5) || (3 < 5) :="<<(3 != 5) || (3 < 5);
    cout<<"\n (3 != 5) && (3 < 5) :="<<((3 != 5) && (3 < 5));
    cout<<"\n (3 != 5) != (3 < 5) :="<<((3 != 5) != (3 < 5));
    

    //Unary Operator
    int i = 10;
    int j = i++;
    int k = ++i;
    cout<<"\n\nj = "<<j<<endl;
    cout<<"k = "<<k<<endl;
    cout<<"i = "<<i<<endl;



    return 0;
}