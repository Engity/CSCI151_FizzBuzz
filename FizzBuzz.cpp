#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)

int main(){
    FOR(i,1,101){
        if (i % 3 == 0){
            cout << "Fizz";
        }
        if (i % 5 == 0){
            cout << "Buzz";
        }
        if (i % 3 != 0 && i % 5 != 0){
            cout << i;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}