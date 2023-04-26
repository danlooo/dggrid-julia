using Test
using Pkg

Pkg.instantiate()

@testset begin
    @testset "Load library" begin
        # Use local package
        "lib" in LOAD_PATH || push!(LOAD_PATH, "lib")
        "lib" in Base.DL_LOAD_PATH || push!(Base.DL_LOAD_PATH, "lib")

        @test begin
            include("../DGGRID_jll.jl")
            true
        end
    end

    @testset "DgGridPList" begin
        p = DGGRID_jll.DgGridPList()
        @test typeof(p) == DGGRID_jll.DgGridPListAllocated
    end

    @testset "Transform" begin
        @test begin
            p = DGGRID_jll.DgGridPList()
            true
        end
        @test begin
            p = DGGRID_jll.DgGridPList()
            # tp = DGGRID_jll.TransformParam(p)
            true
        end
    end
end

