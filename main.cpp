#include <iostream>
#include "TextEditor.h"

using namespace std;

int main() {
    Rope r;

    Rope *root1 = NULL;
    char a[] =  "come on ";
    int n1 = sizeof(a)/sizeof(a[0]);
    r.createRopeStructure(root1, NULL, a, 0, n1-1);

    Rope *root2 = NULL;
    char b[] =  "bro!";
    int n2 = sizeof(b)/sizeof(b[0]);
    r.createRopeStructure(root2, NULL, b, 0, n2-1);

    Rope *root3 = NULL;
    r.concatenate(root3, root1, root2, n1);

    r.printstring(root3);
    cout << "\n";

    return 0;
}
