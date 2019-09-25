#pragma once

#include "Utils.h"

class InputSystem {
public:
    constexpr void enableInput(bool enable) noexcept
    {
        callVirtualMethod<void, bool>(this, 11, enable);
    }

    constexpr void resetInputState() noexcept
    {
        callVirtualMethod<void>(this, 39);
    }

    constexpr auto buttonCodeToString(int buttonCode) noexcept
    {
        return callVirtualMethod<const char*, int>(this, 40, buttonCode);
    }

    constexpr auto virtualKeyToButtonCode(int virtualKey) noexcept
    {
        return callVirtualMethod<int, int>(this, 45, virtualKey);
    }
};
