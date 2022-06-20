#include <iostream>
#include <string>

using namespace std;

class Humanbeing
{
public:
    string name;
    void introduce()
    {
        cout<< "I am " << name ;
    }

};

int main()
{
    Humanbeing Anil;
    Anil.name = "Anil";
    Anil.introduce();

    Humanbeing Anjali;
    Anjali.name = "Anjali";
    Anjali.introduce();
    return 0;
}
