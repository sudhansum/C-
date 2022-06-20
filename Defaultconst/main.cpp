#include <iostream>

using namespace std;

class Human
{
public:
    int age;
    string name;
public:
    Human(string iname, int iage )
    {
        cout << "default constructor"<<endl;
        name = iname;
        age = iage;
    }
    Human(string iname )
    {
        name = iname;
        cout<<"testing constructor"<< name<< endl;
    }
   void display()
    {
        cout<< "my name is " << name<< endl << "my age is "<< age << endl;
    }
};

class Biscut
{
public:
    string name;
    int age;
public:
    void bread( )
    {
        cout<< "name of biscut is " << name <<  "expiry is " << age << endl;


    }
};

int main()
{
    Human Anil("computer", 29);
   // Anil.age = 29;
   // Anil.name = "computer";
    Anil.display();
   // Human Anjali;
  //  Anjali.name = "disk";

      //  Anjali.display();

      Biscut wheat;
      wheat.name = "britannia";
      wheat.age = 29;
      wheat.bread();


    return 0;
}
