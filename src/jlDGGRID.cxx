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
  template<> struct IsMirroredType<MainParam> : std::false_type { };
  template<> struct IsMirroredType<DgGridPList> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::TEdge> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::IntPoint> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::IntersectNode> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::LocalMinimum> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::OutRec> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::PolyNode> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::OutPt> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::Join> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::LocMinSorter> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::Int128> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::IntRect> : std::false_type { };
  template<> struct IsMirroredType<ClipperLib::PolyTree> : std::false_type { };
  template<> struct IsMirroredType<Val> : std::false_type { };
  template<> struct IsMirroredType<BinValsParam> : std::false_type { };
  template<> struct IsMirroredType<QuadVals> : std::false_type { };
  template<> struct IsMirroredType<ValStat> : std::false_type { };
  template<> struct SuperType<ClipperLib::PolyTree> { typedef ClipperLib::PolyNode type; };
  template<> struct SuperType<BinValsParam> { typedef MainParam type; };
}

JLCXX_MODULE define_julia_module(jlcxx::Module& types){

  DEBUG_MSG("Adding wrapper for enum ClipperLib::Direction (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:57:6
  types.add_bits<ClipperLib::Direction>("ClipperLib!Direction", jlcxx::julia_type("CppEnum"));
  types.set_const("ClipperLib!dRightToLeft", ClipperLib::dRightToLeft);
  types.set_const("ClipperLib!dLeftToRight", ClipperLib::dLeftToRight);

  DEBUG_MSG("Adding wrapper for enum ClipperLib::PolyType (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.hpp:65:6
  types.add_bits<ClipperLib::PolyType>("ClipperLib!PolyType", jlcxx::julia_type("CppEnum"));
  types.set_const("ClipperLib!ptSubject", ClipperLib::ptSubject);
  types.set_const("ClipperLib!ptClip", ClipperLib::ptClip);

  DEBUG_MSG("Adding wrapper for enum ClipperLib::EdgeSide (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.hpp:200:6
  types.add_bits<ClipperLib::EdgeSide>("ClipperLib!EdgeSide", jlcxx::julia_type("CppEnum"));
  types.set_const("ClipperLib!esLeft", ClipperLib::esLeft);
  types.set_const("ClipperLib!esRight", ClipperLib::esRight);

  DEBUG_MSG("Adding wrapper for type MainParam (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/dggrid.h:106:7
  auto t0 = types.add_type<MainParam>("MainParam");

  DEBUG_MSG("Adding wrapper for type DgGridPList (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/dggrid.h:363:7
  auto t1 = types.add_type<DgGridPList>("DgGridPList");

  DEBUG_MSG("Adding wrapper for type ClipperLib::TEdge (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:66:8
  auto t3 = types.add_type<ClipperLib::TEdge>("ClipperLib!TEdge");

  DEBUG_MSG("Adding wrapper for type ClipperLib::IntPoint (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.hpp:85:8
  auto t4 = types.add_type<ClipperLib::IntPoint>("ClipperLib!IntPoint");

  DEBUG_MSG("Adding wrapper for type ClipperLib::IntersectNode (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:86:8
  auto t7 = types.add_type<ClipperLib::IntersectNode>("ClipperLib!IntersectNode");

  DEBUG_MSG("Adding wrapper for type ClipperLib::LocalMinimum (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:92:8
  auto t8 = types.add_type<ClipperLib::LocalMinimum>("ClipperLib!LocalMinimum");

  DEBUG_MSG("Adding wrapper for type ClipperLib::OutRec (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:102:8
  auto t9 = types.add_type<ClipperLib::OutRec>("ClipperLib!OutRec");

  DEBUG_MSG("Adding wrapper for type ClipperLib::PolyNode (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.hpp:136:7
  auto t10 = types.add_type<ClipperLib::PolyNode>("ClipperLib!PolyNode");

  DEBUG_MSG("Adding wrapper for type ClipperLib::OutPt (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:112:8
  auto t11 = types.add_type<ClipperLib::OutPt>("ClipperLib!OutPt");

  DEBUG_MSG("Adding wrapper for type ClipperLib::Join (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:119:8
  auto t12 = types.add_type<ClipperLib::Join>("ClipperLib!Join");

  DEBUG_MSG("Adding wrapper for type ClipperLib::LocMinSorter (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:125:8
  auto t13 = types.add_type<ClipperLib::LocMinSorter>("ClipperLib!LocMinSorter");

  DEBUG_MSG("Adding wrapper for type ClipperLib::Int128 (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:251:7
  auto t14 = types.add_type<ClipperLib::Int128>("ClipperLib!Int128");

  DEBUG_MSG("Adding wrapper for type ClipperLib::IntRect (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.hpp:197:8
  auto t15 = types.add_type<ClipperLib::IntRect>("ClipperLib!IntRect");

  DEBUG_MSG("Adding wrapper for type ClipperLib::PolyTree (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.hpp:160:7
  auto t16 = types.add_type<ClipperLib::PolyTree>("ClipperLib!PolyTree", jlcxx::julia_base_type<ClipperLib::PolyNode>());

  DEBUG_MSG("Adding wrapper for type Val (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:125:7
  auto t17 = types.add_type<Val>("Val");

  DEBUG_MSG("Adding wrapper for type BinValsParam (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/dggrid.h:291:7
  auto t18 = types.add_type<BinValsParam>("BinValsParam", jlcxx::julia_base_type<MainParam>());

  DEBUG_MSG("Adding wrapper for type QuadVals (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:235:7
  auto t19 = types.add_type<QuadVals>("QuadVals");

  DEBUG_MSG("Adding wrapper for type ValStat (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:502:7
  auto t20 = types.add_type<ValStat>("ValStat");

  /**********************************************************************
   * Wrappers for typedefs
   */

  /* End of typedefs wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class ClipperLib::TEdge
   */

  DEBUG_MSG("Adding Bot methods  to provide read access to the field Bot (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:67:12
  // signature to use in the veto list: ClipperLib::TEdge::Bot
  t3.method("Bot", [](const ClipperLib::TEdge& a) -> const ClipperLib::IntPoint& { return a.Bot; });
  t3.method("Bot", [](ClipperLib::TEdge& a) -> ClipperLib::IntPoint& { return a.Bot; });
  t3.method("Bot", [](const ClipperLib::TEdge* a) -> const ClipperLib::IntPoint& { return a->Bot; });
  t3.method("Bot", [](ClipperLib::TEdge* a) -> ClipperLib::IntPoint& { return a->Bot; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:67:12
  // signature to use in the veto list: ClipperLib::TEdge::Bot
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Bot! methods to provide write access to the field Bot (" __HERE__ ")");
  t3.method("Bot!", [](ClipperLib::TEdge& a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a.Bot = val; });

  DEBUG_MSG("Adding Bot! methods to provide write access to the field Bot (" __HERE__ ")");
  t3.method("Bot!", [](ClipperLib::TEdge* a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a->Bot = val; });

  DEBUG_MSG("Adding Curr methods  to provide read access to the field Curr (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:68:12
  // signature to use in the veto list: ClipperLib::TEdge::Curr
  t3.method("Curr", [](const ClipperLib::TEdge& a) -> const ClipperLib::IntPoint& { return a.Curr; });
  t3.method("Curr", [](ClipperLib::TEdge& a) -> ClipperLib::IntPoint& { return a.Curr; });
  t3.method("Curr", [](const ClipperLib::TEdge* a) -> const ClipperLib::IntPoint& { return a->Curr; });
  t3.method("Curr", [](ClipperLib::TEdge* a) -> ClipperLib::IntPoint& { return a->Curr; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:68:12
  // signature to use in the veto list: ClipperLib::TEdge::Curr
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Curr! methods to provide write access to the field Curr (" __HERE__ ")");
  t3.method("Curr!", [](ClipperLib::TEdge& a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a.Curr = val; });

  DEBUG_MSG("Adding Curr! methods to provide write access to the field Curr (" __HERE__ ")");
  t3.method("Curr!", [](ClipperLib::TEdge* a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a->Curr = val; });

  DEBUG_MSG("Adding Top methods  to provide read access to the field Top (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:69:12
  // signature to use in the veto list: ClipperLib::TEdge::Top
  t3.method("Top", [](const ClipperLib::TEdge& a) -> const ClipperLib::IntPoint& { return a.Top; });
  t3.method("Top", [](ClipperLib::TEdge& a) -> ClipperLib::IntPoint& { return a.Top; });
  t3.method("Top", [](const ClipperLib::TEdge* a) -> const ClipperLib::IntPoint& { return a->Top; });
  t3.method("Top", [](ClipperLib::TEdge* a) -> ClipperLib::IntPoint& { return a->Top; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:69:12
  // signature to use in the veto list: ClipperLib::TEdge::Top
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Top! methods to provide write access to the field Top (" __HERE__ ")");
  t3.method("Top!", [](ClipperLib::TEdge& a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a.Top = val; });

  DEBUG_MSG("Adding Top! methods to provide write access to the field Top (" __HERE__ ")");
  t3.method("Top!", [](ClipperLib::TEdge* a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a->Top = val; });

  DEBUG_MSG("Adding Dx methods  to provide read access to the field Dx (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:70:10
  // signature to use in the veto list: ClipperLib::TEdge::Dx
  t3.method("Dx", [](const ClipperLib::TEdge& a) -> double { return a.Dx; });
  t3.method("Dx", [](ClipperLib::TEdge& a) -> double { return a.Dx; });
  t3.method("Dx", [](const ClipperLib::TEdge* a) -> double { return a->Dx; });
  t3.method("Dx", [](ClipperLib::TEdge* a) -> double { return a->Dx; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:70:10
  // signature to use in the veto list: ClipperLib::TEdge::Dx
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Dx! methods to provide write access to the field Dx (" __HERE__ ")");
  t3.method("Dx!", [](ClipperLib::TEdge& a, double val) -> double { return a.Dx = val; });

  DEBUG_MSG("Adding Dx! methods to provide write access to the field Dx (" __HERE__ ")");
  t3.method("Dx!", [](ClipperLib::TEdge* a, double val) -> double { return a->Dx = val; });

  DEBUG_MSG("Adding PolyTyp methods  to provide read access to the field PolyTyp (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:71:12
  // signature to use in the veto list: ClipperLib::TEdge::PolyTyp
  t3.method("PolyTyp", [](const ClipperLib::TEdge& a) -> ClipperLib::PolyType { return a.PolyTyp; });
  t3.method("PolyTyp", [](ClipperLib::TEdge& a) -> ClipperLib::PolyType { return a.PolyTyp; });
  t3.method("PolyTyp", [](const ClipperLib::TEdge* a) -> ClipperLib::PolyType { return a->PolyTyp; });
  t3.method("PolyTyp", [](ClipperLib::TEdge* a) -> ClipperLib::PolyType { return a->PolyTyp; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:71:12
  // signature to use in the veto list: ClipperLib::TEdge::PolyTyp
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding PolyTyp! methods to provide write access to the field PolyTyp (" __HERE__ ")");
  t3.method("PolyTyp!", [](ClipperLib::TEdge& a, ClipperLib::PolyType val) -> ClipperLib::PolyType { return a.PolyTyp = val; });

  DEBUG_MSG("Adding PolyTyp! methods to provide write access to the field PolyTyp (" __HERE__ ")");
  t3.method("PolyTyp!", [](ClipperLib::TEdge* a, ClipperLib::PolyType val) -> ClipperLib::PolyType { return a->PolyTyp = val; });

  DEBUG_MSG("Adding Side methods  to provide read access to the field Side (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:72:12
  // signature to use in the veto list: ClipperLib::TEdge::Side
  t3.method("Side", [](const ClipperLib::TEdge& a) -> ClipperLib::EdgeSide { return a.Side; });
  t3.method("Side", [](ClipperLib::TEdge& a) -> ClipperLib::EdgeSide { return a.Side; });
  t3.method("Side", [](const ClipperLib::TEdge* a) -> ClipperLib::EdgeSide { return a->Side; });
  t3.method("Side", [](ClipperLib::TEdge* a) -> ClipperLib::EdgeSide { return a->Side; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:72:12
  // signature to use in the veto list: ClipperLib::TEdge::Side
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Side! methods to provide write access to the field Side (" __HERE__ ")");
  t3.method("Side!", [](ClipperLib::TEdge& a, ClipperLib::EdgeSide val) -> ClipperLib::EdgeSide { return a.Side = val; });

  DEBUG_MSG("Adding Side! methods to provide write access to the field Side (" __HERE__ ")");
  t3.method("Side!", [](ClipperLib::TEdge* a, ClipperLib::EdgeSide val) -> ClipperLib::EdgeSide { return a->Side = val; });

  DEBUG_MSG("Adding WindDelta methods  to provide read access to the field WindDelta (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:73:7
  // signature to use in the veto list: ClipperLib::TEdge::WindDelta
  t3.method("WindDelta", [](const ClipperLib::TEdge& a) -> int { return a.WindDelta; });
  t3.method("WindDelta", [](ClipperLib::TEdge& a) -> int { return a.WindDelta; });
  t3.method("WindDelta", [](const ClipperLib::TEdge* a) -> int { return a->WindDelta; });
  t3.method("WindDelta", [](ClipperLib::TEdge* a) -> int { return a->WindDelta; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:73:7
  // signature to use in the veto list: ClipperLib::TEdge::WindDelta
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding WindDelta! methods to provide write access to the field WindDelta (" __HERE__ ")");
  t3.method("WindDelta!", [](ClipperLib::TEdge& a, int val) -> int { return a.WindDelta = val; });

  DEBUG_MSG("Adding WindDelta! methods to provide write access to the field WindDelta (" __HERE__ ")");
  t3.method("WindDelta!", [](ClipperLib::TEdge* a, int val) -> int { return a->WindDelta = val; });

  DEBUG_MSG("Adding WindCnt methods  to provide read access to the field WindCnt (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:74:7
  // signature to use in the veto list: ClipperLib::TEdge::WindCnt
  t3.method("WindCnt", [](const ClipperLib::TEdge& a) -> int { return a.WindCnt; });
  t3.method("WindCnt", [](ClipperLib::TEdge& a) -> int { return a.WindCnt; });
  t3.method("WindCnt", [](const ClipperLib::TEdge* a) -> int { return a->WindCnt; });
  t3.method("WindCnt", [](ClipperLib::TEdge* a) -> int { return a->WindCnt; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:74:7
  // signature to use in the veto list: ClipperLib::TEdge::WindCnt
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding WindCnt! methods to provide write access to the field WindCnt (" __HERE__ ")");
  t3.method("WindCnt!", [](ClipperLib::TEdge& a, int val) -> int { return a.WindCnt = val; });

  DEBUG_MSG("Adding WindCnt! methods to provide write access to the field WindCnt (" __HERE__ ")");
  t3.method("WindCnt!", [](ClipperLib::TEdge* a, int val) -> int { return a->WindCnt = val; });

  DEBUG_MSG("Adding WindCnt2 methods  to provide read access to the field WindCnt2 (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:75:7
  // signature to use in the veto list: ClipperLib::TEdge::WindCnt2
  t3.method("WindCnt2", [](const ClipperLib::TEdge& a) -> int { return a.WindCnt2; });
  t3.method("WindCnt2", [](ClipperLib::TEdge& a) -> int { return a.WindCnt2; });
  t3.method("WindCnt2", [](const ClipperLib::TEdge* a) -> int { return a->WindCnt2; });
  t3.method("WindCnt2", [](ClipperLib::TEdge* a) -> int { return a->WindCnt2; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:75:7
  // signature to use in the veto list: ClipperLib::TEdge::WindCnt2
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding WindCnt2! methods to provide write access to the field WindCnt2 (" __HERE__ ")");
  t3.method("WindCnt2!", [](ClipperLib::TEdge& a, int val) -> int { return a.WindCnt2 = val; });

  DEBUG_MSG("Adding WindCnt2! methods to provide write access to the field WindCnt2 (" __HERE__ ")");
  t3.method("WindCnt2!", [](ClipperLib::TEdge* a, int val) -> int { return a->WindCnt2 = val; });

  DEBUG_MSG("Adding OutIdx methods  to provide read access to the field OutIdx (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:76:7
  // signature to use in the veto list: ClipperLib::TEdge::OutIdx
  t3.method("OutIdx", [](const ClipperLib::TEdge& a) -> int { return a.OutIdx; });
  t3.method("OutIdx", [](ClipperLib::TEdge& a) -> int { return a.OutIdx; });
  t3.method("OutIdx", [](const ClipperLib::TEdge* a) -> int { return a->OutIdx; });
  t3.method("OutIdx", [](ClipperLib::TEdge* a) -> int { return a->OutIdx; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:76:7
  // signature to use in the veto list: ClipperLib::TEdge::OutIdx
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding OutIdx! methods to provide write access to the field OutIdx (" __HERE__ ")");
  t3.method("OutIdx!", [](ClipperLib::TEdge& a, int val) -> int { return a.OutIdx = val; });

  DEBUG_MSG("Adding OutIdx! methods to provide write access to the field OutIdx (" __HERE__ ")");
  t3.method("OutIdx!", [](ClipperLib::TEdge* a, int val) -> int { return a->OutIdx = val; });

  DEBUG_MSG("Adding Next methods  to provide read access to the field Next (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:77:10
  // signature to use in the veto list: ClipperLib::TEdge::Next
  t3.method("Next", [](const ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.Next; });
  t3.method("Next", [](ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.Next; });
  t3.method("Next", [](const ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->Next; });
  t3.method("Next", [](ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->Next; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:77:10
  // signature to use in the veto list: ClipperLib::TEdge::Next
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Next! methods to provide write access to the field Next (" __HERE__ ")");
  t3.method("Next!", [](ClipperLib::TEdge& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.Next = val; });

  DEBUG_MSG("Adding Next! methods to provide write access to the field Next (" __HERE__ ")");
  t3.method("Next!", [](ClipperLib::TEdge* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->Next = val; });

  DEBUG_MSG("Adding Prev methods  to provide read access to the field Prev (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:78:10
  // signature to use in the veto list: ClipperLib::TEdge::Prev
  t3.method("Prev", [](const ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.Prev; });
  t3.method("Prev", [](ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.Prev; });
  t3.method("Prev", [](const ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->Prev; });
  t3.method("Prev", [](ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->Prev; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:78:10
  // signature to use in the veto list: ClipperLib::TEdge::Prev
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Prev! methods to provide write access to the field Prev (" __HERE__ ")");
  t3.method("Prev!", [](ClipperLib::TEdge& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.Prev = val; });

  DEBUG_MSG("Adding Prev! methods to provide write access to the field Prev (" __HERE__ ")");
  t3.method("Prev!", [](ClipperLib::TEdge* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->Prev = val; });

  DEBUG_MSG("Adding NextInLML methods  to provide read access to the field NextInLML (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:79:10
  // signature to use in the veto list: ClipperLib::TEdge::NextInLML
  t3.method("NextInLML", [](const ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.NextInLML; });
  t3.method("NextInLML", [](ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.NextInLML; });
  t3.method("NextInLML", [](const ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->NextInLML; });
  t3.method("NextInLML", [](ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->NextInLML; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:79:10
  // signature to use in the veto list: ClipperLib::TEdge::NextInLML
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding NextInLML! methods to provide write access to the field NextInLML (" __HERE__ ")");
  t3.method("NextInLML!", [](ClipperLib::TEdge& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.NextInLML = val; });

  DEBUG_MSG("Adding NextInLML! methods to provide write access to the field NextInLML (" __HERE__ ")");
  t3.method("NextInLML!", [](ClipperLib::TEdge* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->NextInLML = val; });

  DEBUG_MSG("Adding NextInAEL methods  to provide read access to the field NextInAEL (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:80:10
  // signature to use in the veto list: ClipperLib::TEdge::NextInAEL
  t3.method("NextInAEL", [](const ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.NextInAEL; });
  t3.method("NextInAEL", [](ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.NextInAEL; });
  t3.method("NextInAEL", [](const ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->NextInAEL; });
  t3.method("NextInAEL", [](ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->NextInAEL; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:80:10
  // signature to use in the veto list: ClipperLib::TEdge::NextInAEL
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding NextInAEL! methods to provide write access to the field NextInAEL (" __HERE__ ")");
  t3.method("NextInAEL!", [](ClipperLib::TEdge& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.NextInAEL = val; });

  DEBUG_MSG("Adding NextInAEL! methods to provide write access to the field NextInAEL (" __HERE__ ")");
  t3.method("NextInAEL!", [](ClipperLib::TEdge* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->NextInAEL = val; });

  DEBUG_MSG("Adding PrevInAEL methods  to provide read access to the field PrevInAEL (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:81:10
  // signature to use in the veto list: ClipperLib::TEdge::PrevInAEL
  t3.method("PrevInAEL", [](const ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.PrevInAEL; });
  t3.method("PrevInAEL", [](ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.PrevInAEL; });
  t3.method("PrevInAEL", [](const ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->PrevInAEL; });
  t3.method("PrevInAEL", [](ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->PrevInAEL; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:81:10
  // signature to use in the veto list: ClipperLib::TEdge::PrevInAEL
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding PrevInAEL! methods to provide write access to the field PrevInAEL (" __HERE__ ")");
  t3.method("PrevInAEL!", [](ClipperLib::TEdge& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.PrevInAEL = val; });

  DEBUG_MSG("Adding PrevInAEL! methods to provide write access to the field PrevInAEL (" __HERE__ ")");
  t3.method("PrevInAEL!", [](ClipperLib::TEdge* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->PrevInAEL = val; });

  DEBUG_MSG("Adding NextInSEL methods  to provide read access to the field NextInSEL (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:82:10
  // signature to use in the veto list: ClipperLib::TEdge::NextInSEL
  t3.method("NextInSEL", [](const ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.NextInSEL; });
  t3.method("NextInSEL", [](ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.NextInSEL; });
  t3.method("NextInSEL", [](const ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->NextInSEL; });
  t3.method("NextInSEL", [](ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->NextInSEL; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:82:10
  // signature to use in the veto list: ClipperLib::TEdge::NextInSEL
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding NextInSEL! methods to provide write access to the field NextInSEL (" __HERE__ ")");
  t3.method("NextInSEL!", [](ClipperLib::TEdge& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.NextInSEL = val; });

  DEBUG_MSG("Adding NextInSEL! methods to provide write access to the field NextInSEL (" __HERE__ ")");
  t3.method("NextInSEL!", [](ClipperLib::TEdge* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->NextInSEL = val; });

  DEBUG_MSG("Adding PrevInSEL methods  to provide read access to the field PrevInSEL (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:83:10
  // signature to use in the veto list: ClipperLib::TEdge::PrevInSEL
  t3.method("PrevInSEL", [](const ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.PrevInSEL; });
  t3.method("PrevInSEL", [](ClipperLib::TEdge& a) -> ClipperLib::TEdge * { return a.PrevInSEL; });
  t3.method("PrevInSEL", [](const ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->PrevInSEL; });
  t3.method("PrevInSEL", [](ClipperLib::TEdge* a) -> ClipperLib::TEdge * { return a->PrevInSEL; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:83:10
  // signature to use in the veto list: ClipperLib::TEdge::PrevInSEL
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding PrevInSEL! methods to provide write access to the field PrevInSEL (" __HERE__ ")");
  t3.method("PrevInSEL!", [](ClipperLib::TEdge& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.PrevInSEL = val; });

  DEBUG_MSG("Adding PrevInSEL! methods to provide write access to the field PrevInSEL (" __HERE__ ")");
  t3.method("PrevInSEL!", [](ClipperLib::TEdge* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->PrevInSEL = val; });

  /* End of ClipperLib::TEdge class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class ClipperLib::IntersectNode
   */

  DEBUG_MSG("Adding Edge1 methods  to provide read access to the field Edge1 (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:87:19
  // signature to use in the veto list: ClipperLib::IntersectNode::Edge1
  t7.method("Edge1", [](const ClipperLib::IntersectNode& a) -> ClipperLib::TEdge * { return a.Edge1; });
  t7.method("Edge1", [](ClipperLib::IntersectNode& a) -> ClipperLib::TEdge * { return a.Edge1; });
  t7.method("Edge1", [](const ClipperLib::IntersectNode* a) -> ClipperLib::TEdge * { return a->Edge1; });
  t7.method("Edge1", [](ClipperLib::IntersectNode* a) -> ClipperLib::TEdge * { return a->Edge1; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:87:19
  // signature to use in the veto list: ClipperLib::IntersectNode::Edge1
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Edge1! methods to provide write access to the field Edge1 (" __HERE__ ")");
  t7.method("Edge1!", [](ClipperLib::IntersectNode& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.Edge1 = val; });

  DEBUG_MSG("Adding Edge1! methods to provide write access to the field Edge1 (" __HERE__ ")");
  t7.method("Edge1!", [](ClipperLib::IntersectNode* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->Edge1 = val; });

  DEBUG_MSG("Adding Edge2 methods  to provide read access to the field Edge2 (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:88:19
  // signature to use in the veto list: ClipperLib::IntersectNode::Edge2
  t7.method("Edge2", [](const ClipperLib::IntersectNode& a) -> ClipperLib::TEdge * { return a.Edge2; });
  t7.method("Edge2", [](ClipperLib::IntersectNode& a) -> ClipperLib::TEdge * { return a.Edge2; });
  t7.method("Edge2", [](const ClipperLib::IntersectNode* a) -> ClipperLib::TEdge * { return a->Edge2; });
  t7.method("Edge2", [](ClipperLib::IntersectNode* a) -> ClipperLib::TEdge * { return a->Edge2; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:88:19
  // signature to use in the veto list: ClipperLib::IntersectNode::Edge2
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Edge2! methods to provide write access to the field Edge2 (" __HERE__ ")");
  t7.method("Edge2!", [](ClipperLib::IntersectNode& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.Edge2 = val; });

  DEBUG_MSG("Adding Edge2! methods to provide write access to the field Edge2 (" __HERE__ ")");
  t7.method("Edge2!", [](ClipperLib::IntersectNode* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->Edge2 = val; });

  DEBUG_MSG("Adding Pt methods  to provide read access to the field Pt (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:89:19
  // signature to use in the veto list: ClipperLib::IntersectNode::Pt
  t7.method("Pt", [](const ClipperLib::IntersectNode& a) -> const ClipperLib::IntPoint& { return a.Pt; });
  t7.method("Pt", [](ClipperLib::IntersectNode& a) -> ClipperLib::IntPoint& { return a.Pt; });
  t7.method("Pt", [](const ClipperLib::IntersectNode* a) -> const ClipperLib::IntPoint& { return a->Pt; });
  t7.method("Pt", [](ClipperLib::IntersectNode* a) -> ClipperLib::IntPoint& { return a->Pt; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:89:19
  // signature to use in the veto list: ClipperLib::IntersectNode::Pt
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Pt! methods to provide write access to the field Pt (" __HERE__ ")");
  t7.method("Pt!", [](ClipperLib::IntersectNode& a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a.Pt = val; });

  DEBUG_MSG("Adding Pt! methods to provide write access to the field Pt (" __HERE__ ")");
  t7.method("Pt!", [](ClipperLib::IntersectNode* a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a->Pt = val; });

  /* End of ClipperLib::IntersectNode class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class ClipperLib::LocalMinimum
   */

  DEBUG_MSG("Adding Y methods  to provide read access to the field Y (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:93:17
  // signature to use in the veto list: ClipperLib::LocalMinimum::Y
  t8.method("Y", [](const ClipperLib::LocalMinimum& a) -> ClipperLib::cInt { return a.Y; });
  t8.method("Y", [](ClipperLib::LocalMinimum& a) -> ClipperLib::cInt { return a.Y; });
  t8.method("Y", [](const ClipperLib::LocalMinimum* a) -> ClipperLib::cInt { return a->Y; });
  t8.method("Y", [](ClipperLib::LocalMinimum* a) -> ClipperLib::cInt { return a->Y; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:93:17
  // signature to use in the veto list: ClipperLib::LocalMinimum::Y
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Y! methods to provide write access to the field Y (" __HERE__ ")");
  t8.method("Y!", [](ClipperLib::LocalMinimum& a, ClipperLib::cInt val) -> ClipperLib::cInt { return a.Y = val; });

  DEBUG_MSG("Adding Y! methods to provide write access to the field Y (" __HERE__ ")");
  t8.method("Y!", [](ClipperLib::LocalMinimum* a, ClipperLib::cInt val) -> ClipperLib::cInt { return a->Y = val; });

  DEBUG_MSG("Adding LeftBound methods  to provide read access to the field LeftBound (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:94:17
  // signature to use in the veto list: ClipperLib::LocalMinimum::LeftBound
  t8.method("LeftBound", [](const ClipperLib::LocalMinimum& a) -> ClipperLib::TEdge * { return a.LeftBound; });
  t8.method("LeftBound", [](ClipperLib::LocalMinimum& a) -> ClipperLib::TEdge * { return a.LeftBound; });
  t8.method("LeftBound", [](const ClipperLib::LocalMinimum* a) -> ClipperLib::TEdge * { return a->LeftBound; });
  t8.method("LeftBound", [](ClipperLib::LocalMinimum* a) -> ClipperLib::TEdge * { return a->LeftBound; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:94:17
  // signature to use in the veto list: ClipperLib::LocalMinimum::LeftBound
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding LeftBound! methods to provide write access to the field LeftBound (" __HERE__ ")");
  t8.method("LeftBound!", [](ClipperLib::LocalMinimum& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.LeftBound = val; });

  DEBUG_MSG("Adding LeftBound! methods to provide write access to the field LeftBound (" __HERE__ ")");
  t8.method("LeftBound!", [](ClipperLib::LocalMinimum* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->LeftBound = val; });

  DEBUG_MSG("Adding RightBound methods  to provide read access to the field RightBound (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:95:17
  // signature to use in the veto list: ClipperLib::LocalMinimum::RightBound
  t8.method("RightBound", [](const ClipperLib::LocalMinimum& a) -> ClipperLib::TEdge * { return a.RightBound; });
  t8.method("RightBound", [](ClipperLib::LocalMinimum& a) -> ClipperLib::TEdge * { return a.RightBound; });
  t8.method("RightBound", [](const ClipperLib::LocalMinimum* a) -> ClipperLib::TEdge * { return a->RightBound; });
  t8.method("RightBound", [](ClipperLib::LocalMinimum* a) -> ClipperLib::TEdge * { return a->RightBound; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:95:17
  // signature to use in the veto list: ClipperLib::LocalMinimum::RightBound
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding RightBound! methods to provide write access to the field RightBound (" __HERE__ ")");
  t8.method("RightBound!", [](ClipperLib::LocalMinimum& a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a.RightBound = val; });

  DEBUG_MSG("Adding RightBound! methods to provide write access to the field RightBound (" __HERE__ ")");
  t8.method("RightBound!", [](ClipperLib::LocalMinimum* a, ClipperLib::TEdge * val) -> ClipperLib::TEdge * { return a->RightBound = val; });

  /* End of ClipperLib::LocalMinimum class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class ClipperLib::OutRec
   */

  DEBUG_MSG("Adding Idx methods  to provide read access to the field Idx (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:103:13
  // signature to use in the veto list: ClipperLib::OutRec::Idx
  t9.method("Idx", [](const ClipperLib::OutRec& a) -> int { return a.Idx; });
  t9.method("Idx", [](ClipperLib::OutRec& a) -> int { return a.Idx; });
  t9.method("Idx", [](const ClipperLib::OutRec* a) -> int { return a->Idx; });
  t9.method("Idx", [](ClipperLib::OutRec* a) -> int { return a->Idx; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:103:13
  // signature to use in the veto list: ClipperLib::OutRec::Idx
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Idx! methods to provide write access to the field Idx (" __HERE__ ")");
  t9.method("Idx!", [](ClipperLib::OutRec& a, int val) -> int { return a.Idx = val; });

  DEBUG_MSG("Adding Idx! methods to provide write access to the field Idx (" __HERE__ ")");
  t9.method("Idx!", [](ClipperLib::OutRec* a, int val) -> int { return a->Idx = val; });

  DEBUG_MSG("Adding IsHole methods  to provide read access to the field IsHole (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:104:13
  // signature to use in the veto list: ClipperLib::OutRec::IsHole
  t9.method("IsHole", [](const ClipperLib::OutRec& a) -> bool { return a.IsHole; });
  t9.method("IsHole", [](ClipperLib::OutRec& a) -> bool { return a.IsHole; });
  t9.method("IsHole", [](const ClipperLib::OutRec* a) -> bool { return a->IsHole; });
  t9.method("IsHole", [](ClipperLib::OutRec* a) -> bool { return a->IsHole; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:104:13
  // signature to use in the veto list: ClipperLib::OutRec::IsHole
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding IsHole! methods to provide write access to the field IsHole (" __HERE__ ")");
  t9.method("IsHole!", [](ClipperLib::OutRec& a, bool val) -> bool { return a.IsHole = val; });

  DEBUG_MSG("Adding IsHole! methods to provide write access to the field IsHole (" __HERE__ ")");
  t9.method("IsHole!", [](ClipperLib::OutRec* a, bool val) -> bool { return a->IsHole = val; });

  DEBUG_MSG("Adding IsOpen methods  to provide read access to the field IsOpen (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:105:13
  // signature to use in the veto list: ClipperLib::OutRec::IsOpen
  t9.method("IsOpen", [](const ClipperLib::OutRec& a) -> bool { return a.IsOpen; });
  t9.method("IsOpen", [](ClipperLib::OutRec& a) -> bool { return a.IsOpen; });
  t9.method("IsOpen", [](const ClipperLib::OutRec* a) -> bool { return a->IsOpen; });
  t9.method("IsOpen", [](ClipperLib::OutRec* a) -> bool { return a->IsOpen; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:105:13
  // signature to use in the veto list: ClipperLib::OutRec::IsOpen
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding IsOpen! methods to provide write access to the field IsOpen (" __HERE__ ")");
  t9.method("IsOpen!", [](ClipperLib::OutRec& a, bool val) -> bool { return a.IsOpen = val; });

  DEBUG_MSG("Adding IsOpen! methods to provide write access to the field IsOpen (" __HERE__ ")");
  t9.method("IsOpen!", [](ClipperLib::OutRec* a, bool val) -> bool { return a->IsOpen = val; });

  DEBUG_MSG("Adding FirstLeft methods  to provide read access to the field FirstLeft (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:106:13
  // signature to use in the veto list: ClipperLib::OutRec::FirstLeft
  t9.method("FirstLeft", [](const ClipperLib::OutRec& a) -> ClipperLib::OutRec * { return a.FirstLeft; });
  t9.method("FirstLeft", [](ClipperLib::OutRec& a) -> ClipperLib::OutRec * { return a.FirstLeft; });
  t9.method("FirstLeft", [](const ClipperLib::OutRec* a) -> ClipperLib::OutRec * { return a->FirstLeft; });
  t9.method("FirstLeft", [](ClipperLib::OutRec* a) -> ClipperLib::OutRec * { return a->FirstLeft; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:106:13
  // signature to use in the veto list: ClipperLib::OutRec::FirstLeft
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding FirstLeft! methods to provide write access to the field FirstLeft (" __HERE__ ")");
  t9.method("FirstLeft!", [](ClipperLib::OutRec& a, ClipperLib::OutRec * val) -> ClipperLib::OutRec * { return a.FirstLeft = val; });

  DEBUG_MSG("Adding FirstLeft! methods to provide write access to the field FirstLeft (" __HERE__ ")");
  t9.method("FirstLeft!", [](ClipperLib::OutRec* a, ClipperLib::OutRec * val) -> ClipperLib::OutRec * { return a->FirstLeft = val; });

  DEBUG_MSG("Adding PolyNd methods  to provide read access to the field PolyNd (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:107:13
  // signature to use in the veto list: ClipperLib::OutRec::PolyNd
  t9.method("PolyNd", [](const ClipperLib::OutRec& a) -> ClipperLib::PolyNode * { return a.PolyNd; });
  t9.method("PolyNd", [](ClipperLib::OutRec& a) -> ClipperLib::PolyNode * { return a.PolyNd; });
  t9.method("PolyNd", [](const ClipperLib::OutRec* a) -> ClipperLib::PolyNode * { return a->PolyNd; });
  t9.method("PolyNd", [](ClipperLib::OutRec* a) -> ClipperLib::PolyNode * { return a->PolyNd; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:107:13
  // signature to use in the veto list: ClipperLib::OutRec::PolyNd
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding PolyNd! methods to provide write access to the field PolyNd (" __HERE__ ")");
  t9.method("PolyNd!", [](ClipperLib::OutRec& a, ClipperLib::PolyNode * val) -> ClipperLib::PolyNode * { return a.PolyNd = val; });

  DEBUG_MSG("Adding PolyNd! methods to provide write access to the field PolyNd (" __HERE__ ")");
  t9.method("PolyNd!", [](ClipperLib::OutRec* a, ClipperLib::PolyNode * val) -> ClipperLib::PolyNode * { return a->PolyNd = val; });

  DEBUG_MSG("Adding BottomPt methods  to provide read access to the field BottomPt (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:109:13
  // signature to use in the veto list: ClipperLib::OutRec::BottomPt
  t9.method("BottomPt", [](const ClipperLib::OutRec& a) -> ClipperLib::OutPt * { return a.BottomPt; });
  t9.method("BottomPt", [](ClipperLib::OutRec& a) -> ClipperLib::OutPt * { return a.BottomPt; });
  t9.method("BottomPt", [](const ClipperLib::OutRec* a) -> ClipperLib::OutPt * { return a->BottomPt; });
  t9.method("BottomPt", [](ClipperLib::OutRec* a) -> ClipperLib::OutPt * { return a->BottomPt; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:109:13
  // signature to use in the veto list: ClipperLib::OutRec::BottomPt
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding BottomPt! methods to provide write access to the field BottomPt (" __HERE__ ")");
  t9.method("BottomPt!", [](ClipperLib::OutRec& a, ClipperLib::OutPt * val) -> ClipperLib::OutPt * { return a.BottomPt = val; });

  DEBUG_MSG("Adding BottomPt! methods to provide write access to the field BottomPt (" __HERE__ ")");
  t9.method("BottomPt!", [](ClipperLib::OutRec* a, ClipperLib::OutPt * val) -> ClipperLib::OutPt * { return a->BottomPt = val; });

  /* End of ClipperLib::OutRec class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class ClipperLib::PolyNode
   */


  DEBUG_MSG("Adding wrapper for void ClipperLib::PolyNode::PolyNode() (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:182:11
  t10.constructor<>();

  DEBUG_MSG("Adding wrapper for int ClipperLib::PolyNode::ChildCount() (" __HERE__ ")");
  // signature to use in the veto list: int ClipperLib::PolyNode::ChildCount()
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:187:15
  t10.method("ChildCount", static_cast<int (ClipperLib::PolyNode::*)()  const>(&ClipperLib::PolyNode::ChildCount));

  DEBUG_MSG("Adding wrapper for ClipperLib::PolyNode * ClipperLib::PolyNode::GetNext() (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::PolyNode * ClipperLib::PolyNode::GetNext()
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:202:21
  t10.method("GetNext", static_cast<ClipperLib::PolyNode * (ClipperLib::PolyNode::*)()  const>(&ClipperLib::PolyNode::GetNext));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::PolyNode::IsHole() (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::PolyNode::IsHole()
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:222:16
  t10.method("IsHole", static_cast<bool (ClipperLib::PolyNode::*)()  const>(&ClipperLib::PolyNode::IsHole));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::PolyNode::IsOpen() (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::PolyNode::IsOpen()
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:235:16
  t10.method("IsOpen", static_cast<bool (ClipperLib::PolyNode::*)()  const>(&ClipperLib::PolyNode::IsOpen));

  /* End of ClipperLib::PolyNode class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class ClipperLib::OutPt
   */

  DEBUG_MSG("Adding Idx methods  to provide read access to the field Idx (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:113:13
  // signature to use in the veto list: ClipperLib::OutPt::Idx
  t11.method("Idx", [](const ClipperLib::OutPt& a) -> int { return a.Idx; });
  t11.method("Idx", [](ClipperLib::OutPt& a) -> int { return a.Idx; });
  t11.method("Idx", [](const ClipperLib::OutPt* a) -> int { return a->Idx; });
  t11.method("Idx", [](ClipperLib::OutPt* a) -> int { return a->Idx; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:113:13
  // signature to use in the veto list: ClipperLib::OutPt::Idx
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Idx! methods to provide write access to the field Idx (" __HERE__ ")");
  t11.method("Idx!", [](ClipperLib::OutPt& a, int val) -> int { return a.Idx = val; });

  DEBUG_MSG("Adding Idx! methods to provide write access to the field Idx (" __HERE__ ")");
  t11.method("Idx!", [](ClipperLib::OutPt* a, int val) -> int { return a->Idx = val; });

  DEBUG_MSG("Adding Pt methods  to provide read access to the field Pt (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:114:13
  // signature to use in the veto list: ClipperLib::OutPt::Pt
  t11.method("Pt", [](const ClipperLib::OutPt& a) -> const ClipperLib::IntPoint& { return a.Pt; });
  t11.method("Pt", [](ClipperLib::OutPt& a) -> ClipperLib::IntPoint& { return a.Pt; });
  t11.method("Pt", [](const ClipperLib::OutPt* a) -> const ClipperLib::IntPoint& { return a->Pt; });
  t11.method("Pt", [](ClipperLib::OutPt* a) -> ClipperLib::IntPoint& { return a->Pt; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:114:13
  // signature to use in the veto list: ClipperLib::OutPt::Pt
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Pt! methods to provide write access to the field Pt (" __HERE__ ")");
  t11.method("Pt!", [](ClipperLib::OutPt& a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a.Pt = val; });

  DEBUG_MSG("Adding Pt! methods to provide write access to the field Pt (" __HERE__ ")");
  t11.method("Pt!", [](ClipperLib::OutPt* a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a->Pt = val; });

  DEBUG_MSG("Adding Next methods  to provide read access to the field Next (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:115:13
  // signature to use in the veto list: ClipperLib::OutPt::Next
  t11.method("Next", [](const ClipperLib::OutPt& a) -> ClipperLib::OutPt * { return a.Next; });
  t11.method("Next", [](ClipperLib::OutPt& a) -> ClipperLib::OutPt * { return a.Next; });
  t11.method("Next", [](const ClipperLib::OutPt* a) -> ClipperLib::OutPt * { return a->Next; });
  t11.method("Next", [](ClipperLib::OutPt* a) -> ClipperLib::OutPt * { return a->Next; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:115:13
  // signature to use in the veto list: ClipperLib::OutPt::Next
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Next! methods to provide write access to the field Next (" __HERE__ ")");
  t11.method("Next!", [](ClipperLib::OutPt& a, ClipperLib::OutPt * val) -> ClipperLib::OutPt * { return a.Next = val; });

  DEBUG_MSG("Adding Next! methods to provide write access to the field Next (" __HERE__ ")");
  t11.method("Next!", [](ClipperLib::OutPt* a, ClipperLib::OutPt * val) -> ClipperLib::OutPt * { return a->Next = val; });

  DEBUG_MSG("Adding Prev methods  to provide read access to the field Prev (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:116:13
  // signature to use in the veto list: ClipperLib::OutPt::Prev
  t11.method("Prev", [](const ClipperLib::OutPt& a) -> ClipperLib::OutPt * { return a.Prev; });
  t11.method("Prev", [](ClipperLib::OutPt& a) -> ClipperLib::OutPt * { return a.Prev; });
  t11.method("Prev", [](const ClipperLib::OutPt* a) -> ClipperLib::OutPt * { return a->Prev; });
  t11.method("Prev", [](ClipperLib::OutPt* a) -> ClipperLib::OutPt * { return a->Prev; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:116:13
  // signature to use in the veto list: ClipperLib::OutPt::Prev
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding Prev! methods to provide write access to the field Prev (" __HERE__ ")");
  t11.method("Prev!", [](ClipperLib::OutPt& a, ClipperLib::OutPt * val) -> ClipperLib::OutPt * { return a.Prev = val; });

  DEBUG_MSG("Adding Prev! methods to provide write access to the field Prev (" __HERE__ ")");
  t11.method("Prev!", [](ClipperLib::OutPt* a, ClipperLib::OutPt * val) -> ClipperLib::OutPt * { return a->Prev = val; });

  /* End of ClipperLib::OutPt class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class ClipperLib::Join
   */

  DEBUG_MSG("Adding OutPt1 methods  to provide read access to the field OutPt1 (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:120:13
  // signature to use in the veto list: ClipperLib::Join::OutPt1
  t12.method("OutPt1", [](const ClipperLib::Join& a) -> ClipperLib::OutPt * { return a.OutPt1; });
  t12.method("OutPt1", [](ClipperLib::Join& a) -> ClipperLib::OutPt * { return a.OutPt1; });
  t12.method("OutPt1", [](const ClipperLib::Join* a) -> ClipperLib::OutPt * { return a->OutPt1; });
  t12.method("OutPt1", [](ClipperLib::Join* a) -> ClipperLib::OutPt * { return a->OutPt1; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:120:13
  // signature to use in the veto list: ClipperLib::Join::OutPt1
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding OutPt1! methods to provide write access to the field OutPt1 (" __HERE__ ")");
  t12.method("OutPt1!", [](ClipperLib::Join& a, ClipperLib::OutPt * val) -> ClipperLib::OutPt * { return a.OutPt1 = val; });

  DEBUG_MSG("Adding OutPt1! methods to provide write access to the field OutPt1 (" __HERE__ ")");
  t12.method("OutPt1!", [](ClipperLib::Join* a, ClipperLib::OutPt * val) -> ClipperLib::OutPt * { return a->OutPt1 = val; });

  DEBUG_MSG("Adding OutPt2 methods  to provide read access to the field OutPt2 (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:121:13
  // signature to use in the veto list: ClipperLib::Join::OutPt2
  t12.method("OutPt2", [](const ClipperLib::Join& a) -> ClipperLib::OutPt * { return a.OutPt2; });
  t12.method("OutPt2", [](ClipperLib::Join& a) -> ClipperLib::OutPt * { return a.OutPt2; });
  t12.method("OutPt2", [](const ClipperLib::Join* a) -> ClipperLib::OutPt * { return a->OutPt2; });
  t12.method("OutPt2", [](ClipperLib::Join* a) -> ClipperLib::OutPt * { return a->OutPt2; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:121:13
  // signature to use in the veto list: ClipperLib::Join::OutPt2
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding OutPt2! methods to provide write access to the field OutPt2 (" __HERE__ ")");
  t12.method("OutPt2!", [](ClipperLib::Join& a, ClipperLib::OutPt * val) -> ClipperLib::OutPt * { return a.OutPt2 = val; });

  DEBUG_MSG("Adding OutPt2! methods to provide write access to the field OutPt2 (" __HERE__ ")");
  t12.method("OutPt2!", [](ClipperLib::Join* a, ClipperLib::OutPt * val) -> ClipperLib::OutPt * { return a->OutPt2 = val; });

  DEBUG_MSG("Adding OffPt methods  to provide read access to the field OffPt (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:122:13
  // signature to use in the veto list: ClipperLib::Join::OffPt
  t12.method("OffPt", [](const ClipperLib::Join& a) -> const ClipperLib::IntPoint& { return a.OffPt; });
  t12.method("OffPt", [](ClipperLib::Join& a) -> ClipperLib::IntPoint& { return a.OffPt; });
  t12.method("OffPt", [](const ClipperLib::Join* a) -> const ClipperLib::IntPoint& { return a->OffPt; });
  t12.method("OffPt", [](ClipperLib::Join* a) -> ClipperLib::IntPoint& { return a->OffPt; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:122:13
  // signature to use in the veto list: ClipperLib::Join::OffPt
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding OffPt! methods to provide write access to the field OffPt (" __HERE__ ")");
  t12.method("OffPt!", [](ClipperLib::Join& a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a.OffPt = val; });

  DEBUG_MSG("Adding OffPt! methods to provide write access to the field OffPt (" __HERE__ ")");
  t12.method("OffPt!", [](ClipperLib::Join* a, const ClipperLib::IntPoint& val) -> ClipperLib::IntPoint& { return a->OffPt = val; });

  /* End of ClipperLib::Join class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class ClipperLib::LocMinSorter
   */

  DEBUG_MSG("Adding wrapper for bool ClipperLib::LocMinSorter::operator()(const ClipperLib::LocalMinimum &, const ClipperLib::LocalMinimum &) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::LocMinSorter::operator()(const ClipperLib::LocalMinimum &, const ClipperLib::LocalMinimum &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:127:15
  t13.method("paren", static_cast<bool (ClipperLib::LocMinSorter::*)(const ClipperLib::LocalMinimum &, const ClipperLib::LocalMinimum &) >(&ClipperLib::LocMinSorter::operator()));

  /* End of ClipperLib::LocMinSorter class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class ClipperLib::Int128
   */


  DEBUG_MSG("Adding wrapper for void ClipperLib::Int128::Int128(ClipperLib::long64) (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:257:5
  t14.constructor<>();
  t14.constructor<ClipperLib::long64>();


  DEBUG_MSG("Adding wrapper for void ClipperLib::Int128::Int128(const ClipperLib::Int128 &) (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:264:5
  t14.constructor<const ClipperLib::Int128 &>();


  DEBUG_MSG("Adding wrapper for void ClipperLib::Int128::Int128(const ClipperLib::long64 &, const ClipperLib::ulong64 &) (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:266:5
  t14.constructor<const ClipperLib::long64 &, const ClipperLib::ulong64 &>();

  DEBUG_MSG("Adding wrapper for ClipperLib::Int128 & ClipperLib::Int128::operator=(const ClipperLib::long64 &) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::Int128 & ClipperLib::Int128::operator=(const ClipperLib::long64 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:268:13
  t14.method("assign", static_cast<ClipperLib::Int128 & (ClipperLib::Int128::*)(const ClipperLib::long64 &) >(&ClipperLib::Int128::operator=));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool ClipperLib::Int128::operator==(const ClipperLib::Int128 &) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::Int128::operator==(const ClipperLib::Int128 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:275:10
  t14.method("==", static_cast<bool (ClipperLib::Int128::*)(const ClipperLib::Int128 &)  const>(&ClipperLib::Int128::operator==));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::Int128::operator!=(const ClipperLib::Int128 &) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::Int128::operator!=(const ClipperLib::Int128 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:278:10
  t14.method("!=", static_cast<bool (ClipperLib::Int128::*)(const ClipperLib::Int128 &)  const>(&ClipperLib::Int128::operator!=));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::Int128::operator>(const ClipperLib::Int128 &) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::Int128::operator>(const ClipperLib::Int128 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:281:10
  t14.method(">", static_cast<bool (ClipperLib::Int128::*)(const ClipperLib::Int128 &)  const>(&ClipperLib::Int128::operator>));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::Int128::operator<(const ClipperLib::Int128 &) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::Int128::operator<(const ClipperLib::Int128 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:289:10
  t14.method("<", static_cast<bool (ClipperLib::Int128::*)(const ClipperLib::Int128 &)  const>(&ClipperLib::Int128::operator<));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::Int128::operator>=(const ClipperLib::Int128 &) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::Int128::operator>=(const ClipperLib::Int128 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:297:10
  t14.method(">=", static_cast<bool (ClipperLib::Int128::*)(const ClipperLib::Int128 &)  const>(&ClipperLib::Int128::operator>=));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::Int128::operator<=(const ClipperLib::Int128 &) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::Int128::operator<=(const ClipperLib::Int128 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:300:10
  t14.method("<=", static_cast<bool (ClipperLib::Int128::*)(const ClipperLib::Int128 &)  const>(&ClipperLib::Int128::operator<=));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for ClipperLib::Int128 & ClipperLib::Int128::operator+=(const ClipperLib::Int128 &) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::Int128 & ClipperLib::Int128::operator+=(const ClipperLib::Int128 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:303:13
  t14.method("add!", static_cast<ClipperLib::Int128 & (ClipperLib::Int128::*)(const ClipperLib::Int128 &) >(&ClipperLib::Int128::operator+=));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for ClipperLib::Int128 ClipperLib::Int128::operator+(const ClipperLib::Int128 &) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::Int128 ClipperLib::Int128::operator+(const ClipperLib::Int128 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:311:12
  t14.method("+", static_cast<ClipperLib::Int128 (ClipperLib::Int128::*)(const ClipperLib::Int128 &)  const>(&ClipperLib::Int128::operator+));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for ClipperLib::Int128 & ClipperLib::Int128::operator-=(const ClipperLib::Int128 &) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::Int128 & ClipperLib::Int128::operator-=(const ClipperLib::Int128 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:318:13
  t14.method("sub!", static_cast<ClipperLib::Int128 & (ClipperLib::Int128::*)(const ClipperLib::Int128 &) >(&ClipperLib::Int128::operator-=));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for ClipperLib::Int128 ClipperLib::Int128::operator-(const ClipperLib::Int128 &) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::Int128 ClipperLib::Int128::operator-(const ClipperLib::Int128 &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:324:12
  t14.method("-", static_cast<ClipperLib::Int128 (ClipperLib::Int128::*)(const ClipperLib::Int128 &)  const>(&ClipperLib::Int128::operator-));

  DEBUG_MSG("Adding wrapper for ClipperLib::Int128 ClipperLib::Int128::operator-() (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::Int128 ClipperLib::Int128::operator-()
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:331:12
  t14.method("-", static_cast<ClipperLib::Int128 (ClipperLib::Int128::*)()  const>(&ClipperLib::Int128::operator-));

  DEBUG_MSG("Adding lo methods  to provide read access to the field lo (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:254:13
  // signature to use in the veto list: ClipperLib::Int128::lo
  t14.method("lo", [](const ClipperLib::Int128& a) -> ClipperLib::ulong64 { return a.lo; });
  t14.method("lo", [](ClipperLib::Int128& a) -> ClipperLib::ulong64 { return a.lo; });
  t14.method("lo", [](const ClipperLib::Int128* a) -> ClipperLib::ulong64 { return a->lo; });
  t14.method("lo", [](ClipperLib::Int128* a) -> ClipperLib::ulong64 { return a->lo; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:254:13
  // signature to use in the veto list: ClipperLib::Int128::lo
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding lo! methods to provide write access to the field lo (" __HERE__ ")");
  t14.method("lo!", [](ClipperLib::Int128& a, ClipperLib::ulong64 val) -> ClipperLib::ulong64 { return a.lo = val; });

  DEBUG_MSG("Adding lo! methods to provide write access to the field lo (" __HERE__ ")");
  t14.method("lo!", [](ClipperLib::Int128* a, ClipperLib::ulong64 val) -> ClipperLib::ulong64 { return a->lo = val; });

  DEBUG_MSG("Adding hi methods  to provide read access to the field hi (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:255:12
  // signature to use in the veto list: ClipperLib::Int128::hi
  t14.method("hi", [](const ClipperLib::Int128& a) -> ClipperLib::long64 { return a.hi; });
  t14.method("hi", [](ClipperLib::Int128& a) -> ClipperLib::long64 { return a.hi; });
  t14.method("hi", [](const ClipperLib::Int128* a) -> ClipperLib::long64 { return a->hi; });
  t14.method("hi", [](ClipperLib::Int128* a) -> ClipperLib::long64 { return a->hi; });
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:255:12
  // signature to use in the veto list: ClipperLib::Int128::hi
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding hi! methods to provide write access to the field hi (" __HERE__ ")");
  t14.method("hi!", [](ClipperLib::Int128& a, ClipperLib::long64 val) -> ClipperLib::long64 { return a.hi = val; });

  DEBUG_MSG("Adding hi! methods to provide write access to the field hi (" __HERE__ ")");
  t14.method("hi!", [](ClipperLib::Int128* a, ClipperLib::long64 val) -> ClipperLib::long64 { return a->hi = val; });

  /* End of ClipperLib::Int128 class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class Val
   */

  DEBUG_MSG("Adding nVals methods  to provide read access to the field nVals (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:129:11
  // signature to use in the veto list: Val::nVals
  t17.method("nVals", [](const Val& a) -> int { return a.nVals; });
  t17.method("nVals", [](Val& a) -> int { return a.nVals; });
  t17.method("nVals", [](const Val* a) -> int { return a->nVals; });
  t17.method("nVals", [](Val* a) -> int { return a->nVals; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:129:11
  // signature to use in the veto list: Val::nVals
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding nVals! methods to provide write access to the field nVals (" __HERE__ ")");
  t17.method("nVals!", [](Val& a, int val) -> int { return a.nVals = val; });

  DEBUG_MSG("Adding nVals! methods to provide write access to the field nVals (" __HERE__ ")");
  t17.method("nVals!", [](Val* a, int val) -> int { return a->nVals = val; });

  DEBUG_MSG("Adding val methods  to provide read access to the field val (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:130:14
  // signature to use in the veto list: Val::val
  t17.method("val", [](const Val& a) -> double { return a.val; });
  t17.method("val", [](Val& a) -> double { return a.val; });
  t17.method("val", [](const Val* a) -> double { return a->val; });
  t17.method("val", [](Val* a) -> double { return a->val; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:130:14
  // signature to use in the veto list: Val::val
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding val! methods to provide write access to the field val (" __HERE__ ")");
  t17.method("val!", [](Val& a, double val) -> double { return a.val = val; });

  DEBUG_MSG("Adding val! methods to provide write access to the field val (" __HERE__ ")");
  t17.method("val!", [](Val* a, double val) -> double { return a->val = val; });

  /* End of Val class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class QuadVals
   */

  DEBUG_MSG("Adding isUsed methods  to provide read access to the field isUsed (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:239:12
  // signature to use in the veto list: QuadVals::isUsed
  t19.method("isUsed", [](const QuadVals& a) -> bool { return a.isUsed; });
  t19.method("isUsed", [](QuadVals& a) -> bool { return a.isUsed; });
  t19.method("isUsed", [](const QuadVals* a) -> bool { return a->isUsed; });
  t19.method("isUsed", [](QuadVals* a) -> bool { return a->isUsed; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:239:12
  // signature to use in the veto list: QuadVals::isUsed
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding isUsed! methods to provide write access to the field isUsed (" __HERE__ ")");
  t19.method("isUsed!", [](QuadVals& a, bool val) -> bool { return a.isUsed = val; });

  DEBUG_MSG("Adding isUsed! methods to provide write access to the field isUsed (" __HERE__ ")");
  t19.method("isUsed!", [](QuadVals* a, bool val) -> bool { return a->isUsed = val; });

  DEBUG_MSG("Adding offset methods  to provide read access to the field offset (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:240:16
  // signature to use in the veto list: QuadVals::offset
  t19.method("offset", [](const QuadVals& a) -> int { return a.offset; });
  t19.method("offset", [](QuadVals& a) -> int { return a.offset; });
  t19.method("offset", [](const QuadVals* a) -> int { return a->offset; });
  t19.method("offset", [](QuadVals* a) -> int { return a->offset; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:240:16
  // signature to use in the veto list: QuadVals::offset
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding offset! methods to provide write access to the field offset (" __HERE__ ")");
  t19.method("offset!", [](QuadVals& a, int val) -> int { return a.offset = val; });

  DEBUG_MSG("Adding offset! methods to provide write access to the field offset (" __HERE__ ")");
  t19.method("offset!", [](QuadVals* a, int val) -> int { return a->offset = val; });

  DEBUG_MSG("Adding upperRight methods  to provide read access to the field upperRight (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:241:16
  // signature to use in the veto list: QuadVals::upperRight
  t19.method("upperRight", [](const QuadVals& a) -> int { return a.upperRight; });
  t19.method("upperRight", [](QuadVals& a) -> int { return a.upperRight; });
  t19.method("upperRight", [](const QuadVals* a) -> int { return a->upperRight; });
  t19.method("upperRight", [](QuadVals* a) -> int { return a->upperRight; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:241:16
  // signature to use in the veto list: QuadVals::upperRight
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding upperRight! methods to provide write access to the field upperRight (" __HERE__ ")");
  t19.method("upperRight!", [](QuadVals& a, int val) -> int { return a.upperRight = val; });

  DEBUG_MSG("Adding upperRight! methods to provide write access to the field upperRight (" __HERE__ ")");
  t19.method("upperRight!", [](QuadVals* a, int val) -> int { return a->upperRight = val; });

  DEBUG_MSG("Adding numI methods  to provide read access to the field numI (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:242:11
  // signature to use in the veto list: QuadVals::numI
  t19.method("numI", [](const QuadVals& a) -> int { return a.numI; });
  t19.method("numI", [](QuadVals& a) -> int { return a.numI; });
  t19.method("numI", [](const QuadVals* a) -> int { return a->numI; });
  t19.method("numI", [](QuadVals* a) -> int { return a->numI; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:242:11
  // signature to use in the veto list: QuadVals::numI
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding numI! methods to provide write access to the field numI (" __HERE__ ")");
  t19.method("numI!", [](QuadVals& a, int val) -> int { return a.numI = val; });

  DEBUG_MSG("Adding numI! methods to provide write access to the field numI (" __HERE__ ")");
  t19.method("numI!", [](QuadVals* a, int val) -> int { return a->numI = val; });

  DEBUG_MSG("Adding numJ methods  to provide read access to the field numJ (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:243:11
  // signature to use in the veto list: QuadVals::numJ
  t19.method("numJ", [](const QuadVals& a) -> int { return a.numJ; });
  t19.method("numJ", [](QuadVals& a) -> int { return a.numJ; });
  t19.method("numJ", [](const QuadVals* a) -> int { return a->numJ; });
  t19.method("numJ", [](QuadVals* a) -> int { return a->numJ; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:243:11
  // signature to use in the veto list: QuadVals::numJ
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding numJ! methods to provide write access to the field numJ (" __HERE__ ")");
  t19.method("numJ!", [](QuadVals& a, int val) -> int { return a.numJ = val; });

  DEBUG_MSG("Adding numJ! methods to provide write access to the field numJ (" __HERE__ ")");
  t19.method("numJ!", [](QuadVals* a, int val) -> int { return a->numJ = val; });

  DEBUG_MSG("Adding vals methods  to provide read access to the field vals (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:245:13
  // signature to use in the veto list: QuadVals::vals
  t19.method("vals", [](const QuadVals& a) -> Val ** { return a.vals; });
  t19.method("vals", [](QuadVals& a) -> Val ** { return a.vals; });
  t19.method("vals", [](const QuadVals* a) -> Val ** { return a->vals; });
  t19.method("vals", [](QuadVals* a) -> Val ** { return a->vals; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:245:13
  // signature to use in the veto list: QuadVals::vals
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding vals! methods to provide write access to the field vals (" __HERE__ ")");
  t19.method("vals!", [](QuadVals& a, Val ** val) -> Val ** { return a.vals = val; });

  DEBUG_MSG("Adding vals! methods to provide write access to the field vals (" __HERE__ ")");
  t19.method("vals!", [](QuadVals* a, Val ** val) -> Val ** { return a->vals = val; });

  /* End of QuadVals class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class ValStat
   */

  types.unset_override_module();


  DEBUG_MSG("Adding wrapper for void ValStat::ValStat() (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:506:7
  t20.constructor<>();

  DEBUG_MSG("Adding nVals methods  to provide read access to the field nVals (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:510:11
  // signature to use in the veto list: ValStat::nVals
  t20.method("nVals", [](const ValStat& a) -> int { return a.nVals; });
  t20.method("nVals", [](ValStat& a) -> int { return a.nVals; });
  t20.method("nVals", [](const ValStat* a) -> int { return a->nVals; });
  t20.method("nVals", [](ValStat* a) -> int { return a->nVals; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:510:11
  // signature to use in the veto list: ValStat::nVals
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding nVals! methods to provide write access to the field nVals (" __HERE__ ")");
  t20.method("nVals!", [](ValStat& a, int val) -> int { return a.nVals = val; });

  DEBUG_MSG("Adding nVals! methods to provide write access to the field nVals (" __HERE__ ")");
  t20.method("nVals!", [](ValStat* a, int val) -> int { return a->nVals = val; });

  DEBUG_MSG("Adding val methods  to provide read access to the field val (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:511:14
  // signature to use in the veto list: ValStat::val
  t20.method("val", [](const ValStat& a) -> double { return a.val; });
  t20.method("val", [](ValStat& a) -> double { return a.val; });
  t20.method("val", [](const ValStat* a) -> double { return a->val; });
  t20.method("val", [](ValStat* a) -> double { return a->val; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:511:14
  // signature to use in the veto list: ValStat::val
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding val! methods to provide write access to the field val (" __HERE__ ")");
  t20.method("val!", [](ValStat& a, double val) -> double { return a.val = val; });

  DEBUG_MSG("Adding val! methods to provide write access to the field val (" __HERE__ ")");
  t20.method("val!", [](ValStat* a, double val) -> double { return a->val = val; });

  DEBUG_MSG("Adding min methods  to provide read access to the field min (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:512:14
  // signature to use in the veto list: ValStat::min
  t20.method("min", [](const ValStat& a) -> double { return a.min; });
  t20.method("min", [](ValStat& a) -> double { return a.min; });
  t20.method("min", [](const ValStat* a) -> double { return a->min; });
  t20.method("min", [](ValStat* a) -> double { return a->min; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:512:14
  // signature to use in the veto list: ValStat::min
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding min! methods to provide write access to the field min (" __HERE__ ")");
  t20.method("min!", [](ValStat& a, double val) -> double { return a.min = val; });

  DEBUG_MSG("Adding min! methods to provide write access to the field min (" __HERE__ ")");
  t20.method("min!", [](ValStat* a, double val) -> double { return a->min = val; });

  DEBUG_MSG("Adding max methods  to provide read access to the field max (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:513:14
  // signature to use in the veto list: ValStat::max
  t20.method("max", [](const ValStat& a) -> double { return a.max; });
  t20.method("max", [](ValStat& a) -> double { return a.max; });
  t20.method("max", [](const ValStat* a) -> double { return a->max; });
  t20.method("max", [](ValStat* a) -> double { return a->max; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:513:14
  // signature to use in the veto list: ValStat::max
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding max! methods to provide write access to the field max (" __HERE__ ")");
  t20.method("max!", [](ValStat& a, double val) -> double { return a.max = val; });

  DEBUG_MSG("Adding max! methods to provide write access to the field max (" __HERE__ ")");
  t20.method("max!", [](ValStat* a, double val) -> double { return a->max = val; });

  DEBUG_MSG("Adding leaf methods  to provide read access to the field leaf (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:514:12
  // signature to use in the veto list: ValStat::leaf
  t20.method("leaf", [](const ValStat& a) -> bool { return a.leaf; });
  t20.method("leaf", [](ValStat& a) -> bool { return a.leaf; });
  t20.method("leaf", [](const ValStat* a) -> bool { return a->leaf; });
  t20.method("leaf", [](ValStat* a) -> bool { return a->leaf; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:514:12
  // signature to use in the veto list: ValStat::leaf
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding leaf! methods to provide write access to the field leaf (" __HERE__ ")");
  t20.method("leaf!", [](ValStat& a, bool val) -> bool { return a.leaf = val; });

  DEBUG_MSG("Adding leaf! methods to provide write access to the field leaf (" __HERE__ ")");
  t20.method("leaf!", [](ValStat* a, bool val) -> bool { return a->leaf = val; });

  DEBUG_MSG("Adding covered methods  to provide read access to the field covered (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:515:12
  // signature to use in the veto list: ValStat::covered
  t20.method("covered", [](const ValStat& a) -> bool { return a.covered; });
  t20.method("covered", [](ValStat& a) -> bool { return a.covered; });
  t20.method("covered", [](const ValStat* a) -> bool { return a->covered; });
  t20.method("covered", [](ValStat* a) -> bool { return a->covered; });
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:515:12
  // signature to use in the veto list: ValStat::covered
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding covered! methods to provide write access to the field covered (" __HERE__ ")");
  t20.method("covered!", [](ValStat& a, bool val) -> bool { return a.covered = val; });

  DEBUG_MSG("Adding covered! methods to provide write access to the field covered (" __HERE__ ")");
  t20.method("covered!", [](ValStat* a, bool val) -> bool { return a->covered = val; });

  /* End of ValStat class method wrappers
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

  DEBUG_MSG("Adding wrapper for ClipperLib::cInt ClipperLib::Round(double) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::cInt ClipperLib::Round(double)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:136:13
  types.method("ClipperLib!Round", static_cast<ClipperLib::cInt (*)(double) >(&ClipperLib::Round));

  DEBUG_MSG("Adding wrapper for ClipperLib::cInt ClipperLib::Abs(ClipperLib::cInt) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::cInt ClipperLib::Abs(ClipperLib::cInt)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:143:13
  types.method("ClipperLib!Abs", static_cast<ClipperLib::cInt (*)(ClipperLib::cInt) >(&ClipperLib::Abs));

  DEBUG_MSG("Adding wrapper for ClipperLib::Int128 ClipperLib::Int128Mul(ClipperLib::long64, ClipperLib::long64) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::Int128 ClipperLib::Int128Mul(ClipperLib::long64, ClipperLib::long64)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:354:8
  types.method("ClipperLib!Int128Mul", static_cast<ClipperLib::Int128 (*)(ClipperLib::long64, ClipperLib::long64) >(&ClipperLib::Int128Mul));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::Orientation(const ClipperLib::Path &) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::Orientation(const ClipperLib::Path &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:385:6
  types.method("ClipperLib!Orientation", static_cast<bool (*)(const ClipperLib::Path &) >(&ClipperLib::Orientation));

  DEBUG_MSG("Adding wrapper for double ClipperLib::Area(const ClipperLib::Path &) (" __HERE__ ")");
  // signature to use in the veto list: double ClipperLib::Area(const ClipperLib::Path &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:391:8
  types.method("ClipperLib!Area", static_cast<double (*)(const ClipperLib::Path &) >(&ClipperLib::Area));

  DEBUG_MSG("Adding wrapper for double ClipperLib::Area(const ClipperLib::OutPt *) (" __HERE__ ")");
  // signature to use in the veto list: double ClipperLib::Area(const ClipperLib::OutPt *)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:406:8
  types.method("ClipperLib!Area", static_cast<double (*)(const ClipperLib::OutPt *) >(&ClipperLib::Area));

  DEBUG_MSG("Adding wrapper for double ClipperLib::Area(const ClipperLib::OutRec &) (" __HERE__ ")");
  // signature to use in the veto list: double ClipperLib::Area(const ClipperLib::OutRec &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:419:8
  types.method("ClipperLib!Area", static_cast<double (*)(const ClipperLib::OutRec &) >(&ClipperLib::Area));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::PointIsVertex(const ClipperLib::IntPoint &, ClipperLib::OutPt *) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::PointIsVertex(const ClipperLib::IntPoint &, ClipperLib::OutPt *)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:425:6
  types.method("ClipperLib!PointIsVertex", static_cast<bool (*)(const ClipperLib::IntPoint &, ClipperLib::OutPt *) >(&ClipperLib::PointIsVertex));

  DEBUG_MSG("Adding wrapper for int ClipperLib::PointInPolygon(const ClipperLib::IntPoint &, const ClipperLib::Path &) (" __HERE__ ")");
  // signature to use in the veto list: int ClipperLib::PointInPolygon(const ClipperLib::IntPoint &, const ClipperLib::Path &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:440:5
  types.method("ClipperLib!PointInPolygon", static_cast<int (*)(const ClipperLib::IntPoint &, const ClipperLib::Path &) >(&ClipperLib::PointInPolygon));

  DEBUG_MSG("Adding wrapper for int ClipperLib::PointInPolygon(const ClipperLib::IntPoint &, ClipperLib::OutPt *) (" __HERE__ ")");
  // signature to use in the veto list: int ClipperLib::PointInPolygon(const ClipperLib::IntPoint &, ClipperLib::OutPt *)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:484:5
  types.method("ClipperLib!PointInPolygon", static_cast<int (*)(const ClipperLib::IntPoint &, ClipperLib::OutPt *) >(&ClipperLib::PointInPolygon));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::Poly2ContainsPoly1(ClipperLib::OutPt *, ClipperLib::OutPt *) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::Poly2ContainsPoly1(ClipperLib::OutPt *, ClipperLib::OutPt *)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:526:6
  types.method("ClipperLib!Poly2ContainsPoly1", static_cast<bool (*)(ClipperLib::OutPt *, ClipperLib::OutPt *) >(&ClipperLib::Poly2ContainsPoly1));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::SlopesEqual(const ClipperLib::TEdge &, const ClipperLib::TEdge &, bool) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::SlopesEqual(const ClipperLib::TEdge &, const ClipperLib::TEdge &, bool)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:541:6
  types.method("ClipperLib!SlopesEqual", static_cast<bool (*)(const ClipperLib::TEdge &, const ClipperLib::TEdge &, bool) >(&ClipperLib::SlopesEqual));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::SlopesEqual(const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint, bool) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::SlopesEqual(const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint, bool)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:554:6
  types.method("ClipperLib!SlopesEqual", static_cast<bool (*)(const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint, bool) >(&ClipperLib::SlopesEqual));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::SlopesEqual(const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint, bool) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::SlopesEqual(const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint, bool)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:566:6
  types.method("ClipperLib!SlopesEqual", static_cast<bool (*)(const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint, bool) >(&ClipperLib::SlopesEqual));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::IsHorizontal(ClipperLib::TEdge &) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::IsHorizontal(ClipperLib::TEdge &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:578:13
  types.method("ClipperLib!IsHorizontal", static_cast<bool (*)(ClipperLib::TEdge &) >(&ClipperLib::IsHorizontal));

  DEBUG_MSG("Adding wrapper for double ClipperLib::GetDx(const ClipperLib::IntPoint, const ClipperLib::IntPoint) (" __HERE__ ")");
  // signature to use in the veto list: double ClipperLib::GetDx(const ClipperLib::IntPoint, const ClipperLib::IntPoint)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:584:15
  types.method("ClipperLib!GetDx", static_cast<double (*)(const ClipperLib::IntPoint, const ClipperLib::IntPoint) >(&ClipperLib::GetDx));

  DEBUG_MSG("Adding wrapper for void ClipperLib::SetDx(ClipperLib::TEdge &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::SetDx(ClipperLib::TEdge &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:591:13
  types.method("ClipperLib!SetDx", static_cast<void (*)(ClipperLib::TEdge &) >(&ClipperLib::SetDx));

  DEBUG_MSG("Adding wrapper for void ClipperLib::SwapSides(ClipperLib::TEdge &, ClipperLib::TEdge &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::SwapSides(ClipperLib::TEdge &, ClipperLib::TEdge &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:599:13
  types.method("ClipperLib!SwapSides", static_cast<void (*)(ClipperLib::TEdge &, ClipperLib::TEdge &) >(&ClipperLib::SwapSides));

  DEBUG_MSG("Adding wrapper for void ClipperLib::SwapPolyIndexes(ClipperLib::TEdge &, ClipperLib::TEdge &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::SwapPolyIndexes(ClipperLib::TEdge &, ClipperLib::TEdge &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:607:13
  types.method("ClipperLib!SwapPolyIndexes", static_cast<void (*)(ClipperLib::TEdge &, ClipperLib::TEdge &) >(&ClipperLib::SwapPolyIndexes));

  DEBUG_MSG("Adding wrapper for ClipperLib::cInt ClipperLib::TopX(ClipperLib::TEdge &, const ClipperLib::cInt) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::cInt ClipperLib::TopX(ClipperLib::TEdge &, const ClipperLib::cInt)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:615:13
  types.method("ClipperLib!TopX", static_cast<ClipperLib::cInt (*)(ClipperLib::TEdge &, const ClipperLib::cInt) >(&ClipperLib::TopX));

  DEBUG_MSG("Adding wrapper for void ClipperLib::IntersectPoint(ClipperLib::TEdge &, ClipperLib::TEdge &, ClipperLib::IntPoint &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::IntersectPoint(ClipperLib::TEdge &, ClipperLib::TEdge &, ClipperLib::IntPoint &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:622:6
  types.method("ClipperLib!IntersectPoint", static_cast<void (*)(ClipperLib::TEdge &, ClipperLib::TEdge &, ClipperLib::IntPoint &) >(&ClipperLib::IntersectPoint));

  DEBUG_MSG("Adding wrapper for void ClipperLib::ReversePolyPtLinks(ClipperLib::OutPt *) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::ReversePolyPtLinks(ClipperLib::OutPt *)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:692:6
  types.method("ClipperLib!ReversePolyPtLinks", static_cast<void (*)(ClipperLib::OutPt *) >(&ClipperLib::ReversePolyPtLinks));

  DEBUG_MSG("Adding wrapper for void ClipperLib::DisposeOutPts(ClipperLib::OutPt *&) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::DisposeOutPts(ClipperLib::OutPt *&)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:706:6
  types.method("ClipperLib!DisposeOutPts", static_cast<void (*)(ClipperLib::OutPt *&) >(&ClipperLib::DisposeOutPts));

  DEBUG_MSG("Adding wrapper for void ClipperLib::InitEdge(ClipperLib::TEdge *, ClipperLib::TEdge *, ClipperLib::TEdge *, const ClipperLib::IntPoint &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::InitEdge(ClipperLib::TEdge *, ClipperLib::TEdge *, ClipperLib::TEdge *, const ClipperLib::IntPoint &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:719:13
  types.method("ClipperLib!InitEdge", static_cast<void (*)(ClipperLib::TEdge *, ClipperLib::TEdge *, ClipperLib::TEdge *, const ClipperLib::IntPoint &) >(&ClipperLib::InitEdge));

  DEBUG_MSG("Adding wrapper for void ClipperLib::InitEdge2(ClipperLib::TEdge &, ClipperLib::PolyType) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::InitEdge2(ClipperLib::TEdge &, ClipperLib::PolyType)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:729:6
  types.method("ClipperLib!InitEdge2", static_cast<void (*)(ClipperLib::TEdge &, ClipperLib::PolyType) >(&ClipperLib::InitEdge2));

  DEBUG_MSG("Adding wrapper for ClipperLib::TEdge * ClipperLib::RemoveEdge(ClipperLib::TEdge *) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::TEdge * ClipperLib::RemoveEdge(ClipperLib::TEdge *)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:745:8
  types.method("ClipperLib!RemoveEdge", static_cast<ClipperLib::TEdge * (*)(ClipperLib::TEdge *) >(&ClipperLib::RemoveEdge));

  DEBUG_MSG("Adding wrapper for void ClipperLib::ReverseHorizontal(ClipperLib::TEdge &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::ReverseHorizontal(ClipperLib::TEdge &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:756:13
  types.method("ClipperLib!ReverseHorizontal", static_cast<void (*)(ClipperLib::TEdge &) >(&ClipperLib::ReverseHorizontal));

  DEBUG_MSG("Adding wrapper for void ClipperLib::SwapPoints(ClipperLib::IntPoint &, ClipperLib::IntPoint &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::SwapPoints(ClipperLib::IntPoint &, ClipperLib::IntPoint &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:768:6
  types.method("ClipperLib!SwapPoints", static_cast<void (*)(ClipperLib::IntPoint &, ClipperLib::IntPoint &) >(&ClipperLib::SwapPoints));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::GetOverlapSegment(ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint &, ClipperLib::IntPoint &) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::GetOverlapSegment(ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint &, ClipperLib::IntPoint &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:776:6
  types.method("ClipperLib!GetOverlapSegment", static_cast<bool (*)(ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint, ClipperLib::IntPoint &, ClipperLib::IntPoint &) >(&ClipperLib::GetOverlapSegment));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::FirstIsBottomPt(const ClipperLib::OutPt *, const ClipperLib::OutPt *) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::FirstIsBottomPt(const ClipperLib::OutPt *, const ClipperLib::OutPt *)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:798:6
  types.method("ClipperLib!FirstIsBottomPt", static_cast<bool (*)(const ClipperLib::OutPt *, const ClipperLib::OutPt *) >(&ClipperLib::FirstIsBottomPt));

  DEBUG_MSG("Adding wrapper for ClipperLib::OutPt * ClipperLib::GetBottomPt(ClipperLib::OutPt *) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::OutPt * ClipperLib::GetBottomPt(ClipperLib::OutPt *)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:822:8
  types.method("ClipperLib!GetBottomPt", static_cast<ClipperLib::OutPt * (*)(ClipperLib::OutPt *) >(&ClipperLib::GetBottomPt));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::Pt2IsBetweenPt1AndPt3(const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::Pt2IsBetweenPt1AndPt3(const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:860:6
  types.method("ClipperLib!Pt2IsBetweenPt1AndPt3", static_cast<bool (*)(const ClipperLib::IntPoint, const ClipperLib::IntPoint, const ClipperLib::IntPoint) >(&ClipperLib::Pt2IsBetweenPt1AndPt3));

  DEBUG_MSG("Adding wrapper for bool ClipperLib::HorzSegmentsOverlap(ClipperLib::cInt, ClipperLib::cInt, ClipperLib::cInt, ClipperLib::cInt) (" __HERE__ ")");
  // signature to use in the veto list: bool ClipperLib::HorzSegmentsOverlap(ClipperLib::cInt, ClipperLib::cInt, ClipperLib::cInt, ClipperLib::cInt)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:872:6
  types.method("ClipperLib!HorzSegmentsOverlap", static_cast<bool (*)(ClipperLib::cInt, ClipperLib::cInt, ClipperLib::cInt, ClipperLib::cInt) >(&ClipperLib::HorzSegmentsOverlap));

  DEBUG_MSG("Adding wrapper for void ClipperLib::RangeTest(const ClipperLib::IntPoint &, bool &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::RangeTest(const ClipperLib::IntPoint &, bool &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:896:6
  types.method("ClipperLib!RangeTest", static_cast<void (*)(const ClipperLib::IntPoint &, bool &) >(&ClipperLib::RangeTest));

  DEBUG_MSG("Adding wrapper for ClipperLib::TEdge * ClipperLib::FindNextLocMin(ClipperLib::TEdge *) (" __HERE__ ")");
  // signature to use in the veto list: ClipperLib::TEdge * ClipperLib::FindNextLocMin(ClipperLib::TEdge *)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:911:8
  types.method("ClipperLib!FindNextLocMin", static_cast<ClipperLib::TEdge * (*)(ClipperLib::TEdge *) >(&ClipperLib::FindNextLocMin));

  DEBUG_MSG("Adding wrapper for void ClipperLib::AddPolyNodeToPaths(const ClipperLib::PolyNode &, int, ClipperLib::Paths &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::AddPolyNodeToPaths(const ClipperLib::PolyNode &, int, ClipperLib::Paths &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:4562:6
  types.method("ClipperLib!AddPolyNodeToPaths", static_cast<void (*)(const ClipperLib::PolyNode &, int, ClipperLib::Paths &) >(&ClipperLib::AddPolyNodeToPaths));

  DEBUG_MSG("Adding wrapper for void ClipperLib::PolyTreeToPaths(const ClipperLib::PolyTree &, ClipperLib::Paths &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::PolyTreeToPaths(const ClipperLib::PolyTree &, ClipperLib::Paths &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:4575:6
  types.method("ClipperLib!PolyTreeToPaths", static_cast<void (*)(const ClipperLib::PolyTree &, ClipperLib::Paths &) >(&ClipperLib::PolyTreeToPaths));

  DEBUG_MSG("Adding wrapper for void ClipperLib::ClosedPathsFromPolyTree(const ClipperLib::PolyTree &, ClipperLib::Paths &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::ClosedPathsFromPolyTree(const ClipperLib::PolyTree &, ClipperLib::Paths &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:4583:6
  types.method("ClipperLib!ClosedPathsFromPolyTree", static_cast<void (*)(const ClipperLib::PolyTree &, ClipperLib::Paths &) >(&ClipperLib::ClosedPathsFromPolyTree));

  DEBUG_MSG("Adding wrapper for void ClipperLib::OpenPathsFromPolyTree(ClipperLib::PolyTree &, ClipperLib::Paths &) (" __HERE__ ")");
  // signature to use in the veto list: void ClipperLib::OpenPathsFromPolyTree(ClipperLib::PolyTree &, ClipperLib::Paths &)
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:4591:6
  types.method("ClipperLib!OpenPathsFromPolyTree", static_cast<void (*)(ClipperLib::PolyTree &, ClipperLib::Paths &) >(&ClipperLib::OpenPathsFromPolyTree));

  DEBUG_MSG("Adding wrapper for void binValsGlobal(BinValsParam &) (" __HERE__ ")");
  // signature to use in the veto list: void binValsGlobal(BinValsParam &)
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:135:6
  types.method("binValsGlobal", static_cast<void (*)(BinValsParam &) >(&binValsGlobal));

  DEBUG_MSG("Adding wrapper for void binValsPartial(BinValsParam &) (" __HERE__ ")");
  // signature to use in the veto list: void binValsPartial(BinValsParam &)
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:250:6
  types.method("binValsPartial", static_cast<void (*)(BinValsParam &) >(&binValsPartial));

  DEBUG_MSG("Adding wrapper for void doBinVals(BinValsParam &, DgGridPList &) (" __HERE__ ")");
  // signature to use in the veto list: void doBinVals(BinValsParam &, DgGridPList &)
  // defined in DGGRID/src/apps/dggrid/binvals.cpp:519:6
  types.method("doBinVals", static_cast<void (*)(BinValsParam &, DgGridPList &) >(&doBinVals));

  DEBUG_MSG("Adding ClipperLib!pi methods to provide access to the global variable ClipperLib::pi (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:53:21
  types.method("ClipperLib!pi", []()-> double { return ClipperLib::pi; });

  DEBUG_MSG("Adding ClipperLib!two_pi methods to provide access to the global variable ClipperLib::two_pi (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:54:21
  types.method("ClipperLib!two_pi", []()-> double { return ClipperLib::two_pi; });

  DEBUG_MSG("Adding ClipperLib!def_arc_tolerance methods to provide access to the global variable ClipperLib::def_arc_tolerance (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:55:21
  types.method("ClipperLib!def_arc_tolerance", []()-> double { return ClipperLib::def_arc_tolerance; });

  DEBUG_MSG("Adding ClipperLib!Unassigned methods to provide access to the global variable ClipperLib::Unassigned (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:59:18
  types.method("ClipperLib!Unassigned", []()-> int { return ClipperLib::Unassigned; });

  DEBUG_MSG("Adding ClipperLib!Skip methods to provide access to the global variable ClipperLib::Skip (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:60:18
  types.method("ClipperLib!Skip", []()-> int { return ClipperLib::Skip; });

  DEBUG_MSG("Adding ClipperLib!ClipperBase!DisposeOutRec methods to provide access to the global variable ClipperLib::ClipperBase::DisposeOutRec (" __HERE__ ")");
  // defined in DGGRID/src/apps/dggrid/clipper.cpp:1358:19
  types.method("ClipperLib!ClipperBase!DisposeOutRec", []()-> void& { return ClipperLib::ClipperBase::DisposeOutRec; });
  types.method("ClipperLib!ClipperBase!DisposeOutRec!", [](const void& val)-> void& { return ClipperLib::ClipperBase::DisposeOutRec = val; });
  /* End of global function wrappers
   **********************************************************************/

  DEBUG_MSG("End of wrapper definitions");

}
