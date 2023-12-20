#include <iostream>

using namespace std;

int main() {
    int n;
    int sum;
    sum = 0;

    for ( ;cin >> n; ) {
        sum = sum + n;
        cout << n << " : Sum " << sum << endl;
    }
    
    return 0;
}