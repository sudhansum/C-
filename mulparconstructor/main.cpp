#include <iostream>

using namespace std;

class Human
{
private:
    int age ;
    string name;
public:
    Human()
    {
        cout << "base class constructor"<< endl;
        name = "iname";
        age  = 29;

    }
    Human( string iname)
    {
        cout << "taking name parameter"   << endl;
        name = iname;
    }
    Human( int iage)
    {
        cout << "taking age parameter"  << endl;
        age= iage;

    }
    Human( string iname , int iage)
    {
        cout<< "taking name and age parameter" << endl;
        name = iname;
        age = iage;

    }

    void display()
    {
        cout << name << endl << age << endl;
    }

};

int main()
{
    Human Apple;
    Apple.display();

    Human Andy(29);
    Andy.display();

    return 0;
}
