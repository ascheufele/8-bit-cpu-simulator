#pragma once
#include "bus.hpp";
#include <stdint.h>;

struct _register
{
	uint8_t value;
};
typedef struct _register Register;