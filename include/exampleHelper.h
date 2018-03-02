// Copyright (C) 2015 Patryk Nadrowski
// This file is part of the "Irrlicht Engine".
// For conditions of distribution and use, see copyright notice in irrlicht.h

#ifndef __EXAMPLE_HELPER_H_INCLUDED__
#define __EXAMPLE_HELPER_H_INCLUDED__

#include "IrrCompileConfig.h"
#include "path.h"

namespace irr
{

static io::path getExampleMediaPath()
{
#if defined (_IRR_IOS_PLATFORM_) || defined (_IRR_ANDROID_PLATFORM_) || defined (_IRR_OSX_PLATFORM_) || defined (_IRR_EMSCRIPTEN_PLATFORM_)
# ifndef _IRR_OSX_PLATFORM_
	return io::path("media/");
# else
    return io::path("../Resources/media/");
# endif
#elif defined(_IRR_COMPILE_WITH_SAILFISH_DEVICE_)
//	return io::path("/opt/sdk/irrlicht-sailfish/usr/share/media/");
	return io::path("/usr/share/irrlicht/media/");
#else
# ifdef _DEBUG
	return io::path("media/");
# else
	return io::path("../../../irrlicht/media/");
# endif
#endif
}

} // end namespace irr

#endif
