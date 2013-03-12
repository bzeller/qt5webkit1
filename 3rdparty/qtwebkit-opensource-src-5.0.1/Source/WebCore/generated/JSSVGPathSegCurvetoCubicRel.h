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

#ifndef JSSVGPathSegCurvetoCubicRel_h
#define JSSVGPathSegCurvetoCubicRel_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGPathSeg.h"
#include "SVGElement.h"
#include "SVGPathSegCurvetoCubic.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGPathSegCurvetoCubicRel : public JSSVGPathSeg {
public:
    typedef JSSVGPathSeg Base;
    static JSSVGPathSegCurvetoCubicRel* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegCurvetoCubicRel> impl)
    {
        JSSVGPathSegCurvetoCubicRel* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoCubicRel>(globalObject->globalData().heap)) JSSVGPathSegCurvetoCubicRel(structure, globalObject, impl);
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
    JSSVGPathSegCurvetoCubicRel(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGPathSegCurvetoCubicRel>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSSVGPathSegCurvetoCubicRelPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGPathSegCurvetoCubicRelPrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGPathSegCurvetoCubicRelPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoCubicRelPrototype>(globalData.heap)) JSSVGPathSegCurvetoCubicRelPrototype(globalData, globalObject, structure);
        ptr->finishCreation(globalData);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSSVGPathSegCurvetoCubicRelPrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSSVGPathSegCurvetoCubicRelConstructor : public DOMConstructorObject {
private:
    JSSVGPathSegCurvetoCubicRelConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGPathSegCurvetoCubicRelConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGPathSegCurvetoCubicRelConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGPathSegCurvetoCubicRelConstructor>(*exec->heap())) JSSVGPathSegCurvetoCubicRelConstructor(structure, globalObject);
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

JSC::JSValue jsSVGPathSegCurvetoCubicRelX(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelX(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicRelY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelY(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicRelX1(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelX1(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicRelY1(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelY1(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicRelX2(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelX2(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicRelY2(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGPathSegCurvetoCubicRelY2(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGPathSegCurvetoCubicRelConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
