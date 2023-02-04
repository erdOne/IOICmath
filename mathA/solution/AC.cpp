#include <iostream>
using namespace std;

const int mod = 10007;

int pow(int a, int b, int m) {
    a %= m;
    int ret = 1;
    do if(b&1) ret = ret * a % m;
    while(a = a * a % m, b >>= 1);
    return ret;
}

int main() {
	int n, x;
    cin >> n >> x;
    cout << pow(x, pow(2, n, mod - 1), mod) << endl;
}
