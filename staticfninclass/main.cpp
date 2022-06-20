#include <iostream>

using namespace std;

class Human
{
public:
    string name;
    int age;
    static  int Humancount;
    Human()
    {
        Humancount++;
    }
    void Humantotal()
    {
        cout<< "there are" << Humancount << " members" << endl;
    }
    static void humannumber()
    {
        cout<< "people are" << Humancount << " there" << endl;
    }

};
  int Human::Humancount =0;

int main()
{
    Human Anil;
    Anil.Humantotal();
    cout <<  endl << Human::Humancount<< endl;
    Human::humannumber();
    return 0;
}
