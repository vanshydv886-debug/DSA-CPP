# include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i;j++){
            cout << j;      // for giving space cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}


// # include <iostream>
// using namespace std;

// int main() {
//     int n = 6;

//     for(int i=1; i<=n; i++){    // outer
//          char ch = 'A';

//         for(int j=0; j<=n;j++){   / inner loop => line start
//             cout << ch;      // 
//             ch = ch + 1
//         }
//         cout << endl;
//     }

//     return 0;
// }


