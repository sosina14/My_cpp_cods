// 3. Write a program that displays N numbers, where N is a positive number to be entered from 
//the keyboard. Use proper mechanisms of validating appropriate input entry.
//a. Starting from zero.
//b. Starting from one.
//c. Starting from a number entered from the keyboard. 

Write a C++ program to print the following - using while loop 
a) All natural numbers from 1 to n.

#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter n :";
    cin>>n;
    for (int i=0 ; i < n ; i++){
        cout << i<<endl;
    }
    return 0;
}
//All natural numbers in reverse (from n to 1).
#include <iostream>
using namespace std;
int main (){
    
    int n;
    cout << "Enter n :";
    cin>>n;
    for (int i=n ; i >= 0; i--){
        cout << i<<endl;
    }
     
    return 0;
}
//c) All alphabets from a to z

#include <iostream>
using namespace std;
int main (){
    char i;
    for (char i = 'a' ; i <= 'z';i++)
    cout << i<<endl;
    
    
    return 0;
}
