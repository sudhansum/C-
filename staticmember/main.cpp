#include <iostream>

using namespace std;

void display();
int main()
{
    display();
    display();
    display();
    display();
    display();

    return 0;
}
void display()
{
    static int counter = 0;
    cout<< "display function called " << ++counter << " times " << endl;
}

