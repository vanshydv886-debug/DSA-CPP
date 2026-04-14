# include <iostream>
using namespace std;

int main() {
    int n = 4;

    int num = 4;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n;j++){
            cout << num << " ";      // for giving space cout << j << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}