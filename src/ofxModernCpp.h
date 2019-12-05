#pragma once

#ifndef OFX_MODERN_CPP_H
#define OFX_MODERN_CPP_H

#include <linb/any.hpp>
#include <mpark/variant.hpp>
#include <tl/optional.hpp>

#define OFX_MODERN_CPP_USE_IN_OFX namespace ofx { using namespace modern_cpp; };

namespace ofx {
    namespace modern_cpp {
        using namespace linb;
        using namespace tl;
        using namespace mpark;
    };
};

#endif
