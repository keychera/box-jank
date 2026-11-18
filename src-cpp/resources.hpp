#pragma once
#include <cstddef>

namespace res {
inline constexpr unsigned char click2_ogg_data[] = {
#embed "res/click2.ogg"
};

inline constexpr std::size_t click2_ogg_data_size = sizeof(click2_ogg_data);

inline constexpr unsigned char bgm_data[] = {
#embed "res/pixelspheremegamix.ogg"
};

inline constexpr std::size_t bgm_data_size = sizeof(bgm_data);

inline constexpr unsigned char font_data[] = {
#embed "res/fonts/CardboardCrown/CardboardCrown.ttf"
};

inline constexpr std::size_t font_data_size = sizeof(font_data);
} // namespace res
