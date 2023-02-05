//
// Created by rezap on 2/5/2023.
//
#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <iostream>
#include <string>

using namespace std;

// max lenght of leaf
//const int ll = 2;

class Rope
{
public:
    Rope();
    Rope *left, *right, *parent;
    char *str;
    int lc;

#define ROPE_LEN(r) ((r)->lc)

    void makerope(Rope *node, Rope *par, char *s, int l, int r, int ll);
    void newrope(char *s, int ll);
    void subnew(char *s, int strt, int end, int ll);
    void deleterope(Rope *root);
    void concat(Rope *root1, Rope *root2);
   // char *getchar(Rope *root, int i);
   // bool setchar(Rope *root, int i, char c);
   // char *Rope_to_str(Rope *root);
  //  char *Rope_to_substr(Rope *root, int s, int e);
    void print(Rope *r);


    //void makerope(Rope *&node, Rope *par,char a[], int l, int r);
    //void prstr(Rope *r);

};

#endif //TEXTEDITOR_H
