//
// Created by srija on 16-06-2024.
//

#ifndef CORNERPATTERNDATABASE_H
#define CORNERPATTERNDATABASE_H



#include "../BaseRubiksCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"
using namespace std;

class CornerPatternDatabase : public PatternDatabase {

    typedef BaseRubiksCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const BaseRubiksCube& cube) const;

};



#endif //CORNERPATTERNDATABASE_H
