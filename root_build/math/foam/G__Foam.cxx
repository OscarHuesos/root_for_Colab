// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Foam
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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"

#include <TRefArray.h>

// Header files passed as explicit arguments
#include "TFoam.h"
#include "TFoamCell.h"
#include "TFoamIntegrand.h"
#include "TFoamMaxwt.h"
#include "TFoamSampler.h"
#include "TFoamVect.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TFoam(void *p = 0);
   static void *newArray_TFoam(Long_t size, void *p);
   static void delete_TFoam(void *p);
   static void deleteArray_TFoam(void *p);
   static void destruct_TFoam(void *p);

   // Schema evolution read functions
   static void read_TFoam_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_fNCells = oldObj->GetId("fNCells");
      static Int_t id_fCells = oldObj->GetId("fCells");
      static Int_t id_fCellsAct = oldObj->GetId("fCellsAct");
#endif
      struct TFoam_Onfile {
         Int_t &fNCells;
         TFoamCell** &fCells;
         TRefArray* &fCellsAct;
         TFoam_Onfile(Int_t &onfile_fNCells, TFoamCell** &onfile_fCells, TRefArray* &onfile_fCellsAct ): fNCells(onfile_fNCells), fCells(onfile_fCells), fCellsAct(onfile_fCellsAct) {}
      };
      static Long_t offset_Onfile_TFoam_fNCells = oldObj->GetClass()->GetDataMemberOffset("fNCells");
      static Long_t offset_Onfile_TFoam_fCells = oldObj->GetClass()->GetDataMemberOffset("fCells");
      static Long_t offset_Onfile_TFoam_fCellsAct = oldObj->GetClass()->GetDataMemberOffset("fCellsAct");
      char *onfile_add = (char*)oldObj->GetObject();
      TFoam_Onfile onfile(
         *(Int_t*)(onfile_add+offset_Onfile_TFoam_fNCells),
         *(TFoamCell***)(onfile_add+offset_Onfile_TFoam_fCells),
         *(TRefArray**)(onfile_add+offset_Onfile_TFoam_fCellsAct) );

      static TClassRef cls("TFoam");
      static Long_t offset_fNCells = cls->GetDataMemberOffset("fNCells");
      Int_t& fNCells = *(Int_t*)(target+offset_fNCells);
      static Long_t offset_fCells = cls->GetDataMemberOffset("fCells");
      TFoamCell**& fCells = *(TFoamCell***)(target+offset_fCells);
      static Long_t offset_fCellsAct = cls->GetDataMemberOffset("fCellsAct");
      vector<Long_t>& fCellsAct = *(vector<Long_t>*)(target+offset_fCellsAct);
      TFoam* newObj = (TFoam*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     fNCells = onfile.fNCells; \
         fCells = onfile.fCells; \
         onfile.fCells = nullptr; \
         fCellsAct.clear(); \
         for (Int_t i=0; i < onfile.fCellsAct->GetEntries(); ++i) { \
            const TObject* cellp = onfile.fCellsAct->At(i); \
            for (Int_t j=0; j < fNCells; ++j) { \
               if (cellp == fCells[j]) { \
                 fCellsAct.push_back(j); \
                 break; \
               } \
            } \
         }
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFoam*)
   {
      ::TFoam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFoam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFoam", ::TFoam::Class_Version(), "TFoam.h", 21,
                  typeid(::TFoam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFoam::Dictionary, isa_proxy, 4,
                  sizeof(::TFoam) );
      instance.SetNew(&new_TFoam);
      instance.SetNewArray(&newArray_TFoam);
      instance.SetDelete(&delete_TFoam);
      instance.SetDeleteArray(&deleteArray_TFoam);
      instance.SetDestructor(&destruct_TFoam);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "TFoam";
      rule->fTarget      = "fNCells,fCells,fCellsAct";
      rule->fSource      = "Int_t fNCells; TFoamCell **fCells; TRefArray *fCellsAct";
      rule->fFunctionPtr = (void *)TFunc2void( read_TFoam_0);
      rule->fCode        = "fNCells = onfile.fNCells; \\n         fCells = onfile.fCells; \\n         onfile.fCells = nullptr; \\n         fCellsAct.clear(); \\n         for (Int_t i=0; i < onfile.fCellsAct->GetEntries(); ++i) { \\n            const TObject* cellp = onfile.fCellsAct->At(i); \\n            for (Int_t j=0; j < fNCells; ++j) { \\n               if (cellp == fCells[j]) { \\n                 fCellsAct.push_back(j); \\n                 break; \\n               } \\n            } \\n         }";
      rule->fVersion     = "[1]";
      rule->fInclude     = "TRefArray.h";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFoam*)
   {
      return GenerateInitInstanceLocal((::TFoam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFoam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFoamCell(void *p = 0);
   static void *newArray_TFoamCell(Long_t size, void *p);
   static void delete_TFoamCell(void *p);
   static void deleteArray_TFoamCell(void *p);
   static void destruct_TFoamCell(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFoamCell*)
   {
      ::TFoamCell *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFoamCell >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFoamCell", ::TFoamCell::Class_Version(), "TFoamCell.h", 12,
                  typeid(::TFoamCell), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFoamCell::Dictionary, isa_proxy, 4,
                  sizeof(::TFoamCell) );
      instance.SetNew(&new_TFoamCell);
      instance.SetNewArray(&newArray_TFoamCell);
      instance.SetDelete(&delete_TFoamCell);
      instance.SetDeleteArray(&deleteArray_TFoamCell);
      instance.SetDestructor(&destruct_TFoamCell);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFoamCell*)
   {
      return GenerateInitInstanceLocal((::TFoamCell*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFoamCell*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TFoamIntegrand(void *p);
   static void deleteArray_TFoamIntegrand(void *p);
   static void destruct_TFoamIntegrand(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFoamIntegrand*)
   {
      ::TFoamIntegrand *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFoamIntegrand >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFoamIntegrand", ::TFoamIntegrand::Class_Version(), "TFoamIntegrand.h", 9,
                  typeid(::TFoamIntegrand), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFoamIntegrand::Dictionary, isa_proxy, 4,
                  sizeof(::TFoamIntegrand) );
      instance.SetDelete(&delete_TFoamIntegrand);
      instance.SetDeleteArray(&deleteArray_TFoamIntegrand);
      instance.SetDestructor(&destruct_TFoamIntegrand);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFoamIntegrand*)
   {
      return GenerateInitInstanceLocal((::TFoamIntegrand*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFoamIntegrand*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TFoamMaxwt(void *p = 0);
   static void *newArray_TFoamMaxwt(Long_t size, void *p);
   static void delete_TFoamMaxwt(void *p);
   static void deleteArray_TFoamMaxwt(void *p);
   static void destruct_TFoamMaxwt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFoamMaxwt*)
   {
      ::TFoamMaxwt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFoamMaxwt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFoamMaxwt", ::TFoamMaxwt::Class_Version(), "TFoamMaxwt.h", 12,
                  typeid(::TFoamMaxwt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFoamMaxwt::Dictionary, isa_proxy, 4,
                  sizeof(::TFoamMaxwt) );
      instance.SetNew(&new_TFoamMaxwt);
      instance.SetNewArray(&newArray_TFoamMaxwt);
      instance.SetDelete(&delete_TFoamMaxwt);
      instance.SetDeleteArray(&deleteArray_TFoamMaxwt);
      instance.SetDestructor(&destruct_TFoamMaxwt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFoamMaxwt*)
   {
      return GenerateInitInstanceLocal((::TFoamMaxwt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFoamMaxwt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *TFoamSampler_Dictionary();
   static void TFoamSampler_TClassManip(TClass*);
   static void *new_TFoamSampler(void *p = 0);
   static void *newArray_TFoamSampler(Long_t size, void *p);
   static void delete_TFoamSampler(void *p);
   static void deleteArray_TFoamSampler(void *p);
   static void destruct_TFoamSampler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFoamSampler*)
   {
      ::TFoamSampler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::TFoamSampler));
      static ::ROOT::TGenericClassInfo 
         instance("TFoamSampler", "TFoamSampler.h", 39,
                  typeid(::TFoamSampler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &TFoamSampler_Dictionary, isa_proxy, 4,
                  sizeof(::TFoamSampler) );
      instance.SetNew(&new_TFoamSampler);
      instance.SetNewArray(&newArray_TFoamSampler);
      instance.SetDelete(&delete_TFoamSampler);
      instance.SetDeleteArray(&deleteArray_TFoamSampler);
      instance.SetDestructor(&destruct_TFoamSampler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFoamSampler*)
   {
      return GenerateInitInstanceLocal((::TFoamSampler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFoamSampler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *TFoamSampler_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::TFoamSampler*)0x0)->GetClass();
      TFoamSampler_TClassManip(theClass);
   return theClass;
   }

   static void TFoamSampler_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_TFoamVect(void *p = 0);
   static void *newArray_TFoamVect(Long_t size, void *p);
   static void delete_TFoamVect(void *p);
   static void deleteArray_TFoamVect(void *p);
   static void destruct_TFoamVect(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFoamVect*)
   {
      ::TFoamVect *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFoamVect >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TFoamVect", ::TFoamVect::Class_Version(), "TFoamVect.h", 10,
                  typeid(::TFoamVect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFoamVect::Dictionary, isa_proxy, 4,
                  sizeof(::TFoamVect) );
      instance.SetNew(&new_TFoamVect);
      instance.SetNewArray(&newArray_TFoamVect);
      instance.SetDelete(&delete_TFoamVect);
      instance.SetDeleteArray(&deleteArray_TFoamVect);
      instance.SetDestructor(&destruct_TFoamVect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFoamVect*)
   {
      return GenerateInitInstanceLocal((::TFoamVect*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFoamVect*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TFoam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFoam::Class_Name()
{
   return "TFoam";
}

//______________________________________________________________________________
const char *TFoam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFoam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFoam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFoam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFoam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFoam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFoam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFoam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFoamCell::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFoamCell::Class_Name()
{
   return "TFoamCell";
}

//______________________________________________________________________________
const char *TFoamCell::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFoamCell*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFoamCell::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFoamCell*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFoamCell::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFoamCell*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFoamCell::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFoamCell*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFoamIntegrand::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFoamIntegrand::Class_Name()
{
   return "TFoamIntegrand";
}

//______________________________________________________________________________
const char *TFoamIntegrand::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFoamIntegrand*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFoamIntegrand::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFoamIntegrand*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFoamIntegrand::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFoamIntegrand*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFoamIntegrand::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFoamIntegrand*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFoamMaxwt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFoamMaxwt::Class_Name()
{
   return "TFoamMaxwt";
}

//______________________________________________________________________________
const char *TFoamMaxwt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFoamMaxwt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFoamMaxwt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFoamMaxwt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFoamMaxwt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFoamMaxwt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFoamMaxwt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFoamMaxwt*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TFoamVect::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TFoamVect::Class_Name()
{
   return "TFoamVect";
}

//______________________________________________________________________________
const char *TFoamVect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFoamVect*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TFoamVect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFoamVect*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFoamVect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFoamVect*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFoamVect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFoamVect*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TFoam::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFoam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFoam::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFoam::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFoam(void *p) {
      return  p ? new(p) ::TFoam : new ::TFoam;
   }
   static void *newArray_TFoam(Long_t nElements, void *p) {
      return p ? new(p) ::TFoam[nElements] : new ::TFoam[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFoam(void *p) {
      delete ((::TFoam*)p);
   }
   static void deleteArray_TFoam(void *p) {
      delete [] ((::TFoam*)p);
   }
   static void destruct_TFoam(void *p) {
      typedef ::TFoam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFoam

//______________________________________________________________________________
void TFoamCell::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFoamCell.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFoamCell::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFoamCell::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFoamCell(void *p) {
      return  p ? new(p) ::TFoamCell : new ::TFoamCell;
   }
   static void *newArray_TFoamCell(Long_t nElements, void *p) {
      return p ? new(p) ::TFoamCell[nElements] : new ::TFoamCell[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFoamCell(void *p) {
      delete ((::TFoamCell*)p);
   }
   static void deleteArray_TFoamCell(void *p) {
      delete [] ((::TFoamCell*)p);
   }
   static void destruct_TFoamCell(void *p) {
      typedef ::TFoamCell current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFoamCell

//______________________________________________________________________________
void TFoamIntegrand::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFoamIntegrand.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFoamIntegrand::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFoamIntegrand::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TFoamIntegrand(void *p) {
      delete ((::TFoamIntegrand*)p);
   }
   static void deleteArray_TFoamIntegrand(void *p) {
      delete [] ((::TFoamIntegrand*)p);
   }
   static void destruct_TFoamIntegrand(void *p) {
      typedef ::TFoamIntegrand current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFoamIntegrand

//______________________________________________________________________________
void TFoamMaxwt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFoamMaxwt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFoamMaxwt::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFoamMaxwt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFoamMaxwt(void *p) {
      return  p ? new(p) ::TFoamMaxwt : new ::TFoamMaxwt;
   }
   static void *newArray_TFoamMaxwt(Long_t nElements, void *p) {
      return p ? new(p) ::TFoamMaxwt[nElements] : new ::TFoamMaxwt[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFoamMaxwt(void *p) {
      delete ((::TFoamMaxwt*)p);
   }
   static void deleteArray_TFoamMaxwt(void *p) {
      delete [] ((::TFoamMaxwt*)p);
   }
   static void destruct_TFoamMaxwt(void *p) {
      typedef ::TFoamMaxwt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFoamMaxwt

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFoamSampler(void *p) {
      return  p ? new(p) ::TFoamSampler : new ::TFoamSampler;
   }
   static void *newArray_TFoamSampler(Long_t nElements, void *p) {
      return p ? new(p) ::TFoamSampler[nElements] : new ::TFoamSampler[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFoamSampler(void *p) {
      delete ((::TFoamSampler*)p);
   }
   static void deleteArray_TFoamSampler(void *p) {
      delete [] ((::TFoamSampler*)p);
   }
   static void destruct_TFoamSampler(void *p) {
      typedef ::TFoamSampler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFoamSampler

//______________________________________________________________________________
void TFoamVect::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFoamVect.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TFoamVect::Class(),this);
   } else {
      R__b.WriteClassBuffer(TFoamVect::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFoamVect(void *p) {
      return  p ? new(p) ::TFoamVect : new ::TFoamVect;
   }
   static void *newArray_TFoamVect(Long_t nElements, void *p) {
      return p ? new(p) ::TFoamVect[nElements] : new ::TFoamVect[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFoamVect(void *p) {
      delete ((::TFoamVect*)p);
   }
   static void deleteArray_TFoamVect(void *p) {
      delete [] ((::TFoamVect*)p);
   }
   static void destruct_TFoamVect(void *p) {
      typedef ::TFoamVect current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TFoamVect

namespace ROOT {
   static TClass *vectorlElonggR_Dictionary();
   static void vectorlElonggR_TClassManip(TClass*);
   static void *new_vectorlElonggR(void *p = 0);
   static void *newArray_vectorlElonggR(Long_t size, void *p);
   static void delete_vectorlElonggR(void *p);
   static void deleteArray_vectorlElonggR(void *p);
   static void destruct_vectorlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<long>*)
   {
      vector<long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<long>", -2, "vector", 216,
                  typeid(vector<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<long>) );
      instance.SetNew(&new_vectorlElonggR);
      instance.SetNewArray(&newArray_vectorlElonggR);
      instance.SetDelete(&delete_vectorlElonggR);
      instance.SetDeleteArray(&deleteArray_vectorlElonggR);
      instance.SetDestructor(&destruct_vectorlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<long> >()));

      ::ROOT::AddClassAlternate("vector<long>","std::vector<long, std::allocator<long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<long>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<long>*)0x0)->GetClass();
      vectorlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<long> : new vector<long>;
   }
   static void *newArray_vectorlElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<long>[nElements] : new vector<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElonggR(void *p) {
      delete ((vector<long>*)p);
   }
   static void deleteArray_vectorlElonggR(void *p) {
      delete [] ((vector<long>*)p);
   }
   static void destruct_vectorlElonggR(void *p) {
      typedef vector<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<long>

namespace {
  void TriggerDictionaryInitialization_libFoam_Impl() {
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
      TROOT::RegisterModule("libFoam",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libFoam_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libFoam_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libFoam() {
  TriggerDictionaryInitialization_libFoam_Impl();
}
