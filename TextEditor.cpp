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

void Rope::concat(Rope *&root3, Rope *root1, Rope *root2, int n1)
{

    Rope *t = new Rope();
    t->parent = NULL;
    t->left = root1;
    t->right = root2;
    root1->parent = root2->parent = t;
    t->lc = n1;

    t->str = NULL;
    root3 = t;

}

void Rope::newstr() {
    string ns;
    getline(cin,ns);
    news=ns;
}

void Rope::status(char a[],char b[]) {
    cout << "1. " << a << "\n" << "2. " << b;
    cout << "\n" << "3." << news;
}

void Rope::deleterope(Rope *root)
{
    Rope *prev, *node = root;

    while(node != NULL) {

        if ((node->right == NULL) && (node->left == NULL)) {
            prev = node->parent;
            if (node->str != NULL)
                free(node->str);
            free(node);
            node = prev;
            continue;
        }

        if (node->right == NULL) {
            prev = node;
            node = node->left;
            prev->left = NULL;

        } else {
            prev = node;
            node = node->right;
            prev->right = NULL;
        }

    }
}

Rope *split(const Rope *r, int start, int length) {
    if (!r->left) {
        Rope *s = new Rope;
        s->left = 0;
        s->st = r->st + start;
        s->length = length;
        return s;
    } else if (start + length <= r->left->length) {
        return split(r->left, start, length);
    } else if (r->left->length <= start) {
        return split(r->right, start - r->left->length, length - r->left->length);
    } else {
        Rope *s = new Rope;
        s->left = split(r->left, start, r->left->length - start);
        s->right = split(r->right, 0, length - (r->left->length - start));
        s->length = length;
        return s;
    }
}
