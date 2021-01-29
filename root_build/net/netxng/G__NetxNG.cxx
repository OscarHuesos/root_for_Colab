// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__NetxNG
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
#include "TNetXNGFile.h"
#include "TNetXNGFileStager.h"
#include "TNetXNGSystem.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TNetXNGFile(void *p = 0);
   static void *newArray_TNetXNGFile(Long_t size, void *p);
   static void delete_TNetXNGFile(void *p);
   static void deleteArray_TNetXNGFile(void *p);
   static void destruct_TNetXNGFile(void *p);
   static void streamer_TNetXNGFile(TBuffer &buf, void *obj);
   static void reset_TNetXNGFile(void *obj, TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNetXNGFile*)
   {
      ::TNetXNGFile *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNetXNGFile >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNetXNGFile", ::TNetXNGFile::Class_Version(), "TNetXNGFile.h", 44,
                  typeid(::TNetXNGFile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNetXNGFile::Dictionary, isa_proxy, 16,
                  sizeof(::TNetXNGFile) );
      instance.SetNew(&new_TNetXNGFile);
      instance.SetNewArray(&newArray_TNetXNGFile);
      instance.SetDelete(&delete_TNetXNGFile);
      instance.SetDeleteArray(&deleteArray_TNetXNGFile);
      instance.SetDestructor(&destruct_TNetXNGFile);
      instance.SetStreamerFunc(&streamer_TNetXNGFile);
      instance.SetResetAfterMerge(&reset_TNetXNGFile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNetXNGFile*)
   {
      return GenerateInitInstanceLocal((::TNetXNGFile*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNetXNGFile*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNetXNGFileStager(void *p = 0);
   static void *newArray_TNetXNGFileStager(Long_t size, void *p);
   static void delete_TNetXNGFileStager(void *p);
   static void deleteArray_TNetXNGFileStager(void *p);
   static void destruct_TNetXNGFileStager(void *p);
   static void streamer_TNetXNGFileStager(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNetXNGFileStager*)
   {
      ::TNetXNGFileStager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNetXNGFileStager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNetXNGFileStager", ::TNetXNGFileStager::Class_Version(), "TNetXNGFileStager.h", 30,
                  typeid(::TNetXNGFileStager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNetXNGFileStager::Dictionary, isa_proxy, 16,
                  sizeof(::TNetXNGFileStager) );
      instance.SetNew(&new_TNetXNGFileStager);
      instance.SetNewArray(&newArray_TNetXNGFileStager);
      instance.SetDelete(&delete_TNetXNGFileStager);
      instance.SetDeleteArray(&deleteArray_TNetXNGFileStager);
      instance.SetDestructor(&destruct_TNetXNGFileStager);
      instance.SetStreamerFunc(&streamer_TNetXNGFileStager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNetXNGFileStager*)
   {
      return GenerateInitInstanceLocal((::TNetXNGFileStager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNetXNGFileStager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TNetXNGSystem(void *p = 0);
   static void *newArray_TNetXNGSystem(Long_t size, void *p);
   static void delete_TNetXNGSystem(void *p);
   static void deleteArray_TNetXNGSystem(void *p);
   static void destruct_TNetXNGSystem(void *p);
   static void streamer_TNetXNGSystem(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TNetXNGSystem*)
   {
      ::TNetXNGSystem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TNetXNGSystem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TNetXNGSystem", ::TNetXNGSystem::Class_Version(), "TNetXNGSystem.h", 36,
                  typeid(::TNetXNGSystem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TNetXNGSystem::Dictionary, isa_proxy, 16,
                  sizeof(::TNetXNGSystem) );
      instance.SetNew(&new_TNetXNGSystem);
      instance.SetNewArray(&newArray_TNetXNGSystem);
      instance.SetDelete(&delete_TNetXNGSystem);
      instance.SetDeleteArray(&deleteArray_TNetXNGSystem);
      instance.SetDestructor(&destruct_TNetXNGSystem);
      instance.SetStreamerFunc(&streamer_TNetXNGSystem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TNetXNGSystem*)
   {
      return GenerateInitInstanceLocal((::TNetXNGSystem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TNetXNGSystem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TNetXNGFile::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNetXNGFile::Class_Name()
{
   return "TNetXNGFile";
}

//______________________________________________________________________________
const char *TNetXNGFile::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGFile*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNetXNGFile::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGFile*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNetXNGFile::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGFile*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNetXNGFile::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGFile*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNetXNGFileStager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNetXNGFileStager::Class_Name()
{
   return "TNetXNGFileStager";
}

//______________________________________________________________________________
const char *TNetXNGFileStager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGFileStager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNetXNGFileStager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGFileStager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNetXNGFileStager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGFileStager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNetXNGFileStager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGFileStager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TNetXNGSystem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TNetXNGSystem::Class_Name()
{
   return "TNetXNGSystem";
}

//______________________________________________________________________________
const char *TNetXNGSystem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGSystem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TNetXNGSystem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGSystem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TNetXNGSystem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGSystem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TNetXNGSystem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TNetXNGSystem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TNetXNGFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNetXNGFile.

   TFile::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNetXNGFile(void *p) {
      return  p ? new(p) ::TNetXNGFile : new ::TNetXNGFile;
   }
   static void *newArray_TNetXNGFile(Long_t nElements, void *p) {
      return p ? new(p) ::TNetXNGFile[nElements] : new ::TNetXNGFile[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNetXNGFile(void *p) {
      delete ((::TNetXNGFile*)p);
   }
   static void deleteArray_TNetXNGFile(void *p) {
      delete [] ((::TNetXNGFile*)p);
   }
   static void destruct_TNetXNGFile(void *p) {
      typedef ::TNetXNGFile current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TNetXNGFile(TBuffer &buf, void *obj) {
      ((::TNetXNGFile*)obj)->::TNetXNGFile::Streamer(buf);
   }
   // Wrapper around the Reset function.
   static void reset_TNetXNGFile(void *obj,TFileMergeInfo *info) {
      ((::TNetXNGFile*)obj)->ResetAfterMerge(info);
   }
} // end of namespace ROOT for class ::TNetXNGFile

//______________________________________________________________________________
void TNetXNGFileStager::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNetXNGFileStager.

   TFileStager::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNetXNGFileStager(void *p) {
      return  p ? new(p) ::TNetXNGFileStager : new ::TNetXNGFileStager;
   }
   static void *newArray_TNetXNGFileStager(Long_t nElements, void *p) {
      return p ? new(p) ::TNetXNGFileStager[nElements] : new ::TNetXNGFileStager[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNetXNGFileStager(void *p) {
      delete ((::TNetXNGFileStager*)p);
   }
   static void deleteArray_TNetXNGFileStager(void *p) {
      delete [] ((::TNetXNGFileStager*)p);
   }
   static void destruct_TNetXNGFileStager(void *p) {
      typedef ::TNetXNGFileStager current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TNetXNGFileStager(TBuffer &buf, void *obj) {
      ((::TNetXNGFileStager*)obj)->::TNetXNGFileStager::Streamer(buf);
   }
} // end of namespace ROOT for class ::TNetXNGFileStager

//______________________________________________________________________________
void TNetXNGSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNetXNGSystem.

   TSystem::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TNetXNGSystem(void *p) {
      return  p ? new(p) ::TNetXNGSystem : new ::TNetXNGSystem;
   }
   static void *newArray_TNetXNGSystem(Long_t nElements, void *p) {
      return p ? new(p) ::TNetXNGSystem[nElements] : new ::TNetXNGSystem[nElements];
   }
   // Wrapper around operator delete
   static void delete_TNetXNGSystem(void *p) {
      delete ((::TNetXNGSystem*)p);
   }
   static void deleteArray_TNetXNGSystem(void *p) {
      delete [] ((::TNetXNGSystem*)p);
   }
   static void destruct_TNetXNGSystem(void *p) {
      typedef ::TNetXNGSystem current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TNetXNGSystem(TBuffer &buf, void *obj) {
      ((::TNetXNGSystem*)obj)->::TNetXNGSystem::Streamer(buf);
   }
} // end of namespace ROOT for class ::TNetXNGSystem

namespace {
  void TriggerDictionaryInitialization_libNetxNG_Impl() {
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
      TROOT::RegisterModule("libNetxNG",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libNetxNG_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libNetxNG_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libNetxNG() {
  TriggerDictionaryInitialization_libNetxNG_Impl();
}
