#include <iostream>
#include <string>

using namespace std;

 class Human  //container class
 {
 private:
     int age;
     string name;
 public:
     friend class NewHuman;
     void getval( string iname, int iage )
     {
         cout<< "enter the value of age and name" << age << name << endl;
         age = iage;
         name = iname;
     }


 };
 class NewHuman // contained class
 {
 public:
    void getagename(Human h1)
    {
         cout<< "age =" <<  h1.age << "name =" << h1.name << endl;
    }
 };
int main()
{
     Human h1;
     NewHuman h2;
     h1.getval( "objectc",29);
     h2.getagename(h1);
     getch();
    return 0;
}
