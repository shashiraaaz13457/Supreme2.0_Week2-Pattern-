#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int star = 0; star < 2*n-row-2; star++)
        {
            cout<<"*";
        }
        for (int col = 0; col < 2*row+1; col++)
        {
            if(col%2 != 0){
                cout<<"*";
            }
            else{
                cout<<row+1;
            }
        }
        for (int star = 0; star < 2*n-row-2; star++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}