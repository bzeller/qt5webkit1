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

#ifndef JSCSSRule_h
#define JSCSSRule_h

#include "CSSRule.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSCSSRule : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSCSSRule* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CSSRule> impl)
    {
        JSCSSRule* ptr = new (NotNull, JSC::allocateCell<JSCSSRule>(globalObject->globalData().heap)) JSCSSRule(structure, globalObject, impl);
        ptr->finishCreation(globalObject->globalData());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSCSSRule();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    CSSRule* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull() { if (m_impl) { m_impl->deref(); m_impl = 0; } }

private:
    CSSRule* m_impl;
protected:
    JSCSSRule(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<CSSRule>);
    void finishCreation(JSC::JSGlobalData&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSCSSRuleOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, CSSRule*)
{
    DEFINE_STATIC_LOCAL(JSCSSRuleOwner, jsCSSRuleOwner, ());
    return &jsCSSRuleOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, CSSRule*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, CSSRule*);
CSSRule* toCSSRule(JSC::JSValue);

class JSCSSRulePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSCSSRulePrototype* create(JSC::JSGlobalData& globalData, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSCSSRulePrototype* ptr = new (NotNull, JSC::allocateCell<JSCSSRulePrototype>(globalData.heap)) JSCSSRulePrototype(globalData, globalObject, structure);
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
    JSCSSRulePrototype(JSC::JSGlobalData& globalData, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(globalData, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSCSSRuleConstructor : public DOMConstructorObject {
private:
    JSCSSRuleConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSCSSRuleConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSCSSRuleConstructor* ptr = new (NotNull, JSC::allocateCell<JSCSSRuleConstructor>(*exec->heap())) JSCSSRuleConstructor(structure, globalObject);
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

JSC::JSValue jsCSSRuleType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleCssText(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSCSSRuleCssText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsCSSRuleParentStyleSheet(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleParentRule(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsCSSRuleUNKNOWN_RULE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleSTYLE_RULE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleCHARSET_RULE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleIMPORT_RULE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleMEDIA_RULE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleFONT_FACE_RULE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRulePAGE_RULE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleWEBKIT_KEYFRAMES_RULE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleWEBKIT_KEYFRAME_RULE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsCSSRuleWEBKIT_REGION_RULE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
