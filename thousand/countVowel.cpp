/*Program definition: Write a program to count vowels and consonant  */ 

#include<iostream>
using namespace std;

int main(){
    
    char alphabet[10] ={'\0'};
    cout<<"Enter anyphabet : "; 

    cin>> alphabet;    
     for (int i =0; i<10; i++)
    {
    cout<<alphabet[i];
    }
    int counterVowel=0, 
    counterApha = 0,
    countSpecial = 0;

    //int a  = {'a'}
    for(int i =0; i<10; i++)
    {
        if(alphabet[i]=='a' || alphabet[i]=='e'|| alphabet[i]=='i'||alphabet[i]=='o' ||alphabet[i]=='u' || 
        alphabet[i]=='A'|| alphabet[i]== 'E'|| alphabet[i]=='U'|| alphabet[i]== 'O' ||alphabet[i]== 'U')
         {
            counterVowel++; 
        }
        else   if(alphabet[i] == '\t' || alphabet[i]=='\0'|| alphabet[i]==' ')
        {
            countSpecial++;
        }
        else
        {
            counterApha++;
        }

    }
    
    //counterApha = counterApha-countSpecial;  
    cout<<"number of vowel is "<<counterVowel<<endl
    <<"number of consonant is "<<counterApha<<endl;
    

return 0;
}