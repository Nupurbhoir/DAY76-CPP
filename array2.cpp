#include <iostream>
using namespace std;

int main()
{
// creating an array with numbers
int numbers[] ={1, 2 ,3, 4, 5};

// Accessing elements in array
cout<<"first element:"<< numbers[0] << endl; //outputs: 1
cout<< "last element:"<< numbers[4] << endl; //outputs: 5

//Modifying an element
numbers[2] = 10; //changing the third element to 10
cout << "Modified array: ";

//Looping through the array
for (int i = 0; i<5; i++) {
    cout<<numbers[i]<<" ";
}
cout << endl;

return 0;
}