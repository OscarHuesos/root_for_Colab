// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Netx
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
#include "TXNetFile.h"
#include "TXNetFileStager.h"
#include "TXNetSystem.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TXNetFile(void *p = 0);
   static void *newArray_TXNetFile(Long_t size, void *p);
   static void delete_TXNetFile(void *p);
   static void deleteArray_TXNetFile(void *p);
   static void destruct_TXNetFile(void *p);
   static void streamer_TXNetFile(TBuffer &buf, void *obj);
   static void reset_TXNetFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXNetFile*)
   {
      ::TXNetFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXNetFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TXNetFile", ::TXNetFile::Class_Version(), "TXNetFile.h", 55,
                  typeid(::TXNetFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXNetFile::Dictionary, isa_proxy, 16,
                  sizeof(::TXNetFile) );
      instance.SetNew(&new_TXNetFile);
      instance.SetNewArray(&newArray_TXNetFile);
      instance.SetDelete(&delete_TXNetFile);
      instance.SetDeleteArray(&deleteArray_TXNetFile);
      instance.SetDestructor(&destruct_TXNetFile);
      instance.SetStreamerFunc(&streamer_TXNetFile);
      instance.SetResetAfterMerge(&reset_TXNetFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXNetFile*)
   {
      return GenerateInitInstanceLocal((::TXNetFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TXNetFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TXNetFileStager(void *p = 0);
   static void *newArray_TXNetFileStager(Long_t size, void *p);
   static void delete_TXNetFileStager(void *p);
   static void deleteArray_TXNetFileStager(void *p);
   static void destruct_TXNetFileStager(void *p);
   static void streamer_TXNetFileStager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXNetFileStager*)
   {
      ::TXNetFileStager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXNetFileStager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TXNetFileStager", ::TXNetFileStager::Class_Version(), "TXNetFileStager.h", 29,
                  typeid(::TXNetFileStager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXNetFileStager::Dictionary, isa_proxy, 16,
                  sizeof(::TXNetFileStager) );
      instance.SetNew(&new_TXNetFileStager);
      instance.SetNewArray(&newArray_TXNetFileStager);
      instance.SetDelete(&delete_TXNetFileStager);
      instance.SetDeleteArray(&deleteArray_TXNetFileStager);
      instance.SetDestructor(&destruct_TXNetFileStager);
      instance.SetStreamerFunc(&streamer_TXNetFileStager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXNetFileStager*)
   {
      return GenerateInitInstanceLocal((::TXNetFileStager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TXNetFileStager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TXNetSystem(void *p = 0);
   static void *newArray_TXNetSystem(Long_t size, void *p);
   static void delete_TXNetSystem(void *p);
   static void deleteArray_TXNetSystem(void *p);
   static void destruct_TXNetSystem(void *p);
   static void streamer_TXNetSystem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TXNetSystem*)
   {
      ::TXNetSystem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TXNetSystem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TXNetSystem", ::TXNetSystem::Class_Version(), "TXNetSystem.h", 49,
                  typeid(::TXNetSystem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TXNetSystem::Dictionary, isa_proxy, 16,
                  sizeof(::TXNetSystem) );
      instance.SetNew(&new_TXNetSystem);
      instance.SetNewArray(&newArray_TXNetSystem);
      instance.SetDelete(&delete_TXNetSystem);
      instance.SetDeleteArray(&deleteArray_TXNetSystem);
      instance.SetDestructor(&destruct_TXNetSystem);
      instance.SetStreamerFunc(&streamer_TXNetSystem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TXNetSystem*)
   {
      return GenerateInitInstanceLocal((::TXNetSystem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TXNetSystem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TXNetFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TXNetFile::Class_Name()
{
   return "TXNetFile";
}

//______________________________________________________________________________
const char *TXNetFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXNetFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TXNetFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXNetFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXNetFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXNetFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXNetFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXNetFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXNetFileStager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TXNetFileStager::Class_Name()
{
   return "TXNetFileStager";
}

//______________________________________________________________________________
const char *TXNetFileStager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXNetFileStager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TXNetFileStager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXNetFileStager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXNetFileStager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXNetFileStager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXNetFileStager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXNetFileStager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TXNetSystem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TXNetSystem::Class_Name()
{
   return "TXNetSystem";
}

//______________________________________________________________________________
const char *TXNetSystem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXNetSystem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TXNetSystem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TXNetSystem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TXNetSystem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXNetSystem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TXNetSystem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TXNetSystem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TXNetFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXNetFile.

   TNetFile::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TXNetFile(void *p) {
      return  p ? new(p) ::TXNetFile : new ::TXNetFile;
   }
   static void *newArray_TXNetFile(Long_t nElements, void *p) {
      return p ? new(p) ::TXNetFile[nElements] : new ::TXNetFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TXNetFile(void *p) {
      delete ((::TXNetFile*)p);
   }
   static void deleteArray_TXNetFile(void *p) {
      delete [] ((::TXNetFile*)p);
   }
   static void destruct_TXNetFile(void *p) {
      typedef ::TXNetFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXNetFile(TBuffer &buf, void *obj) {
      ((::TXNetFile*)obj)->::TXNetFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TXNetFile(void *obj,TFileMergeInfo *info) {
      ((::TXNetFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TXNetFile

//______________________________________________________________________________
void TXNetFileStager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXNetFileStager.

   TFileStager::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TXNetFileStager(void *p) {
      return  p ? new(p) ::TXNetFileStager : new ::TXNetFileStager;
   }
   static void *newArray_TXNetFileStager(Long_t nElements, void *p) {
      return p ? new(p) ::TXNetFileStager[nElements] : new ::TXNetFileStager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TXNetFileStager(void *p) {
      delete ((::TXNetFileStager*)p);
   }
   static void deleteArray_TXNetFileStager(void *p) {
      delete [] ((::TXNetFileStager*)p);
   }
   static void destruct_TXNetFileStager(void *p) {
      typedef ::TXNetFileStager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXNetFileStager(TBuffer &buf, void *obj) {
      ((::TXNetFileStager*)obj)->::TXNetFileStager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXNetFileStager

//______________________________________________________________________________
void TXNetSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TXNetSystem.

   TNetSystem::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TXNetSystem(void *p) {
      return  p ? new(p) ::TXNetSystem : new ::TXNetSystem;
   }
   static void *newArray_TXNetSystem(Long_t nElements, void *p) {
      return p ? new(p) ::TXNetSystem[nElements] : new ::TXNetSystem[nElements];
   }
   // Wrapper around operator delete
   static void delete_TXNetSystem(void *p) {
      delete ((::TXNetSystem*)p);
   }
   static void deleteArray_TXNetSystem(void *p) {
      delete [] ((::TXNetSystem*)p);
   }
   static void destruct_TXNetSystem(void *p) {
      typedef ::TXNetSystem current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TXNetSystem(TBuffer &buf, void *obj) {
      ((::TXNetSystem*)obj)->::TXNetSystem::Streamer(buf);
   }
} // end of namespace ROOT for class ::TXNetSystem

namespace {
  void TriggerDictionaryInitialization_libNetx_Impl() {
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
      TROOT::RegisterModule("libNetx",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libNetx_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libNetx_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libNetx() {
  TriggerDictionaryInitialization_libNetx_Impl();
}
