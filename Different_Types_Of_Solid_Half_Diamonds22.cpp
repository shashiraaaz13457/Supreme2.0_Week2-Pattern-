#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2*row+1; col++)
        {
            if (col%2 != 0)
            {
                cout<<"*";
            }
            else{
                cout<<count;
                count++;
            }
            
        }
        cout<<endl;
    }
    int start = count - n;
    for (int row = 0; row < n; row++)
    {
        int k = start;
        for (int col = 0; col < 2*n-2*row-1; col++)
        {
            if (col%2 != 0)
            {
                cout<<"*";
            }
            else{
                cout<<k;
                k++;
            }
            
        }
        start = start - (n-row-1);
        cout<<endl;
    }
    
}