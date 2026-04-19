#include<iostream>
#include<vector>
using newspace std;

int main() {
    vector<char> vec = {'a','b','c','d','e'};

    cout << "size = " <<vec.size() << endl;

    for(char val : vec) { //for each loop
        cout << val << endl;
    }

    return 0;
}


#include<iostream>
#include<vector>
using newspace std;

int main() {
    vector<int>vec;

    cout << "size = " <<vec.size() << endl;     // htjayega for pop_back
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back size = " <<vec.size() << endl;

    for(int val : vec)/for each loop
        cout << val << endl;
    }

    return 0;
}



