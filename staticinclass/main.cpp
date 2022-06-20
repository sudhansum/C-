#include <iostream>

using namespace std;

class Human
{ public:
       static int Humancount;

       Human()
       {
           Humancount ++;
       }

       void Humantotal()
       {
           cout<< "there are" << Humancount << "peoples" << endl;
       }
};

int Human::Humancount = 0;

int main()
{   Human Anil;
    Human bottle;
    Human cake;
    Human cup;
    Anil.Humantotal();
    bottle.Humantotal();
    cout << Human::Humancount;
    return 0;
}
