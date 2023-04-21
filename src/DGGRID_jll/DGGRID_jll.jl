module DGGRID_jll

using CxxWrap
using GDAL_jll
@wrapmodule("libjlDGGRID")

function __init__()
    @initcxx
end

end #module
