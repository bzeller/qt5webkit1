// Automatically generated from runtime/BooleanPrototype.cpp using /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct HashTableValue booleanPrototypeTableValues[3] = {
   { "toString", DontEnum|Function, (intptr_t)static_cast<NativeFunction>(booleanProtoFuncToString), (intptr_t)0, NoIntrinsic },
   { "valueOf", DontEnum|Function, (intptr_t)static_cast<NativeFunction>(booleanProtoFuncValueOf), (intptr_t)0, NoIntrinsic },
   { 0, 0, 0, 0, NoIntrinsic }
};

extern const struct HashTable booleanPrototypeTable =
    { 4, 3, booleanPrototypeTableValues, 0 };
} // namespace
