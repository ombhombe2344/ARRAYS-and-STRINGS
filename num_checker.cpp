//Name:Om Bhombe
//PRN:23070123039
//Aim:Implemention of Arrays and Strings to find the Key Address in Array

#include <iostream>
using namespace std;

int main() {
    int key,i;
    int x[5] = {34,06,89,87,50};
    cout << "Enter your key: ";
    cin >> key;
   
    for(i = 0;i<5;i++)
    {
    if (key == x[i])
    {
        cout << "Your number found at: " << i;
        break;
    }
    }
    if (i==5)
        cout<<"Number not found";
       
    return 0;
}

/*Enter your key: 87
Your number found at: 3
Enter your key: 56
Number not found*/

