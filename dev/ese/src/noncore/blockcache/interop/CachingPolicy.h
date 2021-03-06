// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "stdafx.h"

#pragma once

#pragma managed

namespace Internal
{
    namespace Ese
    {
        namespace BlockCache
        {
            namespace Interop
            {
                public enum class CachingPolicy : int
                {
                    DontCache = 0,

                    BestEffort = 1,
                };
            }
        }
    }
}
