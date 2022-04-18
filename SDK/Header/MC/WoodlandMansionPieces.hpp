// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WoodlandMansionPieces {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOODLANDMANSIONPIECES
public:
    class WoodlandMansionPieces& operator=(class WoodlandMansionPieces const&) = delete;
    WoodlandMansionPieces(class WoodlandMansionPieces const&) = delete;
    WoodlandMansionPieces() = delete;
#endif

public:
    MCAPI static void generateMansion(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager> >, class BlockPos const&, enum Rotation, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);

protected:

private:

};