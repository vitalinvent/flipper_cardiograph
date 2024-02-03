#pragma once

#include <furi.h>
#include <furi_hal.h>

#define S_DEVELOPED "vitalinvent"
#define S_GITHUB "https://github.com/vitalinvent/flipper_cardiograph"
#define S_GITHUB_FORK_SRC "https://github.com/anfractuosity/flipperscope"

typedef enum {
    ScopeViewVariableItemList,
    ScopeViewSubmenu,
    ScopeViewWidget,
    ScopeViewSave,
} ScopeView;
