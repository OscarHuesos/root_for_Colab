// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RHTTPSniff
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
#include "TRootSnifferFull.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_TRootSnifferFull(void *p);
   static void deleteArray_TRootSnifferFull(void *p);
   static void destruct_TRootSnifferFull(void *p);
   static void streamer_TRootSnifferFull(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootSnifferFull*)
   {
      ::TRootSnifferFull *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootSnifferFull >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRootSnifferFull", ::TRootSnifferFull::Class_Version(), "TRootSnifferFull.h", 19,
                  typeid(::TRootSnifferFull), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TRootSnifferFull::Dictionary, isa_proxy, 16,
                  sizeof(::TRootSnifferFull) );
      instance.SetDelete(&delete_TRootSnifferFull);
      instance.SetDeleteArray(&deleteArray_TRootSnifferFull);
      instance.SetDestructor(&destruct_TRootSnifferFull);
      instance.SetStreamerFunc(&streamer_TRootSnifferFull);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootSnifferFull*)
   {
      return GenerateInitInstanceLocal((::TRootSnifferFull*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TRootSnifferFull*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TRootSnifferFull::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootSnifferFull::Class_Name()
{
   return "TRootSnifferFull";
}

//______________________________________________________________________________
const char *TRootSnifferFull::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferFull*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRootSnifferFull::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferFull*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootSnifferFull::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferFull*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootSnifferFull::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootSnifferFull*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TRootSnifferFull::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootSnifferFull.

   TRootSniffer::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TRootSnifferFull(void *p) {
      delete ((::TRootSnifferFull*)p);
   }
   static void deleteArray_TRootSnifferFull(void *p) {
      delete [] ((::TRootSnifferFull*)p);
   }
   static void destruct_TRootSnifferFull(void *p) {
      typedef ::TRootSnifferFull current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootSnifferFull(TBuffer &buf, void *obj) {
      ((::TRootSnifferFull*)obj)->::TRootSnifferFull::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootSnifferFull

namespace {
  void TriggerDictionaryInitialization_libRHTTPSniff_Impl() {
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
      TROOT::RegisterModule("libRHTTPSniff",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRHTTPSniff_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRHTTPSniff_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRHTTPSniff() {
  TriggerDictionaryInitialization_libRHTTPSniff_Impl();
}
