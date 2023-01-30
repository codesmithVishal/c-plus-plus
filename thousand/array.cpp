/*  write a progra to display sum of colun of and row of array; 
*/

#include<iostream>
using namespace std; 

int main()
{
    int a[3][3],b[3][3];
    // to find sum of array; 
    int sum[3][3];

    int i,j;
    cout<<"Enter 1st array element"<<endl; 
    // taking array i/p
    //array1
    for(i=0;i<3;i++)
     {       for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }       
    }
    //array2
    cout<<"Enter 2nd array element :"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }

    //Showing o/p
    //array 1
    cout<<" Array 1:"<<endl;
    for(i=0;i<3;i++)
    {       for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }  
            cout<<endl;     
    }                   
    //array 2
    cout<<"Array 2 : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    // performing sum of two matrix  
    cout<<" sum of two matrix: ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    //now sum of adjecent
    for(i=0;i<3;i++)
    { 
        
        
            int rowsum=0; int k=0; int col=0;
                for(k=0;k<3;k++)
                {            
                rowsum = rowsum + a[i][k];
                col = col+ a[k][i];
                }
                cout<<" sum of row: "<<i+1<<" is "<<rowsum<<endl;            
                cout<<" sum of column: "<<i+1<<" is "<<col<<endl;            
            
            //cout<<rowsum;
        
    
        
    } 

    return 0;
}