//
// Created by rezap on 2/5/2023.
//
#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <iostream>

using namespace std;

// max lenght of leaf
const int ll = 2;

class Rope
{
public:
    Rope();
    Rope *left, *right, *parent;
    char *str;
    int lc;
    void makerope(Rope *&node, Rope *par,char a[], int l, int r);
    void prstr(Rope *r);

};

#endif //TEXTEDITOR_H
