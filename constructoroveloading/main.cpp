#include <iostream>

using namespace std;


class Human
{
private:
    string name;
    int age;
    public:
    Human(){
        cout<<"default constructor" << endl;
        age = 0;
        name = "no name";
        }

        Human(string iname)
        {
        cout<<"name parameter" << endl;
        age = 0;
        name = iname;
        }
        Human(int iage)
        {
            cout <<"age as the parameter"<< endl;
            age = iage;
        }
        Human( string iname,int iage)
        {
            cout<<"constructor with name and age" << endl;
            age = iage;
            name = iname;
        }
        void display()
        {
            cout << name  <<  endl;
            cout << \n age  << endl;
        }
};
int main()
{
    Human Anil;
    Anil.display();
    Human Andy( "nameparameter");
    Andy.display();
    return 0;
}
