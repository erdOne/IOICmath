#include "testlib.h"
#include <iostream>
int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    int X = inf.readInt(0, 1000000);
    inf.readSpace();
    int Y = inf.readInt(0, 1000000000);
    inf.readEoln();
    inf.readEof();
}
