module DGGRID

export clearList, insertParam

using CxxWrap
@wrapmodule("jlDGGRID")

function __init__()
    @initcxx
end

end #module
