#include "testlib.h"
#include <iostream>
int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    inf.readInt(-1000000000, 1000000000);
    inf.readSpace();
    inf.readInt(-1000000000, 1000000000);
    inf.readSpace();
    inf.readInt(-1000000000, 1000000000);
    inf.readSpace();
    inf.readInt(-1000000000, 1000000000);
    inf.readEoln();
    inf.readEof();
}
