//Name:Om Bhombe
//PRN:23070123039
//Aim:Implemention of Arrays and Strings to check if given String is Pallindrome

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,revstr;
    int length,i;
    cout<<"Enter a string: ";
    cin>>a;
    length=a.length();
    for(i=length-1;i>=0;i--)
    {
        revstr+=a[i];
    }
    if(a==revstr)
    {
        cout<<"It is a palindrome.";
    } 
    else 
    {
        cout<<"It is not a palindrome";
    }
     return 0;
}


/*Output:
For Pallindrome-
Enter a string: mom
It is a palindrome.
For Not a Pallindrome-
Enter a string: happy
It is not a palindrome*/
