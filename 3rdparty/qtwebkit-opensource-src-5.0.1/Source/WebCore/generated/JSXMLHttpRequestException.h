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

#ifndef JSXMLHttpRequestException_h
#define JSXMLHttpRequestException_h

#include "JSDOMBinding.h"
#include "XMLHttpRequestException.h"
#include <runtime/ErrorPrototype.h>
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>

namespace WebCore {

class JSXMLHttpRequestException : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSXMLHttpRequestException* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XMLHttpRequestException> impl)
    {
        JSXMLHttpRequestException* ptr = new (NotNull, JSC::allocateCell<JSXMLHttpRequestException>(globalObject->globalData().heap)) JSXMLHttpRequestException(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSXMLHttpRequestException();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    XMLHttpRequestException* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    XMLHttpRequestException* m_impl;
protected:
    JSXMLHttpRequestException(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<XMLHttpRequestException>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSXMLHttpRequestExceptionOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, XMLHttpRequestException*)
{
    DEFINE_STATIC_LOCAL(JSXMLHttpRequestExceptionOwner, jsXMLHttpRequestExceptionOwner, ());
    return &jsXMLHttpRequestExceptionOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, XMLHttpRequestException*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, XMLHttpRequestException*);
XMLHttpRequestException* toXMLHttpRequestException(JSC::JSValue);

class JSXMLHttpRequestExceptionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSXMLHttpRequestExceptionPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSXMLHttpRequestExceptionPrototype* ptr = new (NotNull, JSC::allocateCell<JSXMLHttpRequestExceptionPrototype>(globalData.heap)) JSXMLHttpRequestExceptionPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSXMLHttpRequestExceptionPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSXMLHttpRequestExceptionConstructor : public DOMConstructorObject {
private:
    JSXMLHttpRequestExceptionConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSXMLHttpRequestExceptionConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSXMLHttpRequestExceptionConstructor* ptr = new (NotNull, JSC::allocateCell<JSXMLHttpRequestExceptionConstructor>(*exec->heap())) JSXMLHttpRequestExceptionConstructor(structure, globalObject);
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

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestExceptionPrototypeFunctionToString(JSC::ExecState*);
// Attributes

JSC::JSValue jsXMLHttpRequestExceptionCode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestExceptionName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestExceptionMessage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestExceptionConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsXMLHttpRequestExceptionNETWORK_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsXMLHttpRequestExceptionABORT_ERR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
