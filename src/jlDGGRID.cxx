#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "jlDGGRID.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlcxx {
  template<> struct IsMirroredType<DgConverterBase> : std::false_type { };
  template<> struct IsMirroredType<DgAssoc> : std::false_type { };
  template<> struct IsMirroredType<DgParamList> : std::false_type { };
  template<> struct IsMirroredType<DgStringParam> : std::false_type { };
  template<> struct IsMirroredType<DgBoolParam> : std::false_type { };
  template<> struct IsMirroredType<DgIntParam> : std::false_type { };
  template<> struct IsMirroredType<DgLIntParam> : std::false_type { };
  template<> struct IsMirroredType<DgULIntParam> : std::false_type { };
  template<> struct IsMirroredType<DgUint64Param> : std::false_type { };
  template<> struct IsMirroredType<DgDoubleParam> : std::false_type { };
  template<> struct IsMirroredType<DgStringChoiceParam> : std::false_type { };
  template<> struct SuperType<DgParameter> { typedef DgAssoc type; };
}

JLCXX_MODULE define_julia_module(jlcxx::Module& types){

  DEBUG_MSG("Adding wrapper for type DgConverterBase (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgConverterBase.h:36:7
  auto t0 = types.add_type<DgConverterBase>("DgConverterBase");

  DEBUG_MSG("Adding wrapper for type DgAssoc (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:38:7
  auto t1 = types.add_type<DgAssoc>("DgAssoc");

  DEBUG_MSG("Adding wrapper for type DgParamList (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:123:7
  auto t2 = types.add_type<DgParamList>("DgParamList");

  DEBUG_MSG("Adding wrapper for type DgStringParam (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:262:7
  auto t4 = types.add_type<DgStringParam>("DgStringParam");

  DEBUG_MSG("Adding wrapper for type DgBoolParam (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:278:7
  auto t5 = types.add_type<DgBoolParam>("DgBoolParam");

  DEBUG_MSG("Adding wrapper for type DgIntParam (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:364:7
  auto t7 = types.add_type<DgIntParam>("DgIntParam");

  DEBUG_MSG("Adding wrapper for type DgLIntParam (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:406:7
  auto t8 = types.add_type<DgLIntParam>("DgLIntParam");

  DEBUG_MSG("Adding wrapper for type DgULIntParam (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:449:7
  auto t9 = types.add_type<DgULIntParam>("DgULIntParam");

  DEBUG_MSG("Adding wrapper for type DgUint64Param (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:490:7
  auto t10 = types.add_type<DgUint64Param>("DgUint64Param");

  DEBUG_MSG("Adding wrapper for type DgDoubleParam (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:530:7
  auto t11 = types.add_type<DgDoubleParam>("DgDoubleParam");

  DEBUG_MSG("Adding wrapper for type DgStringChoiceParam (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:643:7
  auto t13 = types.add_type<DgStringChoiceParam>("DgStringChoiceParam");

  /**********************************************************************/
  /* Wrappers for the methods of class DgAssoc
   */

  DEBUG_MSG("Adding wrapper for std::string DgAssoc::valToStr() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgAssoc::valToStr()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:49:22
  t1.method("valToStr", static_cast<std::string (DgAssoc::*)()  const>(&DgAssoc::valToStr));

  DEBUG_MSG("Adding wrapper for std::string DgAssoc::asString() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgAssoc::asString()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:53:14
  t1.method("asString", static_cast<std::string (DgAssoc::*)()  const>(&DgAssoc::asString));

  DEBUG_MSG("Adding wrapper for std::string DgAssoc::validationErrMsg() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgAssoc::validationErrMsg()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:60:14
  t1.method("validationErrMsg", static_cast<std::string (DgAssoc::*)()  const>(&DgAssoc::validationErrMsg));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::isApplicable() (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::isApplicable()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:65:12
  t1.method("isApplicable", static_cast<bool (DgAssoc::*)()  const>(&DgAssoc::isApplicable));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::setIsApplicable(bool) (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::setIsApplicable(bool)
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:67:12
  t1.method("setIsApplicable", static_cast<bool (DgAssoc::*)(bool) >(&DgAssoc::setIsApplicable));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::isValid() (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::isValid()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:69:12
  t1.method("isValid", static_cast<bool (DgAssoc::*)()  const>(&DgAssoc::isValid));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::setIsValid(bool) (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::setIsValid(bool)
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:71:12
  t1.method("setIsValid", static_cast<bool (DgAssoc::*)(bool) >(&DgAssoc::setIsValid));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::isDefault() (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::isDefault()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:73:12
  t1.method("isDefault", static_cast<bool (DgAssoc::*)()  const>(&DgAssoc::isDefault));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::setIsDefault(bool) (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::setIsDefault(bool)
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:75:12
  t1.method("setIsDefault", static_cast<bool (DgAssoc::*)(bool) >(&DgAssoc::setIsDefault));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::isUserSet() (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::isUserSet()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:77:12
  t1.method("isUserSet", static_cast<bool (DgAssoc::*)()  const>(&DgAssoc::isUserSet));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::setIsUserSet(bool) (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::setIsUserSet(bool)
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:79:12
  t1.method("setIsUserSet", static_cast<bool (DgAssoc::*)(bool) >(&DgAssoc::setIsUserSet));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::isUsed() (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::isUsed()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:81:12
  t1.method("isUsed", static_cast<bool (DgAssoc::*)()  const>(&DgAssoc::isUsed));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::setIsUsed(bool) (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::setIsUsed(bool)
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:83:12
  t1.method("setIsUsed", static_cast<bool (DgAssoc::*)(bool) >(&DgAssoc::setIsUsed));

  DEBUG_MSG("Adding wrapper for DgAssoc & DgAssoc::operator=(const DgAssoc &) (" __HERE__ ")");
  // signature to use in the veto list: DgAssoc & DgAssoc::operator=(const DgAssoc &)
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:87:16
  t1.method("assign", static_cast<DgAssoc & (DgAssoc::*)(const DgAssoc &) >(&DgAssoc::operator=));

  DEBUG_MSG("Adding wrapper for bool DgAssoc::validate() (" __HERE__ ")");
  // signature to use in the veto list: bool DgAssoc::validate()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:99:20
  t1.method("validate", static_cast<bool (DgAssoc::*)() >(&DgAssoc::validate));

  /* End of DgAssoc class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class DgParamList
   */


  DEBUG_MSG("Adding wrapper for void DgParamList::DgParamList() (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:127:7
  t2.constructor<>();

  DEBUG_MSG("Adding wrapper for void DgParamList::clearList() (" __HERE__ ")");
  // signature to use in the veto list: void DgParamList::clearList()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:133:12
  t2.method("clearList", static_cast<void (DgParamList::*)() >(&DgParamList::clearList));

  DEBUG_MSG("Adding wrapper for void DgParamList::insertParam(DgAssoc *) (" __HERE__ ")");
  // signature to use in the veto list: void DgParamList::insertParam(DgAssoc *)
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:141:12
  t2.method("insertParam", static_cast<void (DgParamList::*)(DgAssoc *) >(&DgParamList::insertParam));

  DEBUG_MSG("Adding parameters methods  to provide read access to the field parameters (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:131:24
  // signature to use in the veto list: DgParamList::parameters
  t2.method("parameters", [](const DgParamList& a) -> int { return a.parameters; });
  t2.method("parameters", [](DgParamList& a) -> int { return a.parameters; });
  t2.method("parameters", [](const DgParamList* a) -> int { return a->parameters; });
  t2.method("parameters", [](DgParamList* a) -> int { return a->parameters; });
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:131:24
  // signature to use in the veto list: DgParamList::parameters
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding parameters! methods to provide write access to the field parameters (" __HERE__ ")");
  t2.method("parameters!", [](DgParamList& a, int val) -> int { return a.parameters = val; });

  DEBUG_MSG("Adding parameters! methods to provide write access to the field parameters (" __HERE__ ")");
  t2.method("parameters!", [](DgParamList* a, int val) -> int { return a->parameters = val; });

  /* End of DgParamList class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class DgStringParam
   */

  DEBUG_MSG("Adding wrapper for std::string DgStringParam::valToStr() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgStringParam::valToStr()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:272:22
  t4.method("valToStr", static_cast<std::string (DgStringParam::*)()  const>(&DgStringParam::valToStr));

  /* End of DgStringParam class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class DgBoolParam
   */

  DEBUG_MSG("Adding wrapper for std::string DgBoolParam::valToStr() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgBoolParam::valToStr()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:287:22
  t5.method("valToStr", static_cast<std::string (DgBoolParam::*)()  const>(&DgBoolParam::valToStr));

  DEBUG_MSG("Adding wrapper for bool DgBoolParam::validate() (" __HERE__ ")");
  // signature to use in the veto list: bool DgBoolParam::validate()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:309:20
  t5.method("validate", static_cast<bool (DgBoolParam::*)() >(&DgBoolParam::validate));

  /* End of DgBoolParam class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class DgIntParam
   */

  DEBUG_MSG("Adding wrapper for std::string DgIntParam::valToStr() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgIntParam::valToStr()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:386:22
  t7.method("valToStr", static_cast<std::string (DgIntParam::*)()  const>(&DgIntParam::valToStr));

  DEBUG_MSG("Adding wrapper for bool DgIntParam::validate() (" __HERE__ ")");
  // signature to use in the veto list: bool DgIntParam::validate()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:392:20
  t7.method("validate", static_cast<bool (DgIntParam::*)() >(&DgIntParam::validate));

  /* End of DgIntParam class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class DgLIntParam
   */

  DEBUG_MSG("Adding wrapper for std::string DgLIntParam::valToStr() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgLIntParam::valToStr()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:430:22
  t8.method("valToStr", static_cast<std::string (DgLIntParam::*)()  const>(&DgLIntParam::valToStr));

  DEBUG_MSG("Adding wrapper for bool DgLIntParam::validate() (" __HERE__ ")");
  // signature to use in the veto list: bool DgLIntParam::validate()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:436:20
  t8.method("validate", static_cast<bool (DgLIntParam::*)() >(&DgLIntParam::validate));

  /* End of DgLIntParam class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class DgULIntParam
   */

  DEBUG_MSG("Adding wrapper for std::string DgULIntParam::valToStr() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgULIntParam::valToStr()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:473:22
  t9.method("valToStr", static_cast<std::string (DgULIntParam::*)()  const>(&DgULIntParam::valToStr));

  DEBUG_MSG("Adding wrapper for bool DgULIntParam::validate() (" __HERE__ ")");
  // signature to use in the veto list: bool DgULIntParam::validate()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:477:20
  t9.method("validate", static_cast<bool (DgULIntParam::*)() >(&DgULIntParam::validate));

  /* End of DgULIntParam class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class DgUint64Param
   */

  DEBUG_MSG("Adding wrapper for std::string DgUint64Param::valToStr() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgUint64Param::valToStr()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:513:22
  t10.method("valToStr", static_cast<std::string (DgUint64Param::*)()  const>(&DgUint64Param::valToStr));

  DEBUG_MSG("Adding wrapper for bool DgUint64Param::validate() (" __HERE__ ")");
  // signature to use in the veto list: bool DgUint64Param::validate()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:517:20
  t10.method("validate", static_cast<bool (DgUint64Param::*)() >(&DgUint64Param::validate));

  /* End of DgUint64Param class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class DgDoubleParam
   */

  DEBUG_MSG("Adding wrapper for std::string DgDoubleParam::valToStr() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgDoubleParam::valToStr()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:552:22
  t11.method("valToStr", static_cast<std::string (DgDoubleParam::*)()  const>(&DgDoubleParam::valToStr));

  DEBUG_MSG("Adding wrapper for bool DgDoubleParam::validate() (" __HERE__ ")");
  // signature to use in the veto list: bool DgDoubleParam::validate()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:556:20
  t11.method("validate", static_cast<bool (DgDoubleParam::*)() >(&DgDoubleParam::validate));

  /* End of DgDoubleParam class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class DgStringChoiceParam
   */

  DEBUG_MSG("Adding wrapper for std::string DgStringChoiceParam::valToStr() (" __HERE__ ")");
  // signature to use in the veto list: std::string DgStringChoiceParam::valToStr()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:675:22
  t13.method("valToStr", static_cast<std::string (DgStringChoiceParam::*)()  const>(&DgStringChoiceParam::valToStr));

  DEBUG_MSG("Adding wrapper for bool DgStringChoiceParam::validate() (" __HERE__ ")");
  // signature to use in the veto list: bool DgStringChoiceParam::validate()
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:678:20
  t13.method("validate", static_cast<bool (DgStringChoiceParam::*)() >(&DgStringChoiceParam::validate));

  /* End of DgStringChoiceParam class method wrappers
   **********************************************************************/

  DEBUG_MSG("End of wrapper definitions");

}
