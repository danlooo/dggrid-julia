using Test

println("Test julia package at $(pwd())\n")

@testset "Load library" begin
    # Use local package
    ".." in LOAD_PATH || push!(LOAD_PATH, ".")
    ".." in Base.DL_LOAD_PATH || push!(Base.DL_LOAD_PATH, ".")
    using DGGRID_jll
end


println("\nTests finished!")