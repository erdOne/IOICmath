#include <iostream>
using namespace std;

const int mod = 10007;

int64_t ans[mod];
int main() {
	int64_t a, b, c, d;
    int x = 0;
    cin >> a >> b >> c >> d; a%=mod; b%=mod; c%=mod; d%=mod;
    for(int64_t i = 0; i < mod; i++)
        if((a*i*i*i + b * i * i + c * i + d)%mod == 0)
            ans[x++] = i;
    cout << x << endl;
    for(int i = 0; i < x; i++) cout << ans[i] << endl;
}
