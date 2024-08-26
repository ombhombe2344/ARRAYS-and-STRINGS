//Name Om Bhombe
//PRN:23070123039
//Aim:Implemention of Arrays and Strings to print the Maximum and Minimum Number in Array

#include <iostream>
using namespace std;

int main() {
    int marks[5] = {100, 98, 65, 81, 8};
    int max = marks[0];
    int min = marks[0];

    for (int i = 1; i < 5; i++) 
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
    }

    for (int j = 1; j < 5; j++) 
    {
        if (min > marks[j]) 
        {
            min = marks[j];
        }
    }

    cout << "Maximum is " << max << endl;
    cout << "Minimum is " << min << endl;

    return 0;
}


/*Output:
Maximum is 100
Minimum is 8*/
