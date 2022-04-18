// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
struct ItemStackNetIdTag;
struct ItemStackLegacyRequestIdTag;
struct ItemStackRequestIdTag;
enum ItemStackNetIdType : unsigned char
{
    ItemStackNetId_TypedServerNetId = 0,
    ItemStackRequestId_TypedClientNetId = 1,
    ItemStackLegacyRequestId_TypedClientNetId = 2,
};
#undef BEFORE_EXTRA

struct ItemStackNetIdVariant {

#define AFTER_EXTRA
// Add Member There
    //std::variant<TypedXXXNetId<ItemStackXXXIdTag, int, 0>> id;
    int netId;
    unsigned char type;

#undef AFTER_EXTRA

public:
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant&&);
    MCAPI ItemStackNetIdVariant(struct ItemStackNetIdVariant const&);
    MCAPI ItemStackNetIdVariant();
    MCAPI void deserialize(class ReadOnlyBinaryStream&);
    MCAPI bool hasServerNetId() const;
    MCAPI bool isValid() const;
    MCAPI struct ItemStackNetIdVariant& operator=(struct ItemStackNetIdVariant&&);
    MCAPI struct ItemStackNetIdVariant& operator=(struct ItemStackNetIdVariant const&);
    MCAPI struct ItemStackNetIdVariant& operator=(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const&);
    MCAPI struct ItemStackNetIdVariant& operator=(class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const&);
    MCAPI bool operator==(struct ItemStackNetIdVariant const&) const;
    MCAPI void serialize(class BinaryStream&) const;
    MCAPI std::string toString() const;
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const* tryGetServerNetId() const;
    MCAPI ~ItemStackNetIdVariant();

protected:

private:

};