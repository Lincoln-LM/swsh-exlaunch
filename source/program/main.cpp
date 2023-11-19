#include "lib.hpp"
#include "patches/underworld.hpp"
#include "patches/overworld_shiny.hpp"

extern "C" void exl_main(void* x0, void* x1) {
    exl::hook::Initialize();

    // install_underworld_patch();
    install_overworld_shiny_patch();
}

extern "C" NORETURN void exl_exception_entry() {
    /* TODO: exception handling */
    EXL_ABORT(0x420);
}