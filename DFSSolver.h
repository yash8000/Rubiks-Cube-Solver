//
// Created by srijan on 15-06-2024.
//

#ifndef DFSSOLVER_H
#define DFSSOLVER_H

// Typename T: RubiksCube Representation used (3d, 1d, Bitboard)
// Typename H: Corresponding Hash function

#include "BaseRubiksCube.h"

template<typename T, typename H>
class DFSSolver {
private:

    vector<BaseRubiksCube::MOVE> moves;
    int max_search_depth;

    //    DFS code to find the solution (helper function)
    bool dfs(int dep) {
        if (rubiksCube.isSolved()) return true;
        if (dep > max_search_depth) return false;
        for (int i = 0; i < 18; i++) {
            rubiksCube.move(BaseRubiksCube::MOVE(i));
            moves.push_back(BaseRubiksCube::MOVE(i));
            if (dfs(dep + 1)) return true;
            moves.pop_back();
            rubiksCube.invert(BaseRubiksCube::MOVE(i));
        }
        return false;
    }

public:
    T rubiksCube;

    DFSSolver(T _rubiksCube, int _max_search_depth = 8) {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    vector<BaseRubiksCube::MOVE> solve() {
        dfs(1);
        return moves;
    }

};

#endif //DFSSOLVER_H
