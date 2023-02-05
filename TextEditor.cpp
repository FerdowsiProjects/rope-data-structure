//
// Created by rezap on 2/5/2023.
//
#include "TextEditor.h"
#include <iostream>

Rope::Rope() {}

void Rope::makerope(Rope *&node, Rope *par,char a[], int l, int r)
{
    Rope *t = new Rope();
    t->left = t->right = NULL;

    t->parent = par;

    if ((r-l) > ll)
    {
        t->str = NULL;
        t->lc = (r-l)/2;
        node = t;
        int m = (l + r)/2;
        makerope(node->left, node, a, l, m);
        makerope(node->right, node, a, m+1, r);
    }
    else
    {
        node = t;
        t->lc = (r-l);
        int j = 0;
        t->str = new char[ll];
        for (int i=l; i<=r; i++)
            t->str[j++] = a[i];
    }
}

void Rope::print(Rope *r)
{
    if (r==NULL)
        return;
    if (r->left==NULL && r->right==NULL)
        cout << r->str;
    print(r->left);
    print(r->right);
}

Rope Rope::concat(Rope *root1, Rope *root2)
{
    Rope* temp =(Rope*) malloc(sizeof(Rope));
    //int* ptr = (int*) malloc(sizeof(int));
    temp->parent = temp->right = NULL;
    temp->str = NULL;
    temp->lc = ROPE_LEN(root1) + ROPE_LEN(root2);
    temp->left = root1;
    root1->parent = temp;
    root1->right = root2;
    root2->parent = root1;
    //return temp;
}

/*void Rope::concat(Rope *&root3, Rope *root1, Rope *root2, int n1)
{

    Rope *t = new Rope();
    t->parent = NULL;
    t->left = root1;
    t->right = root2;
    root1->parent = root2->parent = t;
    t->lc = n1;

    t->str = NULL;
    root3 = t;

}*/

void Rope::newstr() {
    string ns;
    getline(cin,ns);
    news=ns;
}

void Rope::status(char a[],char b[]) {
    cout << "1. " << a << "\n" << "2. " << b;
    cout << "\n" << "3." << news;
}
