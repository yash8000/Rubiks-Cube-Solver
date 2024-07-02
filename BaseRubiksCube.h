//
// Created by srijan on 12-06-2024.
//

#ifndef BASERUBIKSCUBE_H
#define BASERUBIKSCUBE_H

#include "bits/stdc++.h"

using namespace std;

class BaseRubiksCube {
public:
    enum class FACE {
        UP,
        LEFT,
        FRONT,
        RIGHT,
        BACK,
        DOWN
    };
    enum class COLOR {
        WHITE,
        GREEN,
        RED,
        BLUE,
        ORANGE,
        YELLOW
    };

    enum class MOVE {
        L, LPRIME, L2,
        R, RPRIME, R2,
        U, UPRIME, U2,
        D, DPRIME, D2,
        F, FPRIME, F2,
        B, BPRIME, B2
    };
    virtual COLOR getColor(FACE face, unsigned row, unsigned col) const = 0;

    static char getColorLetter(COLOR color);

    virtual bool isSolved() const = 0;

    static string getMove(MOVE ind);

    void print() const;

    vector<MOVE> randomShuffleCube(unsigned int times);

    BaseRubiksCube &move(MOVE ind);

    BaseRubiksCube &invert(MOVE ind);

    virtual BaseRubiksCube &f() = 0;

    virtual BaseRubiksCube &fPrime() = 0;

    virtual BaseRubiksCube &f2() = 0;

    virtual BaseRubiksCube &u() = 0;

    virtual BaseRubiksCube &uPrime() = 0;

    virtual BaseRubiksCube &u2() = 0;

    virtual BaseRubiksCube &l() = 0;

    virtual BaseRubiksCube &lPrime() = 0;

    virtual BaseRubiksCube &l2() = 0;

    virtual BaseRubiksCube &r() = 0;

    virtual BaseRubiksCube &d() = 0;

    virtual BaseRubiksCube &dPrime() = 0;

    virtual BaseRubiksCube &d2() = 0;

    virtual BaseRubiksCube &rPrime() = 0;

    virtual BaseRubiksCube &r2() = 0;

    virtual BaseRubiksCube &b() = 0;

    virtual BaseRubiksCube &bPrime() = 0;

    virtual BaseRubiksCube &b2() = 0;

    string getCornerColorString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;
};



#endif //BASERUBIKSCUBE_H
