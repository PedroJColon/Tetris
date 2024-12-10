#include "raylib.h"
#include <array>

#ifndef COLORS_H
#define COLORS_H

namespace Colors
{
	inline const Color darkGray = {26, 31, 40, 255};
	inline const Color red = {232, 18, 18, 255};
	inline const Color green = {47, 230,23, 255};
	inline const Color blue = {13, 64, 216, 255};
	inline const Color yellow = {237, 116, 16, 255};
	inline const Color orange = {226, 116, 17, 255};
	inline const Color purple = {166, 0, 247, 255};
	inline const Color cyan = {21, 204, 209, 255 };

	inline const std::array<Color, 8> cellColors = {darkGray, red, green, blue, yellow, orange, purple, cyan};
}

#endif // !COLORS_H