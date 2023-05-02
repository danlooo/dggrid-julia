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
  template<> struct IsMirroredType<DgParamList> : std::false_type { };
  template<> struct IsMirroredType<MainParam> : std::false_type { };
  template<> struct IsMirroredType<DgGridPList> : std::false_type { };
  template<> struct IsMirroredType<TransformParam> : std::false_type { };
  template<> struct IsMirroredType<DgAssoc> : std::false_type { };
  template<> struct SuperType<DgGridPList> { typedef DgParamList type; };
  template<> struct SuperType<TransformParam> { typedef MainParam type; };
}

JLCXX_MODULE define_julia_module(jlcxx::Module& types){

  DEBUG_MSG("Adding wrapper for type DgConverterBase (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgConverterBase.h:36:7
  auto t0 = types.add_type<DgConverterBase>("DgConverterBase");

  DEBUG_MSG("Adding wrapper for type DgParamList (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:123:7
  auto t1 = types.add_type<DgParamList>("DgParamList");

  DEBUG_MSG("Adding wrapper for type MainParam (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/dggrid.h:105:7
  auto t2 = types.add_type<MainParam>("MainParam");

  DEBUG_MSG("Adding wrapper for type DgGridPList (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/dggrid.h:363:7
  auto t3 = types.add_type<DgGridPList>("DgGridPList", jlcxx::julia_base_type<DgParamList>());

  DEBUG_MSG("Adding wrapper for type TransformParam (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/dggrid.h:332:7
  auto t4 = types.add_type<TransformParam>("TransformParam", jlcxx::julia_base_type<MainParam>());

  DEBUG_MSG("Adding wrapper for type DgAssoc (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgParamList.h:38:7
  auto t5 = types.add_type<DgAssoc>("DgAssoc");

  /**********************************************************************/
  /* Wrappers for the methods of class DgParamList
   */

  DEBUG_MSG("Adding wrapper for void DgParamList::clearList() (" __HERE__ ")");
  // signature to use in the veto list: void DgParamList::clearList()
  // defined in DGGRID/src/lib/dglib/lib/DgParamList.cpp:48:14
  t1.method("clearList", static_cast<void (DgParamList::*)() >(&DgParamList::clearList));

  DEBUG_MSG("Adding wrapper for void DgParamList::insertParam(DgAssoc *) (" __HERE__ ")");
  // signature to use in the veto list: void DgParamList::insertParam(DgAssoc *)
  // defined in DGGRID/src/lib/dglib/lib/DgParamList.cpp:158:14
  t1.method("insertParam", static_cast<void (DgParamList::*)(DgAssoc *) >(&DgParamList::insertParam));

  /* End of DgParamList class method wrappers
   **********************************************************************/

  /**********************************************************************
   * Wrappers for global functions and variables including
   * class static members
   */

  DEBUG_MSG("Adding wrapper for void orientGrid(MainParam &, DgGridPList &) (" __HERE__ ")");
  // signature to use in the veto list: void orientGrid(MainParam &, DgGridPList &)
  // defined in DGGRID/src/apps/dggrid/dggrid.cpp:36:6
  types.method("orientGrid", static_cast<void (*)(MainParam &, DgGridPList &) >(&orientGrid));

  DEBUG_MSG("Adding wrapper for int main(int, char *[]) (" __HERE__ ")");
  // signature to use in the veto list: int main(int, char *[])
  // defined in DGGRID/src/apps/dggrid/dggrid.cpp:99:5
  types.method("main", static_cast<int (*)(int, char *[]) >(&main));

  DEBUG_MSG("Adding wrapper for void doTransform(TransformParam &) (" __HERE__ ")");
  // signature to use in the veto list: void doTransform(TransformParam &)
  // defined in DGGRID/src/apps/dggrid/transform.cpp:131:6
  types.method("doTransform", static_cast<void (*)(TransformParam &) >(&doTransform));

  DEBUG_MSG("Adding wrapper for void doTransforms(TransformParam &, DgGridPList &) (" __HERE__ ")");
  // signature to use in the veto list: void doTransforms(TransformParam &, DgGridPList &)
  // defined in DGGRID/src/apps/dggrid/transform.cpp:294:6
  types.method("doTransforms", static_cast<void (*)(TransformParam &, DgGridPList &) >(&doTransforms));
  /* End of global function wrappers
   **********************************************************************/

  DEBUG_MSG("End of wrapper definitions");

}
