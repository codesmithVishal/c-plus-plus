/*Program definition:
A computer manufacturing company  has the following monthly compensation policy to their sales persons:
 Minimum base salary : 1500.00
 Bonus for every computer sold.
 comissiono on totalmon th sales: 2%;


*/

#include <iostream>
using namespace std;
const int basesalry = 1500;
const int bonusrate = 200;
const float COMMISSION = 0.2;

int main()
{
    int quauntity;
    float gross_salary, price;
    float bonus, commission;

    cout << "Enter the quantity sold by sales person" << endl;

    cin >> quauntity; 
    cout<<"Enter the price of each computer: "<<endl;
    cin >>price; 
    bonus = bonusrate * quauntity;
    commission = quauntity * price * COMMISSION;
    gross_salary = basesalry + bonus + commission;
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"commission:"<<commission<<endl;   
    cout << "Total gross salary is: " << gross_salary<<endl;
    return 0;
}