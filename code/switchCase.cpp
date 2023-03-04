/*Program definition: */

#include <iostream>
using namespace std;
class Election
{
    int can[5];

public:
    void count(int value[])
    {
        for(int i=0;i<5;i++){
            can[i] =value[i];        
        }
    }
    int votecount(int number);
    int Display();
    int winner();
};

int Election::votecount(int number){
   
    switch (number)
    {
    case 1:
        can[0]=can[0]+1;
        break;
    case 2:
        can[1]=can[1]+1;
        break;
    case 3:
        can[2]=can[2]+1;
        break;
    case 4:
        can[3]=can[3]+1;
        break;
    case 5:
        can[4]=can[4]+1;
        break;
    default:
        can[5]= can[5]+1;
        break;
    }
}

int Election::Display()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Candidate" << i + 1 << "Vote is =" << can[i]<<endl;
    }
}

int Election::winner()
    {
        int i = 0;
        int winner = can[i];
        for (i = 1; i < 5; i++)
        {
            if (winner < can[i])
            {
                winner = can[i]; 
            }
        }
        cout<<winner<<endl; 
        
        for(int i=0; i<6; i++)
        {
            if(can[i]==winner)
            {
                cout <<i+1<<" is winner";     
            }
        }
        
    }
int main()
{
    Election valsad;

    int a;
    int value[5] = {0};
    valsad.count(value); 
    for (int i = 0; i< 10; i++)   
    {
        cout << "Enter Number between 1 to 5" << endl;
        cin >> a;
        valsad.votecount(a);
    }
    valsad.Display();
    valsad.winner();

    return 0;
}