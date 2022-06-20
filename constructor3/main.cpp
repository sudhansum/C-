#include <iostream>

using namespace std;

class Human
{
public:
    int age;
    string name;
public:
    Human()
    {
        age = 29;
        name = "iname";
        cout<< age << endl<< name << endl;
    }
    void display( string name, int age)
    {
        cout<< age << endl << name << endl;
    }
};

int main()
{
   Human Book;
   //Book.name = "newbook";
  // Book.age = 32;
   Book.display( "textbook",33);
    return 0;
}
