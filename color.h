#include <iostream>
#include <string>
#pragma once

class color
{
public:
	using color256 = unsigned char;
	enum
	{
		black = 0,
		blue = 4,
		green = 2,
		light_blue = 6,
		red = 1,
		purple = 5,
		yellow = 3,
		white = 7,
		normal = white,
	};
	//static constexpr int default = 7;
	inline friend std::ostream& operator<<(std::ostream& os, color&& c);

	color(color256 c) : c{c}
	{}
private:
	color256 c;
};

inline std::ostream& operator<<(std::ostream& os, color&& c)
{
	return os << std::string{"\033[38;5;"} + std::to_string(c.c) + "m";
}