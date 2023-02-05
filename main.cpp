#include <iostream>
#include "TextEditor.h"

using namespace std;

int main() {
    Rope r;
    string choice;
    int n1,n2;
    char a[] = "come on ";
    char b[] = "bro!";

    cout << "1-status" << endl << "2-new" << endl << "3-index" << endl << "4-concat" << endl << "5-insert" << endl;
    cout << "6-split" << endl << "7-delete" << endl << "8-report" << endl << "9-undo" << endl << "10-finish" << endl;

    while(choice != "finish") {
        cout << "\n" << ">>";
        cin >> choice;

        if (choice == "concat") {
            int i,j;
            cin >> i >> j;
            Rope *root1 = NULL;
            n1 = sizeof(a) / sizeof(a[0]);
            r.makerope(root1, NULL, a, 0, n1 - 1);

            Rope *root2 = NULL;
            n2 = sizeof(b) / sizeof(b[0]);
            r.makerope(root2, NULL, b, 0, n2 - 1);
            Rope *root3 = NULL;
            r.concat(root1, root2);
            cin >> choice;
            if (choice == "status") {
                cout << temp;
            }

            //r.concat(root3, root1, root2, n1);

           // r.print(t);
            cout << "\n";
        }
        if (choice == "new") {
            r.newstr();
        }
        if (choice == "status") {
            r.status(a, b);
        }
    }
    return 0;
}
