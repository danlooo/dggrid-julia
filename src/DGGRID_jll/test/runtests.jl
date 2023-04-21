using Test

println("Test julia package at $(pwd())\n")

@testset "Load library" begin
    # Use local package
    "." in LOAD_PATH || push!(LOAD_PATH, ".")
    "." in Base.DL_LOAD_PATH || push!(Base.DL_LOAD_PATH, ".")

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