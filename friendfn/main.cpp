#include <iostream>

using namespace std;

class Human
{
    string name;
    int age;

public:

    Human(string iname , int iage)
    {
        name = iname;
        age = iage;
    }
    void tellme()
    {
        cout<< name << endl<< age<< endl;
    }
     friend void display(Human man);

};
void display(Human man)
{
    cout << man.name << "the name of the man is" << endl << man.age << endl;
}

int main()
{
    Human anil( "anil" ,26);
    display(anil);
    return 0;
}
