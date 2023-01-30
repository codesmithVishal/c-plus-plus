/* write a program to find the sum of digit 
means number is 1111 then  1+1+1+1 =  4; 
  Logic; 
  find nd modulo of number by 10 and save result into sum; 
  and dive number by 10; 

  */
 #include<iostream>
 using namespace std; 

 int main()
 {
    int number, sum =0;  
    cout<<"Enter any number: "<<endl; 
    cin>>number; 
     while (number>0)
     { 
        sum = sum+number%10; 
        number = number/10;
    }

    cout<<sum; 

 } 
