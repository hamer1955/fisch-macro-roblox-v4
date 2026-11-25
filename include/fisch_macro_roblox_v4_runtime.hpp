#pragma once
#include <cstdint>

namespace fisch_macro_roblox_v4 {
inline constexpr const char* kModuleName = "fisch-macro-roblox-v4";
inline constexpr const char* kBuildSalt = "3a611477dcf00dfb";
struct RuntimeConfig {
    uint32_t target_fps = 144;
    float fov_radius = 65.0f;
    float smooth_factor = 1.45f;
    bool draw_bounds = true;
};
} // namespace fisch_macro_roblox_v4
