// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ROOTDataFrame
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
#include "ROOT/RCsvDS.hxx"
#include "ROOT/RDataFrame.hxx"
#include "ROOT/RDataSource.hxx"
#include "ROOT/RDFHelpers.hxx"
#include "ROOT/RLazyDS.hxx"
#include "ROOT/RResultPtr.hxx"
#include "ROOT/RRootDS.hxx"
#include "ROOT/RSnapshotOptions.hxx"
#include "ROOT/RTrivialDS.hxx"
#include "ROOT/RDF/ActionHelpers.hxx"
#include "ROOT/RDF/GraphNode.hxx"
#include "ROOT/RDF/GraphUtils.hxx"
#include "ROOT/RDF/HistoModels.hxx"
#include "ROOT/RDF/InterfaceUtils.hxx"
#include "ROOT/RDF/NodesUtils.hxx"
#include "ROOT/RDF/RActionBase.hxx"
#include "ROOT/RDF/RAction.hxx"
#include "ROOT/RDF/RBookedCustomColumns.hxx"
#include "ROOT/RDF/RColumnValue.hxx"
#include "ROOT/RDF/RCustomColumnBase.hxx"
#include "ROOT/RDF/RCustomColumn.hxx"
#include "ROOT/RDF/RCutFlowReport.hxx"
#include "ROOT/RDF/RDisplay.hxx"
#include "ROOT/RDF/RFilterBase.hxx"
#include "ROOT/RDF/RFilter.hxx"
#include "ROOT/RDF/RInterface.hxx"
#include "ROOT/RDF/RJittedAction.hxx"
#include "ROOT/RDF/RJittedCustomColumn.hxx"
#include "ROOT/RDF/RJittedFilter.hxx"
#include "ROOT/RDF/RLazyDSImpl.hxx"
#include "ROOT/RDF/RLoopManager.hxx"
#include "ROOT/RDF/RNodeBase.hxx"
#include "ROOT/RDF/RRangeBase.hxx"
#include "ROOT/RDF/RRange.hxx"
#include "ROOT/RDF/RSlotStack.hxx"
#include "ROOT/RDF/Utils.hxx"
#include "ROOT/RDF/PyROOTHelpers.hxx"

// Header files passed via #pragma extra_include

namespace ROOT {
   namespace RDF {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLRDF_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::RDF", 0 /*version*/, "ROOT/RDataSource.hxx", 24,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLRDF_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLRDF_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   namespace Detail {
      namespace RDF {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLDetailcLcLRDF_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Detail::RDF", 0 /*version*/, "ROOT/RDF/RCutFlowReport.hxx", 23,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLDetailcLcLRDF_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLDetailcLcLRDF_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   namespace Internal {
      namespace RDF {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *ROOTcLcLInternalcLcLRDF_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("ROOT::Internal::RDF", 0 /*version*/, "ROOT/RDF/Utils.hxx", 50,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &ROOTcLcLInternalcLcLRDF_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *ROOTcLcLInternalcLcLRDF_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}
}

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLCountHelper_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLCountHelper_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::CountHelper*)
   {
      ::ROOT::Internal::RDF::CountHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::CountHelper));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::CountHelper", "ROOT/RDF/ActionHelpers.hxx", 113,
                  typeid(::ROOT::Internal::RDF::CountHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLCountHelper_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::CountHelper) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLCountHelper);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLCountHelper);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLCountHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::CountHelper*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::CountHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::CountHelper*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLCountHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::CountHelper*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLCountHelper_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLCountHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLFillHelper_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLFillHelper_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLFillHelper(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLFillHelper(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLFillHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::FillHelper*)
   {
      ::ROOT::Internal::RDF::FillHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::FillHelper));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::FillHelper", "ROOT/RDF/ActionHelpers.hxx", 160,
                  typeid(::ROOT::Internal::RDF::FillHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLFillHelper_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::FillHelper) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLFillHelper);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLFillHelper);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLFillHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::FillHelper*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::FillHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::FillHelper*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLFillHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::FillHelper*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLFillHelper_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLFillHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLMeanHelper_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLMeanHelper_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::MeanHelper*)
   {
      ::ROOT::Internal::RDF::MeanHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::MeanHelper));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::MeanHelper", "ROOT/RDF/ActionHelpers.hxx", 854,
                  typeid(::ROOT::Internal::RDF::MeanHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLMeanHelper_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::MeanHelper) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLMeanHelper);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLMeanHelper);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLMeanHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::MeanHelper*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::MeanHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::MeanHelper*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLMeanHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::MeanHelper*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLMeanHelper_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLMeanHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RBookedCustomColumns*)
   {
      ::ROOT::Internal::RDF::RBookedCustomColumns *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RBookedCustomColumns));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RBookedCustomColumns", "ROOT/RDF/RBookedCustomColumns.hxx", 39,
                  typeid(::ROOT::Internal::RDF::RBookedCustomColumns), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RBookedCustomColumns) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RBookedCustomColumns*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RBookedCustomColumns*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RBookedCustomColumns*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RBookedCustomColumns*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTH1DModel_Dictionary();
   static void ROOTcLcLRDFcLcLTH1DModel_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTH1DModel(void *p = 0);
   static void *newArray_ROOTcLcLRDFcLcLTH1DModel(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTH1DModel(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTH1DModel(void *p);
   static void destruct_ROOTcLcLRDFcLcLTH1DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TH1DModel*)
   {
      ::ROOT::RDF::TH1DModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TH1DModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TH1DModel", "ROOT/RDF/HistoModels.hxx", 27,
                  typeid(::ROOT::RDF::TH1DModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTH1DModel_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::TH1DModel) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTH1DModel);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTH1DModel);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTH1DModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTH1DModel);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTH1DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TH1DModel*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDF::TH1DModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDF::TH1DModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTH1DModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDF::TH1DModel*)0x0)->GetClass();
      ROOTcLcLRDFcLcLTH1DModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTH1DModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTH2DModel_Dictionary();
   static void ROOTcLcLRDFcLcLTH2DModel_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTH2DModel(void *p = 0);
   static void *newArray_ROOTcLcLRDFcLcLTH2DModel(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTH2DModel(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTH2DModel(void *p);
   static void destruct_ROOTcLcLRDFcLcLTH2DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TH2DModel*)
   {
      ::ROOT::RDF::TH2DModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TH2DModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TH2DModel", "ROOT/RDF/HistoModels.hxx", 45,
                  typeid(::ROOT::RDF::TH2DModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTH2DModel_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::TH2DModel) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTH2DModel);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTH2DModel);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTH2DModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTH2DModel);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTH2DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TH2DModel*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDF::TH2DModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDF::TH2DModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTH2DModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDF::TH2DModel*)0x0)->GetClass();
      ROOTcLcLRDFcLcLTH2DModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTH2DModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTH3DModel_Dictionary();
   static void ROOTcLcLRDFcLcLTH3DModel_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTH3DModel(void *p = 0);
   static void *newArray_ROOTcLcLRDFcLcLTH3DModel(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTH3DModel(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTH3DModel(void *p);
   static void destruct_ROOTcLcLRDFcLcLTH3DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TH3DModel*)
   {
      ::ROOT::RDF::TH3DModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TH3DModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TH3DModel", "ROOT/RDF/HistoModels.hxx", 70,
                  typeid(::ROOT::RDF::TH3DModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTH3DModel_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::TH3DModel) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTH3DModel);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTH3DModel);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTH3DModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTH3DModel);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTH3DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TH3DModel*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDF::TH3DModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDF::TH3DModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTH3DModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDF::TH3DModel*)0x0)->GetClass();
      ROOTcLcLRDFcLcLTH3DModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTH3DModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTProfile1DModel_Dictionary();
   static void ROOTcLcLRDFcLcLTProfile1DModel_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTProfile1DModel(void *p = 0);
   static void *newArray_ROOTcLcLRDFcLcLTProfile1DModel(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTProfile1DModel(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTProfile1DModel(void *p);
   static void destruct_ROOTcLcLRDFcLcLTProfile1DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TProfile1DModel*)
   {
      ::ROOT::RDF::TProfile1DModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TProfile1DModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TProfile1DModel", "ROOT/RDF/HistoModels.hxx", 99,
                  typeid(::ROOT::RDF::TProfile1DModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTProfile1DModel_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::TProfile1DModel) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTProfile1DModel);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTProfile1DModel);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTProfile1DModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTProfile1DModel);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTProfile1DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TProfile1DModel*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDF::TProfile1DModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDF::TProfile1DModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTProfile1DModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDF::TProfile1DModel*)0x0)->GetClass();
      ROOTcLcLRDFcLcLTProfile1DModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTProfile1DModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLTProfile2DModel_Dictionary();
   static void ROOTcLcLRDFcLcLTProfile2DModel_TClassManip(TClass*);
   static void *new_ROOTcLcLRDFcLcLTProfile2DModel(void *p = 0);
   static void *newArray_ROOTcLcLRDFcLcLTProfile2DModel(Long_t size, void *p);
   static void delete_ROOTcLcLRDFcLcLTProfile2DModel(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLTProfile2DModel(void *p);
   static void destruct_ROOTcLcLRDFcLcLTProfile2DModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::TProfile2DModel*)
   {
      ::ROOT::RDF::TProfile2DModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::TProfile2DModel));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::TProfile2DModel", "ROOT/RDF/HistoModels.hxx", 124,
                  typeid(::ROOT::RDF::TProfile2DModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLTProfile2DModel_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::TProfile2DModel) );
      instance.SetNew(&new_ROOTcLcLRDFcLcLTProfile2DModel);
      instance.SetNewArray(&newArray_ROOTcLcLRDFcLcLTProfile2DModel);
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLTProfile2DModel);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLTProfile2DModel);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLTProfile2DModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::TProfile2DModel*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDF::TProfile2DModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDF::TProfile2DModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLTProfile2DModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDF::TProfile2DModel*)0x0)->GetClass();
      ROOTcLcLRDFcLcLTProfile2DModel_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLTProfile2DModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRActionBase_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRActionBase_TClassManip(TClass*);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RActionBase*)
   {
      ::ROOT::Internal::RDF::RActionBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RActionBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RActionBase", "ROOT/RDF/RActionBase.hxx", 44,
                  typeid(::ROOT::Internal::RDF::RActionBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRActionBase_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RActionBase) );
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRActionBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRActionBase);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRActionBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RActionBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RActionBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RActionBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRActionBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RActionBase*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRActionBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRActionBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RCustomColumnBase*)
   {
      ::ROOT::Detail::RDF::RCustomColumnBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RCustomColumnBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RCustomColumnBase", "ROOT/RDF/RCustomColumnBase.hxx", 30,
                  typeid(::ROOT::Detail::RDF::RCustomColumnBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RCustomColumnBase) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RCustomColumnBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Detail::RDF::RCustomColumnBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RCustomColumnBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RCustomColumnBase*)0x0)->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<int>*)
   {
      ::ROOT::Internal::RDF::RColumnValue<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<int>", "ROOT/RDF/RColumnValue.hxx", 289,
                  typeid(::ROOT::Internal::RDF::RColumnValue<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<int>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<int>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<int>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<unsigned int>*)
   {
      ::ROOT::Internal::RDF::RColumnValue<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<unsigned int>", "ROOT/RDF/RColumnValue.hxx", 290,
                  typeid(::ROOT::Internal::RDF::RColumnValue<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<unsigned int>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<unsigned int>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<unsigned int>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<unsigned int>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<char>*)
   {
      ::ROOT::Internal::RDF::RColumnValue<char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<char>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<char>", "ROOT/RDF/RColumnValue.hxx", 291,
                  typeid(::ROOT::Internal::RDF::RColumnValue<char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<char>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<char>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<char>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<char>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<unsigned char>*)
   {
      ::ROOT::Internal::RDF::RColumnValue<unsigned char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<unsigned char>", "ROOT/RDF/RColumnValue.hxx", 292,
                  typeid(::ROOT::Internal::RDF::RColumnValue<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<unsigned char>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<unsigned char>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<unsigned char>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<unsigned char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<unsigned char>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<float>*)
   {
      ::ROOT::Internal::RDF::RColumnValue<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<float>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<float>", "ROOT/RDF/RColumnValue.hxx", 293,
                  typeid(::ROOT::Internal::RDF::RColumnValue<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<float>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<float>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<float>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<double>*)
   {
      ::ROOT::Internal::RDF::RColumnValue<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<double>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<double>", "ROOT/RDF/RColumnValue.hxx", 294,
                  typeid(::ROOT::Internal::RDF::RColumnValue<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<double>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<double>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<double>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<double>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<Long64_t>*)
   {
      ::ROOT::Internal::RDF::RColumnValue<Long64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<Long64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<Long64_t>", "ROOT/RDF/RColumnValue.hxx", 295,
                  typeid(::ROOT::Internal::RDF::RColumnValue<Long64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<Long64_t>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<Long64_t>","ROOT::Internal::RDF::RColumnValue<long long>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<Long64_t>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<Long64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<Long64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<Long64_t>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<ULong64_t>*)
   {
      ::ROOT::Internal::RDF::RColumnValue<ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<ULong64_t>", "ROOT/RDF/RColumnValue.hxx", 296,
                  typeid(::ROOT::Internal::RDF::RColumnValue<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<ULong64_t>) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<ULong64_t>","ROOT::Internal::RDF::RColumnValue<unsigned long long>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<ULong64_t>*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<ULong64_t>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<ULong64_t>*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<vector<int> >*)
   {
      ::ROOT::Internal::RDF::RColumnValue<vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<vector<int> >", "ROOT/RDF/RColumnValue.hxx", 297,
                  typeid(::ROOT::Internal::RDF::RColumnValue<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<vector<int> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<int> >","ROOT::Internal::RDF::RColumnValue<std::vector<int> >");

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<int> >","ROOT::Internal::RDF::RColumnValue<std::vector<int, std::allocator<int> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<vector<int> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<vector<int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<int> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >*)
   {
      ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >", "ROOT/RDF/RColumnValue.hxx", 298,
                  typeid(::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >","ROOT::Internal::RDF::RColumnValue<std::vector<unsigned int> >");

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >","ROOT::Internal::RDF::RColumnValue<std::vector<unsigned int, std::allocator<unsigned int> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<vector<char> >*)
   {
      ::ROOT::Internal::RDF::RColumnValue<vector<char> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<vector<char> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<vector<char> >", "ROOT/RDF/RColumnValue.hxx", 299,
                  typeid(::ROOT::Internal::RDF::RColumnValue<vector<char> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<vector<char> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<char> >","ROOT::Internal::RDF::RColumnValue<std::vector<char> >");

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<char> >","ROOT::Internal::RDF::RColumnValue<std::vector<char, std::allocator<char> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<vector<char> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<vector<char> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<char> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<char> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >*)
   {
      ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >", "ROOT/RDF/RColumnValue.hxx", 300,
                  typeid(::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >","ROOT::Internal::RDF::RColumnValue<std::vector<unsigned char> >");

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >","ROOT::Internal::RDF::RColumnValue<std::vector<unsigned char, std::allocator<unsigned char> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<vector<float> >*)
   {
      ::ROOT::Internal::RDF::RColumnValue<vector<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<vector<float> >", "ROOT/RDF/RColumnValue.hxx", 301,
                  typeid(::ROOT::Internal::RDF::RColumnValue<vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<vector<float> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<float> >","ROOT::Internal::RDF::RColumnValue<std::vector<float> >");

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<float> >","ROOT::Internal::RDF::RColumnValue<std::vector<float, std::allocator<float> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<vector<float> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<vector<float> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<float> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<vector<double> >*)
   {
      ::ROOT::Internal::RDF::RColumnValue<vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<vector<double> >", "ROOT/RDF/RColumnValue.hxx", 302,
                  typeid(::ROOT::Internal::RDF::RColumnValue<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<vector<double> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<double> >","ROOT::Internal::RDF::RColumnValue<std::vector<double> >");

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<double> >","ROOT::Internal::RDF::RColumnValue<std::vector<double, std::allocator<double> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<vector<double> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<vector<double> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<double> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >*)
   {
      ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >", "ROOT/RDF/RColumnValue.hxx", 303,
                  typeid(::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >","ROOT::Internal::RDF::RColumnValue<std::vector<Long64_t> >");

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >","ROOT::Internal::RDF::RColumnValue<std::vector<long long, std::allocator<long long> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >*)
   {
      ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >", "ROOT/RDF/RColumnValue.hxx", 304,
                  typeid(::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR);

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >","ROOT::Internal::RDF::RColumnValue<std::vector<ULong64_t> >");

      ::ROOT::AddClassAlternate("ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >","ROOT::Internal::RDF::RColumnValue<std::vector<unsigned long long, std::allocator<unsigned long long> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRLoopManager_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRLoopManager_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RLoopManager*)
   {
      ::ROOT::Detail::RDF::RLoopManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RLoopManager));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RLoopManager", "ROOT/RDF/RLoopManager.hxx", 56,
                  typeid(::ROOT::Detail::RDF::RLoopManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRLoopManager_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RLoopManager) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRLoopManager);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRLoopManager);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRLoopManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RLoopManager*)
   {
      return GenerateInitInstanceLocal((::ROOT::Detail::RDF::RLoopManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RLoopManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRLoopManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RLoopManager*)0x0)->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRLoopManager_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRLoopManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRFilterBase_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRFilterBase_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RFilterBase*)
   {
      ::ROOT::Detail::RDF::RFilterBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RFilterBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RFilterBase", "ROOT/RDF/RFilterBase.hxx", 36,
                  typeid(::ROOT::Detail::RDF::RFilterBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRFilterBase_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RFilterBase) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRFilterBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRFilterBase);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRFilterBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RFilterBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Detail::RDF::RFilterBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RFilterBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRFilterBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RFilterBase*)0x0)->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRFilterBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRFilterBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RJittedCustomColumn*)
   {
      ::ROOT::Detail::RDF::RJittedCustomColumn *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RJittedCustomColumn));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RJittedCustomColumn", "ROOT/RDF/RJittedCustomColumn.hxx", 31,
                  typeid(::ROOT::Detail::RDF::RJittedCustomColumn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RJittedCustomColumn) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RJittedCustomColumn*)
   {
      return GenerateInitInstanceLocal((::ROOT::Detail::RDF::RJittedCustomColumn*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RJittedCustomColumn*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RJittedCustomColumn*)0x0)->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RJittedFilter*)
   {
      ::ROOT::Detail::RDF::RJittedFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RJittedFilter));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RJittedFilter", "ROOT/RDF/RJittedFilter.hxx", 39,
                  typeid(::ROOT::Detail::RDF::RJittedFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RJittedFilter) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RJittedFilter*)
   {
      return GenerateInitInstanceLocal((::ROOT::Detail::RDF::RJittedFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RJittedFilter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RJittedFilter*)0x0)->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRJittedFilter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR_Dictionary();
   static void ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR_TClassManip(TClass*);
   static void delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR(void *p);
   static void destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>*)
   {
      ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>", "ROOT/RDF/RInterface.hxx", 89,
                  typeid(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>) );
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR);

      ::ROOT::AddClassAlternate("ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>","ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase>");

      ::ROOT::AddClassAlternate("ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>","ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase, void>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>*)0x0)->GetClass();
      ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR_Dictionary();
   static void ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR_TClassManip(TClass*);
   static void delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR(void *p);
   static void destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>*)
   {
      ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>", "ROOT/RDF/RInterface.hxx", 89,
                  typeid(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>) );
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR);

      ::ROOT::AddClassAlternate("ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>","ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase>");

      ::ROOT::AddClassAlternate("ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>","ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase, void>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>*)0x0)->GetClass();
      ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_Dictionary();
   static void ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_TClassManip(TClass*);
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p = 0);
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(Long_t size, void *p);
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p);
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p);
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*)
   {
      ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Internal::RDF::RIgnoreErrorLevelRAII));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Internal::RDF::RIgnoreErrorLevelRAII", "ROOT/RDF/InterfaceUtils.hxx", 85,
                  typeid(::ROOT::Internal::RDF::RIgnoreErrorLevelRAII), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Internal::RDF::RIgnoreErrorLevelRAII) );
      instance.SetNew(&new_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII);
      instance.SetNewArray(&newArray_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII);
      instance.SetDelete(&delete_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII);
      instance.SetDestructor(&destruct_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*)
   {
      return GenerateInitInstanceLocal((::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*)0x0)->GetClass();
      ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRRangeBase_Dictionary();
   static void ROOTcLcLDetailcLcLRDFcLcLRRangeBase_TClassManip(TClass*);
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p);
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p);
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::Detail::RDF::RRangeBase*)
   {
      ::ROOT::Detail::RDF::RRangeBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::Detail::RDF::RRangeBase));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::Detail::RDF::RRangeBase", "ROOT/RDF/RRangeBase.hxx", 32,
                  typeid(::ROOT::Detail::RDF::RRangeBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLDetailcLcLRDFcLcLRRangeBase_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::Detail::RDF::RRangeBase) );
      instance.SetDelete(&delete_ROOTcLcLDetailcLcLRDFcLcLRRangeBase);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLDetailcLcLRDFcLcLRRangeBase);
      instance.SetDestructor(&destruct_ROOTcLcLDetailcLcLRDFcLcLRRangeBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::Detail::RDF::RRangeBase*)
   {
      return GenerateInitInstanceLocal((::ROOT::Detail::RDF::RRangeBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RRangeBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLDetailcLcLRDFcLcLRRangeBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::Detail::RDF::RRangeBase*)0x0)->GetClass();
      ROOTcLcLDetailcLcLRDFcLcLRRangeBase_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLDetailcLcLRDFcLcLRRangeBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDataFrame_Dictionary();
   static void ROOTcLcLRDataFrame_TClassManip(TClass*);
   static void delete_ROOTcLcLRDataFrame(void *p);
   static void deleteArray_ROOTcLcLRDataFrame(void *p);
   static void destruct_ROOTcLcLRDataFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDataFrame*)
   {
      ::ROOT::RDataFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDataFrame));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDataFrame", "ROOT/RDataFrame.hxx", 42,
                  typeid(::ROOT::RDataFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDataFrame_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDataFrame) );
      instance.SetDelete(&delete_ROOTcLcLRDataFrame);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDataFrame);
      instance.SetDestructor(&destruct_ROOTcLcLRDataFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDataFrame*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDataFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDataFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDataFrame_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDataFrame*)0x0)->GetClass();
      ROOTcLcLRDataFrame_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDataFrame_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRCsvDS_Dictionary();
   static void ROOTcLcLRDFcLcLRCsvDS_TClassManip(TClass*);
   static void delete_ROOTcLcLRDFcLcLRCsvDS(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRCsvDS(void *p);
   static void destruct_ROOTcLcLRDFcLcLRCsvDS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RCsvDS*)
   {
      ::ROOT::RDF::RCsvDS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RCsvDS));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RCsvDS", "ROOT/RCsvDS.hxx", 28,
                  typeid(::ROOT::RDF::RCsvDS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRCsvDS_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::RCsvDS) );
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRCsvDS);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRCsvDS);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRCsvDS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RCsvDS*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDF::RCsvDS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDF::RCsvDS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRCsvDS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDF::RCsvDS*)0x0)->GetClass();
      ROOTcLcLRDFcLcLRCsvDS_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRCsvDS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRRootDS_Dictionary();
   static void ROOTcLcLRDFcLcLRRootDS_TClassManip(TClass*);
   static void delete_ROOTcLcLRDFcLcLRRootDS(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRRootDS(void *p);
   static void destruct_ROOTcLcLRDFcLcLRRootDS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RRootDS*)
   {
      ::ROOT::RDF::RRootDS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RRootDS));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RRootDS", "ROOT/RRootDS.hxx", 27,
                  typeid(::ROOT::RDF::RRootDS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRRootDS_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::RRootDS) );
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRRootDS);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRRootDS);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRRootDS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RRootDS*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDF::RRootDS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDF::RRootDS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRRootDS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDF::RRootDS*)0x0)->GetClass();
      ROOTcLcLRDFcLcLRRootDS_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRRootDS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ROOTcLcLRDFcLcLRTrivialDS_Dictionary();
   static void ROOTcLcLRDFcLcLRTrivialDS_TClassManip(TClass*);
   static void delete_ROOTcLcLRDFcLcLRTrivialDS(void *p);
   static void deleteArray_ROOTcLcLRDFcLcLRTrivialDS(void *p);
   static void destruct_ROOTcLcLRDFcLcLRTrivialDS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ROOT::RDF::RTrivialDS*)
   {
      ::ROOT::RDF::RTrivialDS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ROOT::RDF::RTrivialDS));
      static ::ROOT::TGenericClassInfo 
         instance("ROOT::RDF::RTrivialDS", "ROOT/RTrivialDS.hxx", 21,
                  typeid(::ROOT::RDF::RTrivialDS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ROOTcLcLRDFcLcLRTrivialDS_Dictionary, isa_proxy, 1,
                  sizeof(::ROOT::RDF::RTrivialDS) );
      instance.SetDelete(&delete_ROOTcLcLRDFcLcLRTrivialDS);
      instance.SetDeleteArray(&deleteArray_ROOTcLcLRDFcLcLRTrivialDS);
      instance.SetDestructor(&destruct_ROOTcLcLRDFcLcLRTrivialDS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ROOT::RDF::RTrivialDS*)
   {
      return GenerateInitInstanceLocal((::ROOT::RDF::RTrivialDS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ROOT::RDF::RTrivialDS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ROOTcLcLRDFcLcLRTrivialDS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ROOT::RDF::RTrivialDS*)0x0)->GetClass();
      ROOTcLcLRDFcLcLRTrivialDS_TClassManip(theClass);
   return theClass;
   }

   static void ROOTcLcLRDFcLcLRTrivialDS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p) {
      delete ((::ROOT::Internal::RDF::CountHelper*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p) {
      delete [] ((::ROOT::Internal::RDF::CountHelper*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLCountHelper(void *p) {
      typedef ::ROOT::Internal::RDF::CountHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::CountHelper

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLFillHelper(void *p) {
      delete ((::ROOT::Internal::RDF::FillHelper*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLFillHelper(void *p) {
      delete [] ((::ROOT::Internal::RDF::FillHelper*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLFillHelper(void *p) {
      typedef ::ROOT::Internal::RDF::FillHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::FillHelper

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p) {
      delete ((::ROOT::Internal::RDF::MeanHelper*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p) {
      delete [] ((::ROOT::Internal::RDF::MeanHelper*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLMeanHelper(void *p) {
      typedef ::ROOT::Internal::RDF::MeanHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::MeanHelper

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RBookedCustomColumns : new ::ROOT::Internal::RDF::RBookedCustomColumns;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RBookedCustomColumns[nElements] : new ::ROOT::Internal::RDF::RBookedCustomColumns[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns(void *p) {
      delete ((::ROOT::Internal::RDF::RBookedCustomColumns*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns(void *p) {
      delete [] ((::ROOT::Internal::RDF::RBookedCustomColumns*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRBookedCustomColumns(void *p) {
      typedef ::ROOT::Internal::RDF::RBookedCustomColumns current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RBookedCustomColumns

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTH1DModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::RDF::TH1DModel : new ::ROOT::RDF::TH1DModel;
   }
   static void *newArray_ROOTcLcLRDFcLcLTH1DModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::RDF::TH1DModel[nElements] : new ::ROOT::RDF::TH1DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTH1DModel(void *p) {
      delete ((::ROOT::RDF::TH1DModel*)p);
   }
   static void deleteArray_ROOTcLcLRDFcLcLTH1DModel(void *p) {
      delete [] ((::ROOT::RDF::TH1DModel*)p);
   }
   static void destruct_ROOTcLcLRDFcLcLTH1DModel(void *p) {
      typedef ::ROOT::RDF::TH1DModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TH1DModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTH2DModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::RDF::TH2DModel : new ::ROOT::RDF::TH2DModel;
   }
   static void *newArray_ROOTcLcLRDFcLcLTH2DModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::RDF::TH2DModel[nElements] : new ::ROOT::RDF::TH2DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTH2DModel(void *p) {
      delete ((::ROOT::RDF::TH2DModel*)p);
   }
   static void deleteArray_ROOTcLcLRDFcLcLTH2DModel(void *p) {
      delete [] ((::ROOT::RDF::TH2DModel*)p);
   }
   static void destruct_ROOTcLcLRDFcLcLTH2DModel(void *p) {
      typedef ::ROOT::RDF::TH2DModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TH2DModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTH3DModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::RDF::TH3DModel : new ::ROOT::RDF::TH3DModel;
   }
   static void *newArray_ROOTcLcLRDFcLcLTH3DModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::RDF::TH3DModel[nElements] : new ::ROOT::RDF::TH3DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTH3DModel(void *p) {
      delete ((::ROOT::RDF::TH3DModel*)p);
   }
   static void deleteArray_ROOTcLcLRDFcLcLTH3DModel(void *p) {
      delete [] ((::ROOT::RDF::TH3DModel*)p);
   }
   static void destruct_ROOTcLcLRDFcLcLTH3DModel(void *p) {
      typedef ::ROOT::RDF::TH3DModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TH3DModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTProfile1DModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::RDF::TProfile1DModel : new ::ROOT::RDF::TProfile1DModel;
   }
   static void *newArray_ROOTcLcLRDFcLcLTProfile1DModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::RDF::TProfile1DModel[nElements] : new ::ROOT::RDF::TProfile1DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTProfile1DModel(void *p) {
      delete ((::ROOT::RDF::TProfile1DModel*)p);
   }
   static void deleteArray_ROOTcLcLRDFcLcLTProfile1DModel(void *p) {
      delete [] ((::ROOT::RDF::TProfile1DModel*)p);
   }
   static void destruct_ROOTcLcLRDFcLcLTProfile1DModel(void *p) {
      typedef ::ROOT::RDF::TProfile1DModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TProfile1DModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLRDFcLcLTProfile2DModel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::RDF::TProfile2DModel : new ::ROOT::RDF::TProfile2DModel;
   }
   static void *newArray_ROOTcLcLRDFcLcLTProfile2DModel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::RDF::TProfile2DModel[nElements] : new ::ROOT::RDF::TProfile2DModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLTProfile2DModel(void *p) {
      delete ((::ROOT::RDF::TProfile2DModel*)p);
   }
   static void deleteArray_ROOTcLcLRDFcLcLTProfile2DModel(void *p) {
      delete [] ((::ROOT::RDF::TProfile2DModel*)p);
   }
   static void destruct_ROOTcLcLRDFcLcLTProfile2DModel(void *p) {
      typedef ::ROOT::RDF::TProfile2DModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::TProfile2DModel

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p) {
      delete ((::ROOT::Internal::RDF::RActionBase*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p) {
      delete [] ((::ROOT::Internal::RDF::RActionBase*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRActionBase(void *p) {
      typedef ::ROOT::Internal::RDF::RActionBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RActionBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase(void *p) {
      delete ((::ROOT::Detail::RDF::RCustomColumnBase*)p);
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase(void *p) {
      delete [] ((::ROOT::Detail::RDF::RCustomColumnBase*)p);
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRCustomColumnBase(void *p) {
      typedef ::ROOT::Detail::RDF::RCustomColumnBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RCustomColumnBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<int> : new ::ROOT::Internal::RDF::RColumnValue<int>;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<int>[nElements] : new ::ROOT::Internal::RDF::RColumnValue<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<int>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<int>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEintgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<unsigned int> : new ::ROOT::Internal::RDF::RColumnValue<unsigned int>;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<unsigned int>[nElements] : new ::ROOT::Internal::RDF::RColumnValue<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<unsigned int>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<unsigned int>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPintgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<char> : new ::ROOT::Internal::RDF::RColumnValue<char>;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<char>[nElements] : new ::ROOT::Internal::RDF::RColumnValue<char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<char>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<char>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEchargR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<char>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<unsigned char> : new ::ROOT::Internal::RDF::RColumnValue<unsigned char>;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<unsigned char>[nElements] : new ::ROOT::Internal::RDF::RColumnValue<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<unsigned char>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<unsigned char>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEunsignedsPchargR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<unsigned char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<unsigned char>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<float> : new ::ROOT::Internal::RDF::RColumnValue<float>;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<float>[nElements] : new ::ROOT::Internal::RDF::RColumnValue<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<float>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<float>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEfloatgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<double> : new ::ROOT::Internal::RDF::RColumnValue<double>;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<double>[nElements] : new ::ROOT::Internal::RDF::RColumnValue<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<double>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<double>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEdoublegR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<double>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<Long64_t> : new ::ROOT::Internal::RDF::RColumnValue<Long64_t>;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<Long64_t>[nElements] : new ::ROOT::Internal::RDF::RColumnValue<Long64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<Long64_t>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<Long64_t>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelELong64_tgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<Long64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<Long64_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<ULong64_t> : new ::ROOT::Internal::RDF::RColumnValue<ULong64_t>;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<ULong64_t>[nElements] : new ::ROOT::Internal::RDF::RColumnValue<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<ULong64_t>*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<ULong64_t>*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEULong64_tgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<ULong64_t>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<int> > : new ::ROOT::Internal::RDF::RColumnValue<vector<int> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<int> >[nElements] : new ::ROOT::Internal::RDF::RColumnValue<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<vector<int> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<vector<int> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEintgRsPgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<vector<int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> > : new ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >[nElements] : new ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPintgRsPgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<vector<unsigned int> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<char> > : new ::ROOT::Internal::RDF::RColumnValue<vector<char> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<char> >[nElements] : new ::ROOT::Internal::RDF::RColumnValue<vector<char> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<vector<char> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<vector<char> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEchargRsPgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<vector<char> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<vector<char> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> > : new ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >[nElements] : new ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEunsignedsPchargRsPgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<vector<unsigned char> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<float> > : new ::ROOT::Internal::RDF::RColumnValue<vector<float> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<float> >[nElements] : new ::ROOT::Internal::RDF::RColumnValue<vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<vector<float> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<vector<float> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEfloatgRsPgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<vector<float> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<double> > : new ::ROOT::Internal::RDF::RColumnValue<vector<double> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<double> >[nElements] : new ::ROOT::Internal::RDF::RColumnValue<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<vector<double> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<vector<double> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEdoublegRsPgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<vector<double> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> > : new ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >[nElements] : new ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlELong64_tgRsPgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<vector<Long64_t> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> > : new ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >[nElements] : new ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR(void *p) {
      delete ((::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR(void *p) {
      delete [] ((::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRColumnValuelEvectorlEULong64_tgRsPgR(void *p) {
      typedef ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RColumnValue<vector<ULong64_t> >

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p) {
      delete ((::ROOT::Detail::RDF::RLoopManager*)p);
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p) {
      delete [] ((::ROOT::Detail::RDF::RLoopManager*)p);
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRLoopManager(void *p) {
      typedef ::ROOT::Detail::RDF::RLoopManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RLoopManager

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p) {
      delete ((::ROOT::Detail::RDF::RFilterBase*)p);
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p) {
      delete [] ((::ROOT::Detail::RDF::RFilterBase*)p);
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRFilterBase(void *p) {
      typedef ::ROOT::Detail::RDF::RFilterBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RFilterBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn(void *p) {
      delete ((::ROOT::Detail::RDF::RJittedCustomColumn*)p);
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn(void *p) {
      delete [] ((::ROOT::Detail::RDF::RJittedCustomColumn*)p);
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedCustomColumn(void *p) {
      typedef ::ROOT::Detail::RDF::RJittedCustomColumn current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RJittedCustomColumn

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p) {
      delete ((::ROOT::Detail::RDF::RJittedFilter*)p);
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p) {
      delete [] ((::ROOT::Detail::RDF::RJittedFilter*)p);
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRJittedFilter(void *p) {
      typedef ::ROOT::Detail::RDF::RJittedFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RJittedFilter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR(void *p) {
      delete ((::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>*)p);
   }
   static void deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR(void *p) {
      delete [] ((::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>*)p);
   }
   static void destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRCustomColumnBasecOvoidgR(void *p) {
      typedef ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RCustomColumnBase,void>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR(void *p) {
      delete ((::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>*)p);
   }
   static void deleteArray_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR(void *p) {
      delete [] ((::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>*)p);
   }
   static void destruct_ROOTcLcLRDFcLcLRInterfacelEROOTcLcLDetailcLcLRDFcLcLRFilterBasecOvoidgR(void *p) {
      typedef ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RInterface<ROOT::Detail::RDF::RFilterBase,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII : new ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII;
   }
   static void *newArray_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII[nElements] : new ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII[nElements];
   }
   // Wrapper around operator delete
   static void delete_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p) {
      delete ((::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*)p);
   }
   static void deleteArray_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p) {
      delete [] ((::ROOT::Internal::RDF::RIgnoreErrorLevelRAII*)p);
   }
   static void destruct_ROOTcLcLInternalcLcLRDFcLcLRIgnoreErrorLevelRAII(void *p) {
      typedef ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Internal::RDF::RIgnoreErrorLevelRAII

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p) {
      delete ((::ROOT::Detail::RDF::RRangeBase*)p);
   }
   static void deleteArray_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p) {
      delete [] ((::ROOT::Detail::RDF::RRangeBase*)p);
   }
   static void destruct_ROOTcLcLDetailcLcLRDFcLcLRRangeBase(void *p) {
      typedef ::ROOT::Detail::RDF::RRangeBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::Detail::RDF::RRangeBase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDataFrame(void *p) {
      delete ((::ROOT::RDataFrame*)p);
   }
   static void deleteArray_ROOTcLcLRDataFrame(void *p) {
      delete [] ((::ROOT::RDataFrame*)p);
   }
   static void destruct_ROOTcLcLRDataFrame(void *p) {
      typedef ::ROOT::RDataFrame current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDataFrame

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRCsvDS(void *p) {
      delete ((::ROOT::RDF::RCsvDS*)p);
   }
   static void deleteArray_ROOTcLcLRDFcLcLRCsvDS(void *p) {
      delete [] ((::ROOT::RDF::RCsvDS*)p);
   }
   static void destruct_ROOTcLcLRDFcLcLRCsvDS(void *p) {
      typedef ::ROOT::RDF::RCsvDS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RCsvDS

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRRootDS(void *p) {
      delete ((::ROOT::RDF::RRootDS*)p);
   }
   static void deleteArray_ROOTcLcLRDFcLcLRRootDS(void *p) {
      delete [] ((::ROOT::RDF::RRootDS*)p);
   }
   static void destruct_ROOTcLcLRDFcLcLRRootDS(void *p) {
      typedef ::ROOT::RDF::RRootDS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RRootDS

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ROOTcLcLRDFcLcLRTrivialDS(void *p) {
      delete ((::ROOT::RDF::RTrivialDS*)p);
   }
   static void deleteArray_ROOTcLcLRDFcLcLRTrivialDS(void *p) {
      delete [] ((::ROOT::RDF::RTrivialDS*)p);
   }
   static void destruct_ROOTcLcLRDFcLcLRTrivialDS(void *p) {
      typedef ::ROOT::RDF::RTrivialDS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ROOT::RDF::RTrivialDS

namespace {
  void TriggerDictionaryInitialization_libROOTDataFrame_Impl() {
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
      TROOT::RegisterModule("libROOTDataFrame",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libROOTDataFrame_Impl, {}, classesHeaders, /*hasCxxModule*/true);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libROOTDataFrame_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libROOTDataFrame() {
  TriggerDictionaryInitialization_libROOTDataFrame_Impl();
}
