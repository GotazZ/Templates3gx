#ifndef STDAFX_H
#define STDAFX_H

#define _USE_MATH_DEFINES

#include <CTRPluginFramework.hpp>
#include <3ds.h>
#include "CTRPF/csvc.h"
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <cstdio>
#include <cstdarg>
#include <string>
#include <ctime>
#include <cmath>
#include <math.h>
#include <random>
#include <vector>
#include <thread>
#include <chrono>
#include <algorithm>
#include <iterator>
#include <fstream>

namespace CTRPluginFramework
{
    using CompareCallback = bool (*)(const void *, std::string &);
    using OnEventCallback = void(*)(Keyboard &, KeyboardEvent &event);

	using StringVector = std::vector<std::string>;
	using uVector32 = std::vector<u32>;
	using uVector16 = std::vector<u16>;
	using uVector8 = std::vector<u8>;
	using sVector32 = std::vector<s32>;
	using sVector16 = std::vector<s16>;
	using sVector8 = std::vector<s8>;

	struct Vector3Float
	{
		float X;
		float Y;
		float Z;
	};
}

#endif