Write a C++ program to print the following - using while loop 
a) All natural numbers from 1 to n.
// Write a C++ program to print the following - using while loop
// a) All natural numbers from 1 to n.
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
