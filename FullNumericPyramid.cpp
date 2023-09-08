#include<iostream>
using namespace std;

//unsolved
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    // for (int rows = 0; rows < num; rows++)
    // {
    //     for (int spaces = 0; spaces < num-rows-1; spaces++)
    //     {
    //         cout<<" ";
    //     }
        
    //     for (int col = 0; col < 2*rows+1; col++)
    //     {
    //         if (col > rows)
    //         {
    //             cout<<2*rows-col+2;
    //         }
    //         else{
    //             cout<<rows+col+1;
    //         }
            
            
    //     }
    //     cout<<endl;
        
    // }

    for (int row = 0; row < num; row++)
    {
        for (int spaces = 0; spaces < num-row-1; spaces++)
        {
            cout<<" ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<row+col+1;
        }
        
        for (int col = 0; col < row ; col++)
        {    
            cout<<2*row-col;
        }
        cout<<endl;
        
    }
    
}