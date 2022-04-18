// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ShareableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREABLEDEFINITION
public:
    class ShareableDefinition& operator=(class ShareableDefinition const&) = delete;
    ShareableDefinition(class ShareableDefinition const&) = delete;
#endif

public:
    MCAPI ShareableDefinition();
    MCAPI void addShareable(struct Shareable const&);
    MCAPI void addShareableByName(std::string const&);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShareableDefinition> >&);

protected:

private:

};