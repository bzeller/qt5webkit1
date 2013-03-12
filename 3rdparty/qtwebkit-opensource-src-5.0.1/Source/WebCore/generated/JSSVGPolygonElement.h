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

#ifndef JSSVGPolygonElement_h
#define JSSVGPolygonElement_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGElement.h"
#include "SVGElement.h"
#include "SVGPolygonElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGPolygonElement : public JSSVGElement {
public:
    typedef JSSVGElement Base;
    static JSSVGPolygonElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPolygonElement> impl)
    {
        JSSVGPolygonElement* ptr = new (NotNull, JSC::allocateCell<JSSVGPolygonElement>(globalObject->globalData().heap)) JSSVGPolygonElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSSVGPolygonElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGPolygonElement>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSSVGPolygonElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGPolygonElementPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPolygonElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPolygonElementPrototype>(globalData.heap)) JSSVGPolygonElementPrototype(globalData, globalObject, structure);
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
    JSSVGPolygonElementPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGPolygonElementConstructor : public DOMConstructorObject {
private:
    JSSVGPolygonElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPolygonElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPolygonElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPolygonElementConstructor>(*exec->heap())) JSSVGPolygonElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionHasExtension(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionGetPresentationAttribute(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionGetBBox(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionGetCTM(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionGetScreenCTM(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsSVGPolygonElementPrototypeFunctionGetTransformToElement(JSC::ExecState*);
// Attributes

JSC::JSValue jsSVGPolygonElementPoints(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementAnimatedPoints(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementRequiredFeatures(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementRequiredExtensions(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementSystemLanguage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementXmllang(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPolygonElementXmllang(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPolygonElementXmlspace(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPolygonElementXmlspace(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPolygonElementExternalResourcesRequired(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementClassName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementStyle(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementTransform(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementNearestViewportElement(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementFarthestViewportElement(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGPolygonElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
