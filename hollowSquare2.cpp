#include <iostream>
using namespace std;

int main(){
    int rowcount, colcount;
    cin>>rowcount;
    cin>>colcount;

    for (int  row = 0; row < rowcount; row++)
    {
        if (row==0 || row==4)
        {
            for (int col = 0; col < colcount; col++)
            {
                cout<<"* ";
            }
        }
        else{
            cout<< "* ";
            for (int i = 0; i < colcount-2; i++)
            {
                cout<<"  ";
            }
            cout<<"* ";
            
        }
        cout<<endl;
        
    }
    

    return 0;
}