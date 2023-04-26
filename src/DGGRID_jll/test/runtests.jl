using Test

println("Test julia package at $(pwd())\n")

@testset "Load library" begin
    # Use local package
    "lib" in LOAD_PATH || push!(LOAD_PATH, "lib")
    "lib" in Base.DL_LOAD_PATH || push!(Base.DL_LOAD_PATH, "lib")

    module DGGRID_jll
    using CxxWrap
    using GDAL_jll
    @wrapmodule("libjlDGGRID")
    function __init__()
        @initcxx
    end
    end #module
end


println("\nTests finished!")