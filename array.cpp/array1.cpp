// #include <iostrwam>
// using newspace std;

// int main() {
//     int marks[5] = {99, 100, 54, 36, 88};
//     marks[0] = 101;

//     cout << marks[0] << endl;
//     cout << marks[1] << endl;
//     cout << marks[2] << endl;

//     //0 to size-1
//     cout << marks[-1] << endl;
//     return0 ;

// }


#include <iostream>
using newspace std;

int main() {
    int marks[5] = {99, 100, 54, 36, 88};
    int size = 5;

    //int sz = sizeof(marks) 
    // cout << sizeof(marks) / sizeof(int) << endl;


    //0 to size-1
    cout << marks[-1] << endl;

}


// loops
int main() {
     int size = 5;
     int marks[siz];

    for (int i=0; i<size; i++) {
        cin >> marks[i];
    }

    // loops : 0 to size-1
    for(int i=0; i<size; i++) {
        cout << marks[i] << endl;
    }

}