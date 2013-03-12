/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSMutationRecord_h
#define JSMutationRecord_h

#if ENABLE(MUTATION_OBSERVERS)

#include "JSDOMBinding.h"
#include "MutationRecord.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSMutationRecord : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSMutationRecord* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MutationRecord> impl)
    {
        JSMutationRecord* ptr = new (NotNull, JSC::allocateCell<JSMutationRecord>(globalObject->globalData().heap)) JSMutationRecord(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSMutationRecord();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    MutationRecord* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    MutationRecord* m_impl;
protected:
    JSMutationRecord(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<MutationRecord>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSMutationRecordOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, MutationRecord*)
{
    DEFINE_STATIC_LOCAL(JSMutationRecordOwner, jsMutationRecordOwner, ());
    return &jsMutationRecordOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, MutationRecord*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, MutationRecord*);
MutationRecord* toMutationRecord(JSC::JSValue);

class JSMutationRecordPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSMutationRecordPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMutationRecordPrototype* ptr = new (NotNull, JSC::allocateCell<JSMutationRecordPrototype>(globalData.heap)) JSMutationRecordPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSMutationRecordPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSMutationRecordConstructor : public DOMConstructorObject {
private:
    JSMutationRecordConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMutationRecordConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMutationRecordConstructor* ptr = new (NotNull, JSC::allocateCell<JSMutationRecordConstructor>(*exec->heap())) JSMutationRecordConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Attributes

JSC::JSValue jsMutationRecordType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationRecordTarget(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationRecordAddedNodes(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationRecordRemovedNodes(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationRecordPreviousSibling(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationRecordNextSibling(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationRecordAttributeName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationRecordAttributeNamespace(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationRecordOldValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMutationRecordConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(MUTATION_OBSERVERS)

#endif
