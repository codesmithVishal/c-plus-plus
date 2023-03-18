/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
    int principle;
    float interestRate = 0.03;
    int year;
    cout << "Enter the  principle amount: " << endl;
    cin >> principle;
    cout << "Enter year you want to invest:" << endl;
    cin >> year;
     float totalbenifit; 

     for(int i =1; i<=year; i++ )
     {  
     float interestCalculation = principle * interestRate; 
        float AnnualValue = interestCalculation + principle; 
        cout<<" Value at end of year: "<<i<<" is "<<AnnualValue<<" and interest for "<<i<<" is\t"<<
        interestCalculation<<endl;  
        principle = AnnualValue;   
        totalbenifit= totalbenifit+interestCalculation;       
     }
    cout<<endl<<"Total interest: "<<totalbenifit<<endl;
    return 0;
}