//
// Created by rezap on 2/5/2023.
//
#ifndef FINAL_TEXTEDITOR_H
#define FINAL_TEXTEDITOR_H

#include <iostream>

using namespace std;
const int ll = 2;

class Rope
{
public:
    Rope();
    Rope *left, *right, *parent;
    char *str;
    string news;
    int lc;
    void makerope(Rope *&node, Rope *par,char a[], int l, int r);
    void print(Rope *r);
    void concat(Rope *&root3, Rope *root1, Rope *root2, int n1);
    void newstr();
    void status(char a[],char b[]);
    void deleterope(Rope *root);
};

#endif //FINAL_TEXTEDITOR_H
