// Automatically generated from runtime/NumberPrototype.cpp using /media/mardy/Data/src/git/qt5webkit1/3rdparty/qtwebkit-opensource-src-5.0.1/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct HashTableValue numberPrototypeTableValues[7] = {
   { "toString", DontEnum|Function, (intptr_t)static_cast<NativeFunction>(numberProtoFuncToString), (intptr_t)1, NoIntrinsic },
   { "toLocaleString", DontEnum|Function, (intptr_t)static_cast<NativeFunction>(numberProtoFuncToLocaleString), (intptr_t)0, NoIntrinsic },
   { "valueOf", DontEnum|Function, (intptr_t)static_cast<NativeFunction>(numberProtoFuncValueOf), (intptr_t)0, NoIntrinsic },
   { "toFixed", DontEnum|Function, (intptr_t)static_cast<NativeFunction>(numberProtoFuncToFixed), (intptr_t)1, NoIntrinsic },
   { "toExponential", DontEnum|Function, (intptr_t)static_cast<NativeFunction>(numberProtoFuncToExponential), (intptr_t)1, NoIntrinsic },
   { "toPrecision", DontEnum|Function, (intptr_t)static_cast<NativeFunction>(numberProtoFuncToPrecision), (intptr_t)1, NoIntrinsic },
   { 0, 0, 0, 0, NoIntrinsic }
};

extern const struct HashTable numberPrototypeTable =
    { 17, 15, numberPrototypeTableValues, 0 };
} // namespace
