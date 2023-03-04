 /*Program definition: Constructor is special function with same name as class, 
   =>it does not return any value, not even void
   =>You use it for initialize object when they created
   => provide value to data member object is created
   =>constructor with no parameter called default constructor and with argument its called
    parameterized constructor
   => Just like method constructor also have default parameter  You can pass default parameter 
   at trails of argument, if you pass argumnet explicitly then you old parameter will override
   => You can overload constructo, when it invoked by object first it match argument 
   and execute respectivily  */ 
 
 #include<iostream>
 using namespace std;
 class distruct
 {
    static int count; 
    public:
    distruct()    
    {
      cout<<"Constructor Call"<< endl;
    }

   ~distruct()
   {
      cout<<"distructor call"<<endl; 
   }
 }; 
 
 int distruct::count; 
 int main() {
   distruct a; //Destructor is call when object is no longer available for use.
    
 return 0;
 } 