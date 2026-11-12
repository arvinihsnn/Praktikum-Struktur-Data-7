#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    Stack S;
    
    cout << "Hello world!" << endl;
    
    createstack(S);
    getInputstream(S);
    
    printInfo(S);
    
    balikStack(S);
    
    cout << "balik stack" << endl;
    printInfo(S);

    return 0;
}