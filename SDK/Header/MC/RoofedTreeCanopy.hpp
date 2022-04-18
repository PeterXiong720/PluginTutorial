// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RoofedTreeCanopy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROOFEDTREECANOPY
public:
    class RoofedTreeCanopy& operator=(class RoofedTreeCanopy const&) = delete;
    RoofedTreeCanopy(class RoofedTreeCanopy const&) = delete;
    RoofedTreeCanopy() = delete;
#endif

public:
    /*0*/ virtual ~RoofedTreeCanopy();
    /*1*/ virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&) const;

protected:

private:

};