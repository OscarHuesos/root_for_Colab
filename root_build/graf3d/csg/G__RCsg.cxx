// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RCsg
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
#include "CsgOps.h"

// Header files passed via #pragma extra_include

namespace RootCsg {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *RootCsg_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("RootCsg", 0 /*version*/, "CsgOps.h", 11,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &RootCsg_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *RootCsg_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *RootCsgcLcLTBaseMesh_Dictionary();
   static void RootCsgcLcLTBaseMesh_TClassManip(TClass*);
   static void delete_RootCsgcLcLTBaseMesh(void *p);
   static void deleteArray_RootCsgcLcLTBaseMesh(void *p);
   static void destruct_RootCsgcLcLTBaseMesh(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RootCsg::TBaseMesh*)
   {
      ::RootCsg::TBaseMesh *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RootCsg::TBaseMesh));
      static ::ROOT::TGenericClassInfo 
         instance("RootCsg::TBaseMesh", "CsgOps.h", 16,
                  typeid(::RootCsg::TBaseMesh), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RootCsgcLcLTBaseMesh_Dictionary, isa_proxy, 4,
                  sizeof(::RootCsg::TBaseMesh) );
      instance.SetDelete(&delete_RootCsgcLcLTBaseMesh);
      instance.SetDeleteArray(&deleteArray_RootCsgcLcLTBaseMesh);
      instance.SetDestructor(&destruct_RootCsgcLcLTBaseMesh);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RootCsg::TBaseMesh*)
   {
      return GenerateInitInstanceLocal((::RootCsg::TBaseMesh*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RootCsg::TBaseMesh*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RootCsgcLcLTBaseMesh_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RootCsg::TBaseMesh*)0x0)->GetClass();
      RootCsgcLcLTBaseMesh_TClassManip(theClass);
   return theClass;
   }

   static void RootCsgcLcLTBaseMesh_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RootCsgcLcLTBaseMesh(void *p) {
      delete ((::RootCsg::TBaseMesh*)p);
   }
   static void deleteArray_RootCsgcLcLTBaseMesh(void *p) {
      delete [] ((::RootCsg::TBaseMesh*)p);
   }
   static void destruct_RootCsgcLcLTBaseMesh(void *p) {
      typedef ::RootCsg::TBaseMesh current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RootCsg::TBaseMesh

namespace {
  void TriggerDictionaryInitialization_libRCsg_Impl() {
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
      TROOT::RegisterModule("libRCsg",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRCsg_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRCsg_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRCsg() {
  TriggerDictionaryInitialization_libRCsg_Impl();
}
