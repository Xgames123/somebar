// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 10;
constexpr int paddingY = 1;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "JetBrainsMonoNerdFont 30px";

constexpr ColorScheme colorInactive = {Color(0xbb, 0xbb, 0xbb), Color(0x11, 0x11, 0x11)};
constexpr ColorScheme colorActive = {Color(0x11, 0x11, 0x11), Color(0xff, 0xd5, 0xa0)};
constexpr const char* termcmd[] = {"tofi", nullptr};

static std::vector<std::string> tagNames = {
   "1", "2", "3",
   "4", "5", "6",
   "7", "8", "9",
};


constexpr Button buttons[] = {
   { ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
