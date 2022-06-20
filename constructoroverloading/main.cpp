#include <iostream>

using namespace std;

class Human
{  private:
       int age;
       string name;
public:
     Human()
     {
         cout<< "this is base class constructor \n"<< endl;
          name = "base name";
          age =29;
     }
     Human( string iname)
     {
         cout<< "name parameter constructor \n" << endl;
         name = iname;
         age  = 0;
     }
     Human( int iage)
     {
         cout<< "age parameter"<< endl;

         age = iage;
     }
     Human(string iname , int iage)
     {
         cout<< "name and age parameter \n" << endl;
         name = iname;
         age = iage;
     }
     void display()
     {
         cout<< name <<endl << age << endl;
     }

};

int main()
{
   Human Anil;
   Anil.display();

   Human Andy( "Andy",28);

   Andy.display();

   Human Ausi("Automated systems", 21);
   Ausi.display();
    return 0;
}
