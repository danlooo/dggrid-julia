module DGGRID

using CxxWrap
@wrapmodule("jlDGGRID")

function __init__()
    @initcxx
end

end #module
