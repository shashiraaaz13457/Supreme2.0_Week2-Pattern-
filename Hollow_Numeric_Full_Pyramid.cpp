#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n-row-1; space++)
        {
            cout<<" ";
        }
        int count = 1;
        for (int col = 0; col < 2*row+1; col++)
        {
            if (col == 0)
            {
                cout<<col+1;
            }
            else if (col == 2*row)
            {
                cout<<row+1;
            }
            else if (row == n-1)
            {
                if (col%2 == 0)
                {
                    cout<<count+1;
                    count++;
                }
                else{
                    cout<<" ";
                }
                
            }
            else{
                cout<<" ";
            }
            
            
        }
        cout<<endl;
        
    }
    
}