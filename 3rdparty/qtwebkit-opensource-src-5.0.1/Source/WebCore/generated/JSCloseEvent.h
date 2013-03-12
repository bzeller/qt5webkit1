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

#ifndef JSCloseEvent_h
#define JSCloseEvent_h

#include "CloseEvent.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSDictionary;

class JSCloseEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSCloseEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CloseEvent> impl)
    {
        JSCloseEvent* ptr = new (NotNull, JSC::allocateCell<JSCloseEvent>(globalObject->globalData().heap)) JSCloseEvent(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSCloseEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<CloseEvent>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSCloseEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSCloseEventPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCloseEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSCloseEventPrototype>(globalData.heap)) JSCloseEventPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSCloseEventPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSCloseEventConstructor : public DOMConstructorObject {
private:
    JSCloseEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSCloseEventConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSCloseEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSCloseEventConstructor>(*exec->heap())) JSCloseEventConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSCloseEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

bool fillCloseEventInit(CloseEventInit&, JSDictionary&);

// Attributes

JSC::JSValue jsCloseEventWasClean(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCloseEventCode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCloseEventReason(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCloseEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
