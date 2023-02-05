//
// Created by rezap on 2/5/2023.
//
#include "TextEditor.h"
#include <iostream>

Rope::Rope() {}





/*void Rope::makerope(Rope *&node, Rope *par,char a[], int l, int r) {
    int m, i, j;
    Rope *t = new Rope();

    t->left = t->right = NULL;
    t->parent = par;

    if ((r - l) > ll) {
        t->str = NULL;
        t->lc = (r - l) / 2;
        node = t;
        m = (l + r) / 2;

        makerope(node->left, node, a, l, m);
        makerope(node->right, node, a, m + 1, r);
    }
    else
    {
        node = t;
        t->lc = (r-l);
        j = 0;
        t->str = new char[ll];

        for(i=l; i<=r; i++) {
            t->str[j++] = a[i];
        }
    }
}
void prstr(Rope *r){

    if (r==NULL) {
        return;
    }

    if (r->left==NULL && r->right==NULL) {
        cout << r->str;
    }
    prstr(r->left);
    prstr(r->right);
}*/