//Name:Om Bhombe
//PRN:23070123039
//Aim:Implemention of Arrays and Strings to print the Keys Location and Sum and Average of the Array

#include <iostream>
using namespace std;

int main() {
    const int n = 6;
    int marks[n] = {1000, 2000, 3000, 4000, 5000, 6000};
    int key = 400;
    int sum = 0;
    double avg;
    
    for (int i = 0; i < n; i++) {
        if (key == marks[i]) {
            cout << "Key found at location: " << i << endl;
            break;
        }
    }
    
    for (int j = 0; j < n; j++) {
        sum += marks[j];
    }
    
    avg = static_cast<double>(sum) / n;
    
    cout << "Sum is " << sum << endl;
    cout << "Average is " << avg << endl;
    
    return 0;
}


/*Output:
Key found at location: 3
Sum is 21000
Average is 3500
*/
