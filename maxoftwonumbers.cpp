#include<iostream>
using namespace std;

int main(){

    /*int num1,num2,max;
    cout<<"Enter two numbers\n";
    cin>>num1>>num2;

    max=num1;
    if(num2>max)
    {
        max=num2;
    }
    cout<<"\nThe greater number";*/

    int num1, num2 ;

    cout<<"Enter first number:";
    cin>>num1;

    
    cout<<"Enter second number:";
    cin>>num2;
    cout<<"Largest number is: ";

    switch (num1, num2)
    {
        case false:
            cout<<num2<<endl;
            break;
        case true:
        cout<<num1<<endl;
        break;
        default:

    }
} 
    /*if(num1 > num2)
   {
        opt = 1;
    }
    else{
        opt =0;
    }    
        switch(opt)
        
        {case 1:
        cout<< num2 +"is greater than " + num1;
        break;
        
        case 2:
        cout<< num1 +"is greater than " + num2;
        break;
        default:
        cout<<"invalid input";
    }

}*/