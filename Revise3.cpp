#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
//Good one
    for (int rows = 0; rows < n; rows++)
    {
        char ch ;
        for (int col = 0; col < rows+1; col++)
        {
            // store the value in char type so that value will be in alphabet which we want as output.
            // Mapping 1 -> A , 2 -> B
            ch = col + 1 + 'A'-1;
            cout<<ch;
        }
        for (char reverse = ch; reverse > 'A'; )
        {
            // We use this here to firstly decrease the value then print it otherwise in loop after printing it decrement it.
            reverse--;
            cout<<reverse;
        }
        
        cout<<endl;
    }
    
}