#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int op;
    cout<<"Enter the two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Enter the operation you want to perform: "<<endl;
    cin>>op;
    float ans;

    switch (op)
    {
    case 0:
        cout<<"Operation performed is subtraction"<<endl;
        ans = a-b;
        // continue;
        break;
    case 1 :
        cout<<"Operation performed is addition"<<endl;
        ans = a + b;
        break;
    default:
        cout<<"Invalid Operation"<<endl;
        break;
    }
    cout<<"Your ans is: "<<ans<<endl;
    return 0;
}