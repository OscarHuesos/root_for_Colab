// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTTPython
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "TPyArg.h"
#include "TPyReturn.h"
#include "TPython.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TPyArg(void *p);
   static void deleteArray_TPyArg(void *p);
   static void destruct_TPyArg(void *p);
   static void streamer_TPyArg(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPyArg*)
   {
      ::TPyArg *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPyArg >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPyArg", ::TPyArg::Class_Version(), "TPyArg.h", 33,
                  typeid(::TPyArg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPyArg::Dictionary, isa_proxy, 16,
                  sizeof(::TPyArg) );
      instance.SetDelete(&delete_TPyArg);
      instance.SetDeleteArray(&deleteArray_TPyArg);
      instance.SetDestructor(&destruct_TPyArg);
      instance.SetStreamerFunc(&streamer_TPyArg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPyArg*)
   {
      return GenerateInitInstanceLocal((::TPyArg*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPyArg*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPyReturn(void *p = 0);
   static void *newArray_TPyReturn(Long_t size, void *p);
   static void delete_TPyReturn(void *p);
   static void deleteArray_TPyReturn(void *p);
   static void destruct_TPyReturn(void *p);
   static void streamer_TPyReturn(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPyReturn*)
   {
      ::TPyReturn *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPyReturn >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPyReturn", ::TPyReturn::Class_Version(), "TPyReturn.h", 30,
                  typeid(::TPyReturn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPyReturn::Dictionary, isa_proxy, 16,
                  sizeof(::TPyReturn) );
      instance.SetNew(&new_TPyReturn);
      instance.SetNewArray(&newArray_TPyReturn);
      instance.SetDelete(&delete_TPyReturn);
      instance.SetDeleteArray(&deleteArray_TPyReturn);
      instance.SetDestructor(&destruct_TPyReturn);
      instance.SetStreamerFunc(&streamer_TPyReturn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPyReturn*)
   {
      return GenerateInitInstanceLocal((::TPyReturn*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPyReturn*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TPython(void *p = 0);
   static void *newArray_TPython(Long_t size, void *p);
   static void delete_TPython(void *p);
   static void deleteArray_TPython(void *p);
   static void destruct_TPython(void *p);
   static void streamer_TPython(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TPython*)
   {
      ::TPython *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TPython >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TPython", ::TPython::Class_Version(), "TPython.h", 29,
                  typeid(::TPython), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TPython::Dictionary, isa_proxy, 16,
                  sizeof(::TPython) );
      instance.SetNew(&new_TPython);
      instance.SetNewArray(&newArray_TPython);
      instance.SetDelete(&delete_TPython);
      instance.SetDeleteArray(&deleteArray_TPython);
      instance.SetDestructor(&destruct_TPython);
      instance.SetStreamerFunc(&streamer_TPython);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TPython*)
   {
      return GenerateInitInstanceLocal((::TPython*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TPython*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TPyArg::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyArg::Class_Name()
{
   return "TPyArg";
}

//______________________________________________________________________________
const char *TPyArg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPyArg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyArg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyArg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyArg*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPyReturn::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPyReturn::Class_Name()
{
   return "TPyReturn";
}

//______________________________________________________________________________
const char *TPyReturn::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPyReturn::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPyReturn::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPyReturn::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPyReturn*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TPython::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TPython::Class_Name()
{
   return "TPython";
}

//______________________________________________________________________________
const char *TPython::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPython*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TPython::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TPython*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TPython::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPython*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TPython::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TPython*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TPyArg::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPyArg.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, TPyArg::IsA());
   } else {
      R__c = R__b.WriteVersion(TPyArg::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TPyArg(void *p) {
      delete ((::TPyArg*)p);
   }
   static void deleteArray_TPyArg(void *p) {
      delete [] ((::TPyArg*)p);
   }
   static void destruct_TPyArg(void *p) {
      typedef ::TPyArg current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPyArg(TBuffer &buf, void *obj) {
      ((::TPyArg*)obj)->::TPyArg::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPyArg

//______________________________________________________________________________
void TPyReturn::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPyReturn.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, TPyReturn::IsA());
   } else {
      R__c = R__b.WriteVersion(TPyReturn::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPyReturn(void *p) {
      return  p ? new(p) ::TPyReturn : new ::TPyReturn;
   }
   static void *newArray_TPyReturn(Long_t nElements, void *p) {
      return p ? new(p) ::TPyReturn[nElements] : new ::TPyReturn[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPyReturn(void *p) {
      delete ((::TPyReturn*)p);
   }
   static void deleteArray_TPyReturn(void *p) {
      delete [] ((::TPyReturn*)p);
   }
   static void destruct_TPyReturn(void *p) {
      typedef ::TPyReturn current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPyReturn(TBuffer &buf, void *obj) {
      ((::TPyReturn*)obj)->::TPyReturn::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPyReturn

//______________________________________________________________________________
void TPython::Streamer(TBuffer &R__b)
{
   // Stream an object of class TPython.

   ::Error("TPython::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TPython(void *p) {
      return  p ? new(p) ::TPython : new ::TPython;
   }
   static void *newArray_TPython(Long_t nElements, void *p) {
      return p ? new(p) ::TPython[nElements] : new ::TPython[nElements];
   }
   // Wrapper around operator delete
   static void delete_TPython(void *p) {
      delete ((::TPython*)p);
   }
   static void deleteArray_TPython(void *p) {
      delete [] ((::TPython*)p);
   }
   static void destruct_TPython(void *p) {
      typedef ::TPython current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TPython(TBuffer &buf, void *obj) {
      ((::TPython*)obj)->::TPython::Streamer(buf);
   }
} // end of namespace ROOT for class ::TPython

namespace {
  void TriggerDictionaryInitialization_libROOTTPython_Impl() {
    static const char* headers[] = {
0
    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = "";
    static const char* payloadCode = "";
    static const char* classesHeaders[] = {
""
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libROOTTPython",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTTPython_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTTPython_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTTPython() {
  TriggerDictionaryInitialization_libROOTTPython_Impl();
}
