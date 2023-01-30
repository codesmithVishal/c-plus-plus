/* write  aprogram to  execute for loop; 

output pattern

1
22
333
4444
555555

*/
#include<iostream>
using namespace std;

int main()
{
    int i,j, n;
    cout<<"Enter row number : ";
    cin>>n; 

        for(i=0;i<=n; i++)
        {
            for(j=0;j<i;j++)
            {
                cout<<i;

            }
            cout<<endl;
        }
    return 0;
}
