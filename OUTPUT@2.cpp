// What is the output

#include <iostream>
using namespace std;
int main()
{   
    int x = 15;
    int y = x++;
    int z = ++x;
    cout << y << “ “ << z;
}

/* Options
This problem has only one correct answer
15 16
16 17
15 17 
16 16
Correct Answer = 15 17  */ 
