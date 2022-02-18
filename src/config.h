#pragma once


#ifdef PLATFORM_OSX

#define SHLIB_EXT ".dylib"

#else

#define HAS_SPI
#define HAS_I2C
#define HAS_GPIOD
#define HAS_FRAMEBUFFER

#define SHLIB_EXT ".so"

#endif


