#include <iostream>

using namespace std;

class Humanbeing
{
public:
    int age ;
    string name;

    Humanbeing()
    {
        cout<< "base class constructor"<< endl;
        name = "iname";
        age = 29;
    }
    void dispaly()
    {
        cout << name << endl<< age << endl;
    }
};

int main()
{

    Humanbeing Phone;

    Phone.dispaly();

    return 0;
}
