#include <iostream>

using namespace std;

class Human
{
public:
    string name ;

    void display()
    {
        cout<< "my name is in funnt" << name << endl;
    }
};
int main()
{
    Human Sam;
    Sam.name = "sudhansu";
    Sam.display();

    return 0;
}
