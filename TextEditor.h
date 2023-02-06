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
    Rope *left, *right, *parent,*Node,*root,*node;
    char *str;
    string news;
    char st;
    int length,size;
    int lc;
    void makerope(Rope *&node, Rope *par,char a[], int l, int r);
    void print(Rope *r);
    void concat(Rope *&root3, Rope *root1, Rope *root2, int n1);
    void new(char *s, int ll);
    void status(Rope *r);
    char index(Rope* rt, int idx);
    void insert(Rope *tree, char value);
    void delete(Rope *root);
    void split(const Rope *r, int start, int length);
};

#endif //FINAL_TEXTEDITOR_H