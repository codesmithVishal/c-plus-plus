// Write a c Program to  show working of  Default argument
/*  You can define value of function argument in prototype and  not require to write in fuction call 
but (1)  You can pass default value in trailing parameter not to middal parameter
    (2)  so add default value in right to left; 
    use when you need to repeatedly pass some value or some constant value  that time default arguments are helping
    */
//write program to calculate intere
   #include<iostream>
   using namespace std;
   //passing default argument as interest rate 
   float interestCalculation(float principle, int year, float interestrate = 18);
   int main()
   {
        float principle;
        int year;
        cout<<"Enter the principle and year respectively =  ";
        cin>> principle>>year;
        float cagr = interestCalculation(principle, year);            
       cout<<"total amount"<<cagr;
    }   
         
     float interestCalculation(float principle, int year, float interestrate)
     {
        int i;
        float intrest;  float sum =0.0;
        for ( i = 1; i <=year; i++) 
        {
        intrest =  principle * interestrate/100;      
        //sum =  sum + intrest;        
        
        principle =principle + intrest;   
        cout<<"year "<<i<<"intrest "<<intrest <<"principle "<<principle<<endl;    
       
        }

        //cout<< intrest<< endl;
        return principle;  
     }
        






   
