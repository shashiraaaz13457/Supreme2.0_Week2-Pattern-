#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for (int rows = 0; rows < n; rows++)
    {   
        for (int col = 0; col < 2*rows+1; col++)
        {
            if (col == 0)
            {
                cout<<"1";
                
            }
            else if (col == 2*rows)
            {
                cout<<rows+1;
            }
            else if(rows == n-1){
                if (col < n)
                {
                    cout<<" "<<col+1;
                }
                else{
                    break;
                }
                
                
            }
            
            else{
                cout<<" ";
            }
              
            
        }
        cout<<endl;
        
    }
    
}
