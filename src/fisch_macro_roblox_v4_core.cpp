#include "../include/fisch_macro_roblox_v4_runtime.hpp"
#include <windows.h>
#include <atomic>

namespace fisch_macro_roblox_v4 {
static std::atomic<bool> g_running{true};
void PollHotkeys(bool& menu_open) noexcept {
    if (GetAsyncKeyState(VK_INSERT) & 1) menu_open = !menu_open;
    if (GetAsyncKeyState(VK_END) & 1) g_running.store(false, std::memory_order_relaxed);
}
} // namespace fisch_macro_roblox_v4

int main() {
    bool menu_open = true;
    while (fisch_macro_roblox_v4::g_running.load(std::memory_order_relaxed)) {
        fisch_macro_roblox_v4::PollHotkeys(menu_open);
        Sleep(6);
    }
    return 0;
}
