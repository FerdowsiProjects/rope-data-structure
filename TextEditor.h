//
// Created by rezap on 2/5/2023.
//
#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <iostream>

using namespace std;
const int ll = 2;

class Rope
{
public:
    Rope();
    Rope *left, *right, *parent;
    char *str;
    int lc;
    void createRopeStructure(Rope *&node, Rope *par,char a[], int l, int r);
    void printstring(Rope *r);
    void concatenate(Rope *&root3, Rope *root1, Rope *root2, int n1);
};

#endif //TEXTEDITOR_H
