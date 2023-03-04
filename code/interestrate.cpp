/*Program definition: */

#include <iostream>
using namespace std;

int main()
{
    int year;
    int principleAmount;
    float interestrate;
    int interestCalculation;
    float totalValue; 
   
    cout<<"Enter the value of year, prncipleAmaount, interestrate"<<
    "interestCalculateion and totalvalue"<<endl;
    cin>>year>>principleAmount>>interestrate;
    for (int i = 0; i<year; i++)
    {
    interestCalculation = principleAmount * (interestrate/100); 
    totalValue =  principleAmount + interestCalculation;
    principleAmount = totalValue;   
    }
    cout<<"Interest rate"<<interestCalculation<< "Total Value" <<totalValue;
    
    


    return 0;
}