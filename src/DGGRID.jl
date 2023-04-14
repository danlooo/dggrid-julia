module DGGRID

export !=, +, -, <, <=, ==, >, >=, Bot, Bot!, BottomPt, BottomPt!, ChildCount, Curr, Curr!, Dx, Dx!, Edge1, Edge1!
export Edge2, Edge2!, FirstLeft, FirstLeft!, GetNext, Idx, Idx!, IsHole, IsHole!, IsOpen, IsOpen!, LeftBound, LeftBound!
export Next, Next!, NextInAEL, NextInAEL!, NextInLML, NextInLML!, NextInSEL, NextInSEL!, OffPt, OffPt!, OutIdx, OutIdx!
export OutPt1, OutPt1!, OutPt2, OutPt2!, PolyNd, PolyNd!, PolyTyp, PolyTyp!, Prev, Prev!, PrevInAEL, PrevInAEL!, PrevInSEL
export PrevInSEL!, Pt, Pt!, RightBound, RightBound!, Side, Side!, Top, Top!, WindCnt, WindCnt!, WindCnt2, WindCnt2!, WindDelta
export WindDelta!, Y, Y!, add!, assign, covered, covered!, hi, hi!, isUsed, isUsed!, leaf, leaf!, lo, lo!, max, max!, min, min!
export nVals, nVals!, numI, numI!, numJ, numJ!, offset, offset!, paren, sub!, upperRight, upperRight!, val, val!, vals, vals!

using CxxWrap
@wrapmodule("jlDGGRID")

function __init__()
    @initcxx
end

end #module
