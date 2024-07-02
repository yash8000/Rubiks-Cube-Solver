//
// Created by srija on 15-06-2024.
//

#ifndef IDDFSSOLVER_H
#define IDDFSSOLVER_H

#include<bits/stdc++.h>
#include "BaseRubiksCube.h"
#include "DFSSolver.h"

template<typename T, typename H>
class IDDFSSolver {

private:
    int max_search_depth;
    vector<BaseRubiksCube::MOVE> moves;

public:
    T rubiksCube;

    IDDFSSolver(T _rubiksCube, int _max_search_depth = 7) {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    //    Used DFSSolver with increasing max_search_depth
    vector<BaseRubiksCube::MOVE> solve() {
        for (int i = 1; i <= max_search_depth; i++) {
            DFSSolver<T, H> dfsSolver(rubiksCube, i);
            moves = dfsSolver.solve();
            if (dfsSolver.rubiksCube.isSolved()) {
                rubiksCube = dfsSolver.rubiksCube;
                break;
            }
        }
        return moves;
    }


};

#endif //IDDFSSOLVER_H
