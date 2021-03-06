// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<CanvasData>
    : Ubpa::USRefl::TypeInfoBase<CanvasData>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{"points", &CanvasData::points},
        Field{"scrolling", &CanvasData::scrolling},
        Field{"opt_enable_grid", &CanvasData::opt_enable_grid},
        Field{"opt_enable_context_menu", &CanvasData::opt_enable_context_menu},
        Field{"adding_line", &CanvasData::adding_line},
    };
};

