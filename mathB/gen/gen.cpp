#include "testlib.h"
#include <iostream>
using namespace std;
vector<int> v;
signed main(signed argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int minx=atoi(argv[1]);
    int maxx=atoi(argv[2]);
    cout << rnd.next(minx, maxx) << " ";
    cout << rnd.next(minx, maxx) << " ";
    cout << rnd.next(minx, maxx) << " ";
    cout << rnd.next(minx, maxx) << endl;
}
