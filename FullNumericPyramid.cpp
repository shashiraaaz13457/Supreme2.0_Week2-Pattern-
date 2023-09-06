#include<iostream>
using namespace std;

//unsolved
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    for (int rows = 0; rows < num; rows++)
    {
        for (int spaces = 0; spaces < num-rows-1; spaces++)
        {
            cout<<" ";
        }
        
        for (int col = 0; col < 2*rows+1; col++)
        {
            if (col > rows)
            {
                cout<<2*rows-col+1;
            }
            else{
                cout<<rows+col+1;
            }
            
            
        }
        cout<<endl;
        
    }
    
    

}