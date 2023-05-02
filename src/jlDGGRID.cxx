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
  template<> struct IsMirroredType<MainParam> : std::false_type { };
  template<> struct IsMirroredType<DgGridPList> : std::false_type { };
}

JLCXX_MODULE define_julia_module(jlcxx::Module& types){

  DEBUG_MSG("Adding wrapper for type DgConverterBase (" __HERE__ ")");
  // defined in DGGRID/src/lib/dglib/include/dglib/DgConverterBase.h:36:7
  auto t0 = types.add_type<DgConverterBase>("DgConverterBase");

  DEBUG_MSG("Adding wrapper for type MainParam (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/dggrid.h:105:7
  auto t1 = types.add_type<MainParam>("MainParam");

  DEBUG_MSG("Adding wrapper for type DgGridPList (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/dggrid.h:363:7
  auto t2 = types.add_type<DgGridPList>("DgGridPList");
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
  /* End of global function wrappers
   **********************************************************************/

  DEBUG_MSG("End of wrapper definitions");

}
