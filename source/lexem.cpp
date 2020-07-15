#include <iostream>
#include <bits/stdc++.h>
#include "lexem.hpp"
using namespace std;

int main (void) {
    string  codeline;
    vector < vector <Lexem *> > infixLines;
    vector < vector <Lexem *> > postfixLines;
    int value;
    int row = 0;
    cout << ">>>";
    while ( getline( cin, codeline ) ) {
        if (codeline == "end") {
            break;
        }
        infixLines.push_back(parseLexem(codeline));
        initLabels(infixLines[row], row);
        initArrays(infixLines[row], row);
        initJumps(infixLines);
        postfixLines.push_back(buildPostfix(infixLines[row]));
        bool rvalue = realTime(postfixLines[row]);
        if (!rvalue) {
            evaluatePostfix(postfixLines[row], row, rvalue);
        }
        row++;
        cout << ">>>";
    }
    row = 0;
    while (0 <= row && row < (int)postfixLines.size()) {
        row = evaluatePostfix(postfixLines[row], row, false);
    }
    return 0;
}
