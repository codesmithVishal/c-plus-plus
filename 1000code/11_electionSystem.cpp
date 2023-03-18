/*Program definition: */

#include <iostream>
using namespace std;
// int electionCount(int number)
// {
//     switch (number)
//     {
//     case 1:

//         break;

//     default:
//         break;
//     }
// }
int main()
{
    int candidate[6] = {0};
    int counter = 0;

    int number;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter the number between 1 to 5 "<<endl;
        cin >> number;

        switch (number)
        {
        case 1:
            candidate[0]++;
            break;
        case 2:
            candidate[1]++;
            break;
        case 3:
            candidate[2]++;
            break;
        case 4:
            candidate[3]++;
            break;
        case 5:
            candidate[4]++;
            break;
        default:
            candidate[5]++;
            break;
        }

        counter++;
    }

    for (int i = 0; i < 6; i++)
    {
        cout<<"Wote for candidate"<<i+1<<" "<<candidate[i]<<endl;
    }

    cout<<endl<<" Total count"<<counter<<endl; 
    int highest=candidate[0]; 
    int i =0;
   //  int j = 0; 
    while (i<6)    
    {  
        if(highest<candidate[i])
        {
            highest = candidate[i];         
        }
        i++; 
    }

    for(int  i=0; i<6; i++)
    {
        if(highest==candidate[i])
        {
            cout<<" Candidate"<< i+1 << "is winner with"<<highest<<endl; 
        }
    }
    
    return 0;
}