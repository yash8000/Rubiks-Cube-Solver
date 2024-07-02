cmake_minimum_required(VERSION 3.28)
project(RubiksCubeSolverV1)

set(CMAKE_CXX_STANDARD 17)

add_executable(RubiksCubeSolverV1 main.cpp
        BaseRubiksCube.cpp
        BaseRubiksCube.h
        3DArrayRepresentation.cpp
        1DArrayRepresentation.cpp
        1DArrayRepresentation.cpp
        BitBoardRepresentation.cpp
        DFSSolver.h
        BFSSolver.h
        IDDFSSolver.h
        IDAstarSolver.h
        PatternDatabase/NibbleArray.cpp
        PatternDatabase/NibbleArray.h
        PatternDatabase/PatternDatabase.cpp
        PatternDatabase/PatternDatabase.h
        PatternDatabase/PermutationIndexer.h
        PatternDatabase/math.cpp
        PatternDatabase/math.h
        PatternDatabase/CornerPatternDatabase.cpp
        PatternDatabase/CornerPatternDatabase.h
        PatternDatabase/CornerDBMaker.cpp
        PatternDatabase/CornerDBMaker.h
)
