/*Program definition: */

#include <iostream>
using namespace std;

class store
{
    int item_id;
    int num;

public:
    store()
    {
        item_id = 10;
        num = 5;
    }
    int prindata()
    {
        cout << item_id << endl;
        cout << num << endl;
    }
};

int main()
{
    store a;
    a.prindata();
    return 0;
}