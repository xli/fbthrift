// Autogenerated by Thrift for thrift/annotation/python.thrift
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//  @generated

package python


import (
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift/types"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO

// Premade codec specs
var (
    premadeCodecTypeSpec_python_Py3Hidden = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "python.Py3Hidden",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "python.Py3Hidden",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewPy3Hidden() },
},

        }
    }()
    premadeCodecTypeSpec_string = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "string",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_STRING,
},

        }
    }()
    premadeCodecTypeSpec_python_PyDeprecatedHidden = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "python.PyDeprecatedHidden",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "python.PyDeprecatedHidden",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewPyDeprecatedHidden() },
},

        }
    }()
    premadeCodecTypeSpec_python_Flags = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "python.Flags",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "python.Flags",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewFlags() },
},

        }
    }()
    premadeCodecTypeSpec_python_Name = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "python.Name",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "python.Name",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewName() },
},

        }
    }()
    premadeCodecTypeSpec_python_Adapter = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "python.Adapter",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "python.Adapter",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewAdapter() },
},

        }
    }()
    premadeCodecTypeSpec_bool = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "bool",
            CodecPrimitiveSpec: &thrift.CodecPrimitiveSpec{
    PrimitiveType: thrift.CODEC_PRIMITIVE_TYPE_BOOL,
},

        }
    }()
    premadeCodecTypeSpec_python_UseCAPI = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "python.UseCAPI",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "python.UseCAPI",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewUseCAPI() },
},

        }
    }()
    premadeCodecTypeSpec_python_Py3EnableCppAdapter = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "python.Py3EnableCppAdapter",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "python.Py3EnableCppAdapter",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewPy3EnableCppAdapter() },
},

        }
    }()
    premadeCodecTypeSpec_python_MigrationBlockingAllowInheritance = func() *thrift.TypeSpec {
        return &thrift.TypeSpec{
            FullName: "python.MigrationBlockingAllowInheritance",
            CodecStructSpec: &thrift.CodecStructSpec{
    ScopedName: "python.MigrationBlockingAllowInheritance",
    IsUnion:    false,
    NewFunc:    func() thrift.Struct { return NewMigrationBlockingAllowInheritance() },
},

        }
    }()
)

// Premade struct specs
var (
    premadeStructSpec_Py3Hidden = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Py3Hidden",
    ScopedName:           "python.Py3Hidden",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    }()
    premadeStructSpec_PyDeprecatedHidden = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "PyDeprecatedHidden",
    ScopedName:           "python.PyDeprecatedHidden",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "reason",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "reason": 0,
    },
}
    }()
    premadeStructSpec_Flags = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Flags",
    ScopedName:           "python.Flags",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    }()
    premadeStructSpec_Name = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Name",
    ScopedName:           "python.Name",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "name": 0,
    },
}
    }()
    premadeStructSpec_Adapter = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Adapter",
    ScopedName:           "python.Adapter",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.STRING,
            Name:                 "name",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },        {
            ID:                   2,
            WireType:             thrift.STRING,
            Name:                 "typeHint",
            ReflectIndex:         1,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_string,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
        2: 1,
    },
    FieldSpecNameToIndex: map[string]int{
        "name": 0,
        "typeHint": 1,
    },
}
    }()
    premadeStructSpec_UseCAPI = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "UseCAPI",
    ScopedName:           "python.UseCAPI",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
        {
            ID:                   1,
            WireType:             thrift.BOOL,
            Name:                 "serialize",
            ReflectIndex:         0,
            IsOptional:           false,
            ValueTypeSpec:        premadeCodecTypeSpec_bool,
            MustBeSetToSerialize: false,
        },    },
    FieldSpecIDToIndex:   map[int16]int{
        1: 0,
    },
    FieldSpecNameToIndex: map[string]int{
        "serialize": 0,
    },
}
    }()
    premadeStructSpec_Py3EnableCppAdapter = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "Py3EnableCppAdapter",
    ScopedName:           "python.Py3EnableCppAdapter",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    }()
    premadeStructSpec_MigrationBlockingAllowInheritance = func() *thrift.StructSpec {
        return &thrift.StructSpec{
    Name:                 "MigrationBlockingAllowInheritance",
    ScopedName:           "python.MigrationBlockingAllowInheritance",
    IsUnion:              false,
    IsException:          false,
    FieldSpecs:           []thrift.FieldSpec{
    },
    FieldSpecIDToIndex:   map[int16]int{
    },
    FieldSpecNameToIndex: map[string]int{
    },
}
    }()
)

// Premade slice of all struct specs
var premadeStructSpecs = func() []*thrift.StructSpec {
    fbthriftResults := make([]*thrift.StructSpec, 0)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Py3Hidden)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_PyDeprecatedHidden)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Flags)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Name)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Adapter)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_UseCAPI)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_Py3EnableCppAdapter)
    fbthriftResults = append(fbthriftResults, premadeStructSpec_MigrationBlockingAllowInheritance)
    return fbthriftResults
}()

var premadeCodecSpecsMap = func() map[string]*thrift.TypeSpec {
    fbthriftTypeSpecsMap := make(map[string]*thrift.TypeSpec)
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_python_Py3Hidden.FullName] = premadeCodecTypeSpec_python_Py3Hidden
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_string.FullName] = premadeCodecTypeSpec_string
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_python_PyDeprecatedHidden.FullName] = premadeCodecTypeSpec_python_PyDeprecatedHidden
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_python_Flags.FullName] = premadeCodecTypeSpec_python_Flags
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_python_Name.FullName] = premadeCodecTypeSpec_python_Name
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_python_Adapter.FullName] = premadeCodecTypeSpec_python_Adapter
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_bool.FullName] = premadeCodecTypeSpec_bool
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_python_UseCAPI.FullName] = premadeCodecTypeSpec_python_UseCAPI
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_python_Py3EnableCppAdapter.FullName] = premadeCodecTypeSpec_python_Py3EnableCppAdapter
    fbthriftTypeSpecsMap[premadeCodecTypeSpec_python_MigrationBlockingAllowInheritance.FullName] = premadeCodecTypeSpec_python_MigrationBlockingAllowInheritance
    return fbthriftTypeSpecsMap
}()

// GetMetadataThriftType (INTERNAL USE ONLY).
// Returns metadata TypeSpec for a given full type name.
func GetCodecTypeSpec(fullName string) *thrift.TypeSpec {
    return premadeCodecSpecsMap[fullName]
}
