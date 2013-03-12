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

#ifndef JSPerformanceResourceTiming_h
#define JSPerformanceResourceTiming_h

#if ENABLE(RESOURCE_TIMING)

#include "JSPerformanceEntry.h"
#include "PerformanceResourceTiming.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSPerformanceResourceTiming : public JSPerformanceEntry {
public:
    typedef JSPerformanceEntry Base;
    static JSPerformanceResourceTiming* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<PerformanceResourceTiming> impl)
    {
        JSPerformanceResourceTiming* ptr = new (NotNull, JSC::allocateCell<JSPerformanceResourceTiming>(globalObject->globalData().heap)) JSPerformanceResourceTiming(structure, globalObject, impl);
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

protected:
    JSPerformanceResourceTiming(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<PerformanceResourceTiming>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSPerformanceResourceTimingPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSPerformanceResourceTimingPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSPerformanceResourceTimingPrototype* ptr = new (NotNull, JSC::allocateCell<JSPerformanceResourceTimingPrototype>(globalData.heap)) JSPerformanceResourceTimingPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSPerformanceResourceTimingPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsPerformanceResourceTimingInitiatorType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingRedirectStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingRedirectEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingFetchStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingDomainLookupStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingDomainLookupEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingConnectStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingConnectEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingSecureConnectionStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingRequestStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingResponseStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsPerformanceResourceTimingResponseEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(RESOURCE_TIMING)

#endif
