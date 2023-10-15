// implementation of static memeber and static member function.

#include <iostream>
using namespace std;

class emp
{
    static int count;
    int id;

public:
    void setdata()
    {
        cout << "Enter id : " << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "Id is : " << id << count << endl;
    }
    static void getcount()  //static function(can only access static variables and can be accessed using class name only, no need of object to access it)
    {
        cout << "The value of count is : " << count << endl;
    }
};

int emp::count;

int main()
{
    emp ob1,ob2,ob3;
    ob1.setdata();
    ob1.getdata();
    emp::getcount();

    ob2.setdata();
    ob2.getdata();
    emp::getcount();
    
    ob3.setdata();
    ob3.getdata();
    emp::getcount();
    return 0;
}