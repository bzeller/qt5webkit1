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

#ifndef JSNotificationCenter_h
#define JSNotificationCenter_h

#if ENABLE(LEGACY_NOTIFICATIONS)

#include "JSDOMBinding.h"
#include "NotificationCenter.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSNotificationCenter : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSNotificationCenter* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<NotificationCenter> impl)
    {
        JSNotificationCenter* ptr = new (NotNull, JSC::allocateCell<JSNotificationCenter>(globalObject->globalData().heap)) JSNotificationCenter(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static void destroy(JSC::JSCell*);
    ~JSNotificationCenter();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }


    // Custom functions
    JSC::JSValue requestPermission(JSC::ExecState*);
    NotificationCenter* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    NotificationCenter* m_impl;
protected:
    JSNotificationCenter(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<NotificationCenter>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSNotificationCenterOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, NotificationCenter*)
{
    DEFINE_STATIC_LOCAL(JSNotificationCenterOwner, jsNotificationCenterOwner, ());
    return &jsNotificationCenterOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, NotificationCenter*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, NotificationCenter*);
NotificationCenter* toNotificationCenter(JSC::JSValue);

class JSNotificationCenterPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSNotificationCenterPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSNotificationCenterPrototype* ptr = new (NotNull, JSC::allocateCell<JSNotificationCenterPrototype>(globalData.heap)) JSNotificationCenterPrototype(globalData, globalObject, structure);
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
    JSNotificationCenterPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionCreateHTMLNotification(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionCreateNotification(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionCheckPermission(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsNotificationCenterPrototypeFunctionRequestPermission(JSC::ExecState*);

} // namespace WebCore

#endif // ENABLE(LEGACY_NOTIFICATIONS)

#endif
