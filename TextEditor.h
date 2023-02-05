//
// Created by rezap on 2/5/2023.
//

#ifndef FINAL_TEXTEDITOR_H
#define FINAL_TEXTEDITOR_H

// max lenght of leaf
const int ll = 2;

class Rope
{
public:
    Rope *left, *right, *parent;
    char *str;
    int lc;
    void makerope(Rope *&node, Rope *par,char a[], int l, int r);
    void prstr(Rope *r);

};

#endif //FINAL_TEXTEDITOR_H
