/*Program definition: */ 

#include<iostream>
using namespace std;
class complex
{   public: 
    int *arr; 
    int size;    
    complex(int m)
    {
        size = m; 
        arr = new int[size];
    }
    int dotproduct(complex &v)
    {
         int d=0; 
         for(int i=0;i<0; i++)
         {
            d +=this->arr[i] * v.arr[i]; 
         }
         return d; 
    }

    
}; 

int main() {
    complex v1(3); 
    v1.arr[0] = 1;
    v1.arr[1]= 2; 
    v1.arr[3]= 3;
    //v1.show(); 
    complex v2(3); 
    v2.arr[0] =1;
    v2.arr[1] =2; 
    v2.arr[2] =3; 
    int  a = v1.dotproduct(v2); 
    cout<<a<<endl; 
    return 0;
}