// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTVecOps
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
#include "ROOT/RAdoptAllocator.hxx"
#include "ROOT/RVec.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   namespace VecOps {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLVecOps_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::VecOps", 0 /*version*/, "ROOT/RVec.hxx", 54,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLVecOps_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLVecOps_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEULong64_tgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEULong64_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<ULong64_t>*)
   {
      ::ROOT::VecOps::RVec<ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<ULong64_t>", "ROOT/RVec.hxx", 275,
                  typeid(::ROOT::VecOps::RVec<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEULong64_tgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<ULong64_t>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEULong64_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEULong64_tgR);

      ::ROOT::AddClassAlternate("ROOT::VecOps::RVec<ULong64_t>","ROOT::VecOps::RVec<unsigned long long>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<ULong64_t>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<ULong64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<ULong64_t>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclELong64_tgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclELong64_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<Long64_t>*)
   {
      ::ROOT::VecOps::RVec<Long64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<Long64_t>", "ROOT/RVec.hxx", 275,
                  typeid(::ROOT::VecOps::RVec<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclELong64_tgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<Long64_t>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclELong64_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclELong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclELong64_tgR);

      ::ROOT::AddClassAlternate("ROOT::VecOps::RVec<Long64_t>","ROOT::VecOps::RVec<long long>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<Long64_t>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<Long64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<Long64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<Long64_t>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEboolgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEboolgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEboolgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<bool>*)
   {
      ::ROOT::VecOps::RVec<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<bool>", "ROOT/RVec.hxx", 275,
                  typeid(::ROOT::VecOps::RVec<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEboolgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<bool>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEboolgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEboolgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEboolgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEboolgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEboolgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<bool>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<bool>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<bool>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEchargR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEchargR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEchargR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEchargR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEchargR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEchargR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<char>*)
   {
      ::ROOT::VecOps::RVec<char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<char>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<char>", "ROOT/RVec.hxx", 1755,
                  typeid(::ROOT::VecOps::RVec<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEchargR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<char>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEchargR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEchargR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEchargR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEchargR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEchargR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<char>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<char>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<char>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEchargR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEshortgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEshortgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEshortgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<short>*)
   {
      ::ROOT::VecOps::RVec<short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<short>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<short>", "ROOT/RVec.hxx", 1756,
                  typeid(::ROOT::VecOps::RVec<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEshortgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<short>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEshortgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEshortgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEshortgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEshortgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEshortgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<short>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<short>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<short>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<short>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEintgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEintgR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEintgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEintgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEintgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<int>*)
   {
      ::ROOT::VecOps::RVec<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<int>", "ROOT/RVec.hxx", 1757,
                  typeid(::ROOT::VecOps::RVec<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEintgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<int>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEintgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEintgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEintgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<int>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<int>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclElonggR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclElonggR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclElonggR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclElonggR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclElonggR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclElonggR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<long>*)
   {
      ::ROOT::VecOps::RVec<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<long>", "ROOT/RVec.hxx", 1758,
                  typeid(::ROOT::VecOps::RVec<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclElonggR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<long>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclElonggR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclElonggR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclElonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclElonggR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclElonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<long>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<long>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<long>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclElonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<unsigned char>*)
   {
      ::ROOT::VecOps::RVec<unsigned char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<unsigned char>", "ROOT/RVec.hxx", 1761,
                  typeid(::ROOT::VecOps::RVec<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<unsigned char>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<unsigned char>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<unsigned char>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<unsigned char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<unsigned char>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<unsigned short>*)
   {
      ::ROOT::VecOps::RVec<unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<unsigned short>", "ROOT/RVec.hxx", 1762,
                  typeid(::ROOT::VecOps::RVec<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<unsigned short>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<unsigned short>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<unsigned short>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<unsigned short>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<unsigned int>*)
   {
      ::ROOT::VecOps::RVec<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<unsigned int>", "ROOT/RVec.hxx", 1763,
                  typeid(::ROOT::VecOps::RVec<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<unsigned int>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<unsigned int>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<unsigned int>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<unsigned long>*)
   {
      ::ROOT::VecOps::RVec<unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<unsigned long>", "ROOT/RVec.hxx", 1764,
                  typeid(::ROOT::VecOps::RVec<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<unsigned long>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<unsigned long>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<unsigned long>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<unsigned long>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEfloatgR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<float>*)
   {
      ::ROOT::VecOps::RVec<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<float>", "ROOT/RVec.hxx", 1767,
                  typeid(::ROOT::VecOps::RVec<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEfloatgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<float>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<float>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLVecOpscLcLRVeclEdoublegR_Dictionary();
   static void ROOTcLcLVecOpscLcLRVeclEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p);
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p);
   static void destruct_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::VecOps::RVec<double>*)
   {
      ::ROOT::VecOps::RVec<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::VecOps::RVec<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::VecOps::RVec<double>", "ROOT/RVec.hxx", 1768,
                  typeid(::ROOT::VecOps::RVec<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLVecOpscLcLRVeclEdoublegR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::VecOps::RVec<double>) );
      instance.SetNew(&new_ROOTcLcLVecOpscLcLRVeclEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLVecOpscLcLRVeclEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLVecOpscLcLRVeclEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLVecOpscLcLRVeclEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLVecOpscLcLRVeclEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::VecOps::RVec<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::VecOps::RVec<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLVecOpscLcLRVeclEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::VecOps::RVec<double>*)0x0)->GetClass();
      ROOTcLcLVecOpscLcLRVeclEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLVecOpscLcLRVeclEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<ULong64_t> : new ::ROOT::VecOps::RVec<ULong64_t>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<ULong64_t>[nElements] : new ::ROOT::VecOps::RVec<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p) {
      delete ((::ROOT::VecOps::RVec<ULong64_t>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<ULong64_t>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEULong64_tgR(void *p) {
      typedef ::ROOT::VecOps::RVec<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<ULong64_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<Long64_t> : new ::ROOT::VecOps::RVec<Long64_t>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<Long64_t>[nElements] : new ::ROOT::VecOps::RVec<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p) {
      delete ((::ROOT::VecOps::RVec<Long64_t>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<Long64_t>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclELong64_tgR(void *p) {
      typedef ::ROOT::VecOps::RVec<Long64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<Long64_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<bool> : new ::ROOT::VecOps::RVec<bool>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<bool>[nElements] : new ::ROOT::VecOps::RVec<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p) {
      delete ((::ROOT::VecOps::RVec<bool>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<bool>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEboolgR(void *p) {
      typedef ::ROOT::VecOps::RVec<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<char> : new ::ROOT::VecOps::RVec<char>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<char>[nElements] : new ::ROOT::VecOps::RVec<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEchargR(void *p) {
      delete ((::ROOT::VecOps::RVec<char>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEchargR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<char>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEchargR(void *p) {
      typedef ::ROOT::VecOps::RVec<char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<char>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<short> : new ::ROOT::VecOps::RVec<short>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<short>[nElements] : new ::ROOT::VecOps::RVec<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p) {
      delete ((::ROOT::VecOps::RVec<short>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<short>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEshortgR(void *p) {
      typedef ::ROOT::VecOps::RVec<short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<short>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<int> : new ::ROOT::VecOps::RVec<int>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<int>[nElements] : new ::ROOT::VecOps::RVec<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEintgR(void *p) {
      delete ((::ROOT::VecOps::RVec<int>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEintgR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<int>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEintgR(void *p) {
      typedef ::ROOT::VecOps::RVec<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<long> : new ::ROOT::VecOps::RVec<long>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<long>[nElements] : new ::ROOT::VecOps::RVec<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclElonggR(void *p) {
      delete ((::ROOT::VecOps::RVec<long>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclElonggR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<long>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclElonggR(void *p) {
      typedef ::ROOT::VecOps::RVec<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<unsigned char> : new ::ROOT::VecOps::RVec<unsigned char>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<unsigned char>[nElements] : new ::ROOT::VecOps::RVec<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p) {
      delete ((::ROOT::VecOps::RVec<unsigned char>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<unsigned char>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPchargR(void *p) {
      typedef ::ROOT::VecOps::RVec<unsigned char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<unsigned char>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<unsigned short> : new ::ROOT::VecOps::RVec<unsigned short>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<unsigned short>[nElements] : new ::ROOT::VecOps::RVec<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p) {
      delete ((::ROOT::VecOps::RVec<unsigned short>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<unsigned short>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPshortgR(void *p) {
      typedef ::ROOT::VecOps::RVec<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<unsigned short>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<unsigned int> : new ::ROOT::VecOps::RVec<unsigned int>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<unsigned int>[nElements] : new ::ROOT::VecOps::RVec<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p) {
      delete ((::ROOT::VecOps::RVec<unsigned int>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<unsigned int>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPintgR(void *p) {
      typedef ::ROOT::VecOps::RVec<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<unsigned long> : new ::ROOT::VecOps::RVec<unsigned long>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<unsigned long>[nElements] : new ::ROOT::VecOps::RVec<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p) {
      delete ((::ROOT::VecOps::RVec<unsigned long>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<unsigned long>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEunsignedsPlonggR(void *p) {
      typedef ::ROOT::VecOps::RVec<unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<unsigned long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<float> : new ::ROOT::VecOps::RVec<float>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<float>[nElements] : new ::ROOT::VecOps::RVec<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p) {
      delete ((::ROOT::VecOps::RVec<float>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<float>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEfloatgR(void *p) {
      typedef ::ROOT::VecOps::RVec<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<double> : new ::ROOT::VecOps::RVec<double>;
   }
   static void *newArray_ROOTcLcLVecOpscLcLRVeclEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::VecOps::RVec<double>[nElements] : new ::ROOT::VecOps::RVec<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p) {
      delete ((::ROOT::VecOps::RVec<double>*)p);
   }
   static void deleteArray_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p) {
      delete [] ((::ROOT::VecOps::RVec<double>*)p);
   }
   static void destruct_ROOTcLcLVecOpscLcLRVeclEdoublegR(void *p) {
      typedef ::ROOT::VecOps::RVec<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::VecOps::RVec<double>

namespace ROOT {
   static TClass *vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR_Dictionary();
   static void vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR(void *p);
   static void destruct_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >*)
   {
      vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >", -2, "vector", 216,
                  typeid(vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >) );
      instance.SetNew(&new_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> > >()));

      ::ROOT::AddClassAlternate("vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >","std::vector<unsigned short, ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >*)0x0)->GetClass();
      vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> > : new vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >;
   }
   static void *newArray_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >[nElements] : new vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR(void *p) {
      delete ((vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >*)p);
   }
   static void deleteArray_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR(void *p) {
      delete [] ((vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >*)p);
   }
   static void destruct_vectorlEunsignedsPshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPshortgRsPgR(void *p) {
      typedef vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short,ROOT::Detail::VecOps::RAdoptAllocator<unsigned short> >

namespace ROOT {
   static TClass *vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR_Dictionary();
   static void vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR(void *p);
   static void deleteArray_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR(void *p);
   static void destruct_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >*)
   {
      vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >", -2, "vector", 216,
                  typeid(vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >) );
      instance.SetNew(&new_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR);
      instance.SetDelete(&delete_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> > >()));

      ::ROOT::AddClassAlternate("vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >","std::vector<unsigned long, ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >*)0x0)->GetClass();
      vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> > : new vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >;
   }
   static void *newArray_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >[nElements] : new vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR(void *p) {
      delete ((vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >*)p);
   }
   static void deleteArray_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR(void *p) {
      delete [] ((vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >*)p);
   }
   static void destruct_vectorlEunsignedsPlongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPlonggRsPgR(void *p) {
      typedef vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long,ROOT::Detail::VecOps::RAdoptAllocator<unsigned long> >

namespace ROOT {
   static TClass *vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR_Dictionary();
   static void vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR(void *p);
   static void deleteArray_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR(void *p);
   static void destruct_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >*)
   {
      vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >", -2, "vector", 216,
                  typeid(vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >) );
      instance.SetNew(&new_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> > >()));

      ::ROOT::AddClassAlternate("vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >","std::vector<unsigned int, ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >*)0x0)->GetClass();
      vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> > : new vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >;
   }
   static void *newArray_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >[nElements] : new vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR(void *p) {
      delete ((vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >*)p);
   }
   static void deleteArray_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR(void *p) {
      delete [] ((vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >*)p);
   }
   static void destruct_vectorlEunsignedsPintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPintgRsPgR(void *p) {
      typedef vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int,ROOT::Detail::VecOps::RAdoptAllocator<unsigned int> >

namespace ROOT {
   static TClass *vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR_Dictionary();
   static void vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR(void *p);
   static void deleteArray_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR(void *p);
   static void destruct_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >*)
   {
      vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >", -2, "vector", 216,
                  typeid(vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >) );
      instance.SetNew(&new_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR);
      instance.SetDelete(&delete_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> > >()));

      ::ROOT::AddClassAlternate("vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >","std::vector<unsigned char, ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >*)0x0)->GetClass();
      vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> > : new vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >;
   }
   static void *newArray_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >[nElements] : new vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR(void *p) {
      delete ((vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >*)p);
   }
   static void deleteArray_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR(void *p) {
      delete [] ((vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >*)p);
   }
   static void destruct_vectorlEunsignedsPcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEunsignedsPchargRsPgR(void *p) {
      typedef vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned char,ROOT::Detail::VecOps::RAdoptAllocator<unsigned char> >

namespace ROOT {
   static TClass *vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR_Dictionary();
   static void vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR(void *p = 0);
   static void *newArray_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR(Long_t size, void *p);
   static void delete_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR(void *p);
   static void deleteArray_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR(void *p);
   static void destruct_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >*)
   {
      vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >", -2, "vector", 216,
                  typeid(vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >) );
      instance.SetNew(&new_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR);
      instance.SetNewArray(&newArray_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR);
      instance.SetDelete(&delete_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR);
      instance.SetDestructor(&destruct_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> > >()));

      ::ROOT::AddClassAlternate("vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >","std::vector<short, ROOT::Detail::VecOps::RAdoptAllocator<short> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >*)0x0)->GetClass();
      vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> > : new vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >;
   }
   static void *newArray_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >[nElements] : new vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR(void *p) {
      delete ((vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >*)p);
   }
   static void deleteArray_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR(void *p) {
      delete [] ((vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >*)p);
   }
   static void destruct_vectorlEshortcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEshortgRsPgR(void *p) {
      typedef vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<short,ROOT::Detail::VecOps::RAdoptAllocator<short> >

namespace ROOT {
   static TClass *vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR_Dictionary();
   static void vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR_TClassManip(TClass*);
   static void *new_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR(void *p = 0);
   static void *newArray_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR(Long_t size, void *p);
   static void delete_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR(void *p);
   static void deleteArray_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR(void *p);
   static void destruct_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >*)
   {
      vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >", -2, "vector", 216,
                  typeid(vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >) );
      instance.SetNew(&new_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR);
      instance.SetNewArray(&newArray_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR);
      instance.SetDelete(&delete_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR);
      instance.SetDestructor(&destruct_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> > >()));

      ::ROOT::AddClassAlternate("vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >","std::vector<long, ROOT::Detail::VecOps::RAdoptAllocator<long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >*)0x0)->GetClass();
      vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> > : new vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >;
   }
   static void *newArray_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >[nElements] : new vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR(void *p) {
      delete ((vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >*)p);
   }
   static void deleteArray_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR(void *p) {
      delete [] ((vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >*)p);
   }
   static void destruct_vectorlElongcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlElonggRsPgR(void *p) {
      typedef vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<long,ROOT::Detail::VecOps::RAdoptAllocator<long> >

namespace ROOT {
   static TClass *vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR_Dictionary();
   static void vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR(void *p = 0);
   static void *newArray_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR(void *p);
   static void destruct_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >*)
   {
      vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >", -2, "vector", 216,
                  typeid(vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >) );
      instance.SetNew(&new_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> > >()));

      ::ROOT::AddClassAlternate("vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >","std::vector<int, ROOT::Detail::VecOps::RAdoptAllocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >*)0x0)->GetClass();
      vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> > : new vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >;
   }
   static void *newArray_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >[nElements] : new vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR(void *p) {
      delete ((vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >*)p);
   }
   static void deleteArray_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR(void *p) {
      delete [] ((vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >*)p);
   }
   static void destruct_vectorlEintcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEintgRsPgR(void *p) {
      typedef vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int,ROOT::Detail::VecOps::RAdoptAllocator<int> >

namespace ROOT {
   static TClass *vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR_Dictionary();
   static void vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR(void *p);
   static void destruct_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >*)
   {
      vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >", -2, "vector", 216,
                  typeid(vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >) );
      instance.SetNew(&new_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> > >()));

      ::ROOT::AddClassAlternate("vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >","std::vector<float, ROOT::Detail::VecOps::RAdoptAllocator<float> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >*)0x0)->GetClass();
      vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> > : new vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >;
   }
   static void *newArray_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >[nElements] : new vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR(void *p) {
      delete ((vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >*)p);
   }
   static void deleteArray_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR(void *p) {
      delete [] ((vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >*)p);
   }
   static void destruct_vectorlEfloatcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEfloatgRsPgR(void *p) {
      typedef vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float,ROOT::Detail::VecOps::RAdoptAllocator<float> >

namespace ROOT {
   static TClass *vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR_Dictionary();
   static void vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR(void *p);
   static void destruct_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >*)
   {
      vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >", -2, "vector", 216,
                  typeid(vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >) );
      instance.SetNew(&new_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> > >()));

      ::ROOT::AddClassAlternate("vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >","std::vector<double, ROOT::Detail::VecOps::RAdoptAllocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >*)0x0)->GetClass();
      vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> > : new vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >;
   }
   static void *newArray_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >[nElements] : new vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR(void *p) {
      delete ((vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >*)p);
   }
   static void deleteArray_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR(void *p) {
      delete [] ((vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >*)p);
   }
   static void destruct_vectorlEdoublecOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEdoublegRsPgR(void *p) {
      typedef vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double,ROOT::Detail::VecOps::RAdoptAllocator<double> >

namespace ROOT {
   static TClass *vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR_Dictionary();
   static void vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR_TClassManip(TClass*);
   static void *new_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR(void *p = 0);
   static void *newArray_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR(Long_t size, void *p);
   static void delete_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR(void *p);
   static void deleteArray_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR(void *p);
   static void destruct_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >*)
   {
      vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >", -2, "vector", 216,
                  typeid(vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >) );
      instance.SetNew(&new_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR);
      instance.SetNewArray(&newArray_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR);
      instance.SetDelete(&delete_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR);
      instance.SetDestructor(&destruct_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> > >()));

      ::ROOT::AddClassAlternate("vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >","std::vector<char, ROOT::Detail::VecOps::RAdoptAllocator<char> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >*)0x0)->GetClass();
      vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> > : new vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >;
   }
   static void *newArray_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >[nElements] : new vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR(void *p) {
      delete ((vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >*)p);
   }
   static void deleteArray_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR(void *p) {
      delete [] ((vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >*)p);
   }
   static void destruct_vectorlEcharcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEchargRsPgR(void *p) {
      typedef vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<char,ROOT::Detail::VecOps::RAdoptAllocator<char> >

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = 0);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 543,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));

      ::ROOT::AddClassAlternate("vector<bool>","std::vector<bool, std::allocator<bool> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)0x0)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR_Dictionary();
   static void vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR(void *p = 0);
   static void *newArray_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR(Long_t size, void *p);
   static void delete_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR(void *p);
   static void deleteArray_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR(void *p);
   static void destruct_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >*)
   {
      vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >", -2, "vector", 216,
                  typeid(vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >) );
      instance.SetNew(&new_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR);
      instance.SetNewArray(&newArray_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR);
      instance.SetDelete(&delete_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR);
      instance.SetDestructor(&destruct_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> > >()));

      ::ROOT::AddClassAlternate("vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >","std::vector<unsigned long long, ROOT::Detail::VecOps::RAdoptAllocator<unsigned long long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >*)0x0)->GetClass();
      vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> > : new vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >;
   }
   static void *newArray_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >[nElements] : new vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR(void *p) {
      delete ((vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >*)p);
   }
   static void deleteArray_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR(void *p) {
      delete [] ((vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >*)p);
   }
   static void destruct_vectorlEULong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlEULong64_tgRsPgR(void *p) {
      typedef vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ULong64_t,ROOT::Detail::VecOps::RAdoptAllocator<ULong64_t> >

namespace ROOT {
   static TClass *vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR_Dictionary();
   static void vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR_TClassManip(TClass*);
   static void *new_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR(void *p = 0);
   static void *newArray_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR(Long_t size, void *p);
   static void delete_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR(void *p);
   static void deleteArray_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR(void *p);
   static void destruct_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >*)
   {
      vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >", -2, "vector", 216,
                  typeid(vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >) );
      instance.SetNew(&new_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR);
      instance.SetNewArray(&newArray_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR);
      instance.SetDelete(&delete_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR);
      instance.SetDestructor(&destruct_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> > >()));

      ::ROOT::AddClassAlternate("vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >","std::vector<long long, ROOT::Detail::VecOps::RAdoptAllocator<long long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >*)0x0)->GetClass();
      vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> > : new vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >;
   }
   static void *newArray_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >[nElements] : new vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR(void *p) {
      delete ((vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >*)p);
   }
   static void deleteArray_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR(void *p) {
      delete [] ((vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >*)p);
   }
   static void destruct_vectorlELong64_tcOROOTcLcLDetailcLcLVecOpscLcLRAdoptAllocatorlELong64_tgRsPgR(void *p) {
      typedef vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Long64_t,ROOT::Detail::VecOps::RAdoptAllocator<Long64_t> >

namespace {
  void TriggerDictionaryInitialization_libROOTVecOps_Impl() {
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
      TROOT::RegisterModule("libROOTVecOps",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTVecOps_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTVecOps_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTVecOps() {
  TriggerDictionaryInitialization_libROOTVecOps_Impl();
}
