module DGGRID

export asString, assign, clearList, insertParam, isApplicable, isDefault, isUsed, isUserSet, isValid, parameters
export parameters!, setIsApplicable, setIsDefault, setIsUsed, setIsUserSet, setIsValid, valToStr, validate, validationErrMsg

using CxxWrap
@wrapmodule("jlDGGRID")

function __init__()
    @initcxx
end

end #module
