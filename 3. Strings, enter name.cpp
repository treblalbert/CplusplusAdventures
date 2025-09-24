#include <iostream>
using namespace std;

int main ()
{
    cout << "What is your name? \n";                            // Prints the question
    string name;                                                // Input for the user to write something, a string, in this case, the name
    cin >> name;                                                // cin >> (get from) name;
    cout << name << " is a pretty ugly ass name lmao! \n";      // Print to test if the string thing works, it's like print + string (name) + more print
}