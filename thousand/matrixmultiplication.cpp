/* write a program for matrix multiuplication
*/

#include<iostream>
using namespace std;  

int main()
{
    // taking matrix size
    int a,b;
    
    cout<<"Enter the number of row and column you want in matrix: "<<endl;
    cin>>a>>b;
    int item[a][b], price[a][b], total[a][b];
    //taking output from user
    int row, col;
    cout<<"Enter the element value for item"<<endl;  
    for(row=0; row<a;row++)
    {
        for(col=0; col<b;col++)
        {
            cin>>item[row][col];
        }        
    }
    // taking input for second array element 
    cout<<"Enter the element for price : "<<endl;
    for(row=0; row<a;row++)
    {
        for(col=0; col<b; col++)
        {
            cin>>price[row][col];            
        }
    }
    // output

    for(row=0; row<a;row++)
    {
        for(col=0; col<b; col++)
        {
            cout<<item[row][col]<<" ";            
        }
        cout<<endl;
    }
    cout<< " + "<<endl;
    for(row=0; row<a;row++)
    {
        for(col=0; col<b; col++)
        {
            cout<<price[row][col]<<" ";            
        }
        cout<<endl;
    }

    //performing multiplication
    int k; 
    for(row=0;row<a;row++)
    {   
        for(col = 0; col<b; col++)
        { int sum = 0;  
            for(k=0;k<a;k++)
            {
                //sum = sum + (item[k][row] * price[row][k]);  
                sum = sum + (item[row][k] * price[k][row]);  
            }
            total[row][col] = sum; 

        }
    }
    cout<<"  = "<<endl;
    //display
    for(row=0; row<a;row++)
    {
        for(col=0; col<b; col++)
        {
            cout<<total[row][col]<<" ";            
        }
        cout<<endl;
    }

    return 0;
}