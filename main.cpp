#include <iostream>
#include "TextEditor.h"

using namespace std;

int main() {
    Rope r;

    Rope *root1 = NULL;
    char a[] =  "co";
    int n1 = sizeof(a)/sizeof(a[0]);
    r.makerope(root1, NULL, a, 0, n1-1);

    Rope *root2 = NULL;
    char b[] =  "b";
    int n2 = sizeof(b)/sizeof(b[0]);
    r.makerope(root2, NULL, b, 0, n2-1);

    Rope *root3 = NULL;
    r.concat(root3, root1, root2, n1);

    r.status(root3);
    cout << "\n";

    return 0;
}
