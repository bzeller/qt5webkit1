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

#ifndef JSCoordinates_h
#define JSCoordinates_h

#include "Coordinates.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSCoordinates : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSCoordinates* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Coordinates> impl)
    {
        JSCoordinates* ptr = new (NotNull, JSC::allocateCell<JSCoordinates>(globalObject->globalData().heap)) JSCoordinates(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSCoordinates();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }


    // Custom attributes
    JSC::JSValue altitude(JSC::ExecState*) const;
    JSC::JSValue altitudeAccuracy(JSC::ExecState*) const;
    JSC::JSValue heading(JSC::ExecState*) const;
    JSC::JSValue speed(JSC::ExecState*) const;
    Coordinates* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    Coordinates* m_impl;
protected:
    JSCoordinates(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Coordinates>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSCoordinatesOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, Coordinates*)
{
    DEFINE_STATIC_LOCAL(JSCoordinatesOwner, jsCoordinatesOwner, ());
    return &jsCoordinatesOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, Coordinates*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Coordinates*);
Coordinates* toCoordinates(JSC::JSValue);

class JSCoordinatesPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSCoordinatesPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCoordinatesPrototype* ptr = new (NotNull, JSC::allocateCell<JSCoordinatesPrototype>(globalData.heap)) JSCoordinatesPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSCoordinatesPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsCoordinatesLatitude(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCoordinatesLongitude(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCoordinatesAltitude(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCoordinatesAccuracy(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCoordinatesAltitudeAccuracy(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCoordinatesHeading(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCoordinatesSpeed(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
