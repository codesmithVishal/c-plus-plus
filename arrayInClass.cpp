/*Program definition: program to order groccery from  market*/

#include <iostream>
using namespace std;
class item
{   
    int itemNo[100];
    int ItemPrice[100];
    int counter = 0; 
    public:
    void count_Element()
    { 
        int counter=0; 
    }  
    void get_order(); 
    void  Display_Order(); 
    //void delete_Item(); 
    //void count_total(); 
};
void item ::get_order()
{
    cout<<"enter item_Id"<<endl;    
    cin>>itemNo[counter];
    cout<<"Enter itemprice";
    cin>>ItemPrice[counter];    
    counter++;
}


void item:: Display_Order()
{
    cout<<"Order List"<<endl;
    
    cout<<"Item No \t Item Price"<<endl;
    
    for(int i=0; i<counter; i++)
    {
    cout<<itemNo[i]<<"\t"<<ItemPrice[i]<<endl; 
    }    
} /*
void item ::delete_Item()
{

    
    
}

void item::count_total()
{

    
} */
main()
{
    item obj1; 
    //obj1.count_Element(); 
    obj1.get_order();
    obj1.get_order();    
    obj1.get_order();
    obj1.get_order();
    obj1.Display_Order();
    return 0;
}