#include <iostream>
#include "TextEditor.h"

using namespace std;

int main() {

    Rope r;

    cout << "1. status" << "\n" << "2. new" << "\n" << "3. index" << "\n" << "4. concat" << "\n" <<
            "5. insert" << "\n" << "6. split" << "\n" << "7. delete" << "\n" << "8. report" <<
            "\n" << "9. undo" << "\n" << "Enter your requst: ";

    Rope *root1 = NULL;
    char a[] =  "Hi This is geeksforgeeks. ";
    int n1 = sizeof(a)/sizeof(a[0]);
    r.makerope(root1, NULL, a, 0, n1-1);

    r.prstr(root1);
    cout << endl;

    return 0;
}
