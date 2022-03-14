#define _normal_calculator_
#define _git_push_
#include<iostream>

using namespace std;

int ads(){
    
    int sum, x , y;
    cout<<"Enter 2 numbers: ";
    cin>>x>>y;

    sum=x+y;

    cout<<"The addition of the following: "<<sum;

    

    return 0;
}

int mns(){

    int a,b,mss;

    cout<<"Enter two number: ";
    cin>>a>>b;

    mss = a-b;

    cout<<"The substraction of the given numbers :"<<mss<<endl;

    return 0;

}

int mul(){

    int mlp, x,y;

    cout<<"Enter first numbers: ";
    cin>>x;
    cout<<"Enter another number: ";
    cin>>y;

    mlp = x*y;

    cout<<"The multipliction of the given number: "<<mlp<<endl;

    return 0;

}

int div(){

    int dv, x,y;

    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;

    dv = x/y;

    cout<<"The division of the given numbers are: "<<dv<<endl;


    return 0;
}

int main(){

    int x;

    cout<<"Select from the following: \n 1 for addition: \n 2 for substraction: \n 3 for multi: \n 4 for division: \t"<<endl;
    cout<<"Enter your option: ";

    cin>>x; 

    switch (x)
    {
    case 1:
        ads();
        break;

    case 2:
        mns();
        break;

    case 3:
        mul();
        break;

    case 4:
        div();
        break;

    case 0:
        exit; 

    default:
        main();
    }



    return main();
}
