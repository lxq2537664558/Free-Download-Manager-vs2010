/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_ClipboardEventBinding_h__
#define mozilla_dom_ClipboardEventBinding_h__

#include "EventBinding.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/DOMJSClass.h"
#include "mozilla/dom/DOMJSProxyHandler.h"

class XPCWrappedNativeScope;
class nsDOMClipboardEvent;


namespace mozilla {
namespace dom {

template <>
struct PrototypeTraits<prototypes::id::ClipboardEvent>
{
  enum
  {
    Depth = 1
  };
  typedef nsDOMClipboardEvent NativeType;
};
template <>
struct PrototypeIDMap<nsDOMClipboardEvent>
{
  enum
  {
    PrototypeID = prototypes::id::ClipboardEvent
  };
};
} // namespace dom
} // namespace mozilla


namespace mozilla {
namespace dom {

struct ClipboardEventInit : public EventInit {
  ClipboardEventInit() {}
  bool Init(JSContext* cx, JSObject* scopeObj, const JS::Value& val);
  bool ToObject(JSContext* cx, JSObject* parentObject, JS::Value *vp);

  bool Init(const nsAString& aJSON)
  {
    mozilla::Maybe<JSAutoRequest> ar;
    mozilla::Maybe<JSAutoCompartment> ac;
    jsval json = JSVAL_VOID;
    JSContext* cx = ParseJSON(aJSON, ar, ac, json);
    NS_ENSURE_TRUE(cx, false);
    return Init(cx, nullptr, json);
  }
  ClipboardEventInit& AsMutable() const
  {
    return *const_cast<ClipboardEventInit*>(this);
  }

  nsString mData;
  nsString mDataType;
private:
  // Disallow copy-construction
  ClipboardEventInit(const ClipboardEventInit&) MOZ_DELETE;
  static bool InitIds(JSContext* cx);
  static bool initedIds;
  static jsid data_id;
  static jsid dataType_id;
};
struct ClipboardEventInitInitializer : public ClipboardEventInit {
  ClipboardEventInitInitializer() {
    // Safe to pass a null context if we pass a null value
    Init(nullptr, nullptr, JS::NullValue());
  }
};

namespace ClipboardEventBinding {

  extern const NativePropertyHooks sNativePropertyHooks;

  void
  CreateInterfaceObjects(JSContext* aCx, JSObject* aGlobal, JSObject** protoAndIfaceArray);

  inline JSObject* GetProtoObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface prototype object for this class.  This will create the
       object as needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[prototypes::id::ClipboardEvent];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[prototypes::id::ClipboardEvent];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  inline JSObject* GetConstructorObject(JSContext* aCx, JSObject* aGlobal)
  {

    /* Get the interface object for this class.  This will create the object as
       needed. */

    /* Make sure our global is sane.  Hopefully we can remove this sometime */
    if (!(js::GetObjectClass(aGlobal)->flags & JSCLASS_DOM_GLOBAL)) {
      return NULL;
    }
    /* Check to see whether the interface objects are already installed */
    JSObject** protoAndIfaceArray = GetProtoAndIfaceArray(aGlobal);
    JSObject* cachedObject = protoAndIfaceArray[constructors::id::ClipboardEvent];
    if (!cachedObject) {
      CreateInterfaceObjects(aCx, aGlobal, protoAndIfaceArray);
      cachedObject = protoAndIfaceArray[constructors::id::ClipboardEvent];
    }

    /* cachedObject might _still_ be null, but that's OK */
    return cachedObject;
  }

  JSObject*
  DefineDOMInterface(JSContext* aCx, JSObject* aGlobal, jsid id, bool* aEnabled);

  extern DOMJSClass Class;

  JSObject*
  Wrap(JSContext* aCx, JSObject* aScope, nsDOMClipboardEvent* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JSObject* aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

} // namespace ClipboardEventBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_ClipboardEventBinding_h__
