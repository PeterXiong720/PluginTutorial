// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemStackRequestActionTransferBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONTRANSFERBASE
public:
    class ItemStackRequestActionTransferBase& operator=(class ItemStackRequestActionTransferBase const&) = delete;
    ItemStackRequestActionTransferBase(class ItemStackRequestActionTransferBase const&) = delete;
    ItemStackRequestActionTransferBase() = delete;
#endif

public:
    /*
    inline bool _read(class ReadOnlyBinaryStream& a0){
        bool (ItemStackRequestActionTransferBase::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?_read@ItemStackRequestActionTransferBase@@MEAA_NAEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline void _write(class BinaryStream& a0) const{
        void (ItemStackRequestActionTransferBase::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?_write@ItemStackRequestActionTransferBase@@MEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    */
    MCAPI struct ItemStackRequestSlotInfo const& getSrc() const;

protected:

private:

};