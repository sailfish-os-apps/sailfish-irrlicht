// Copyright (C) 2014 Patryk Nadrowski
// This file is part of the "Irrlicht Engine".
// For conditions of distribution and use, see copyright notice in Irrlicht.h

#ifndef __C_OGLES2_RENDERER_2D_H_INCLUDED__
#define __C_OGLES2_RENDERER_2D_H_INCLUDED__

#include "IrrCompileConfig.h"

#if defined(_IRR_COMPILE_WITH_OGLES2_) || defined(_IRR_COMPILE_WITH_QGLFUNCTIONS_)

#include "CQGLFunctionsMaterialRenderer.h"

namespace irr
{
namespace video
{

class CQGLFunctionsRenderer2D : public CQGLFunctionsMaterialRenderer
{
public:
	CQGLFunctionsRenderer2D(const c8* vertexShaderProgram, const c8* pixelShaderProgram, CQGLFunctionsDriver* driver, bool withTexture);
	~CQGLFunctionsRenderer2D();

	virtual void OnSetMaterial(const SMaterial& material, const SMaterial& lastMaterial,
		bool resetAllRenderstates, IMaterialRendererServices* services);

	virtual bool OnRender(IMaterialRendererServices* service, E_VERTEX_TYPE vtxtype);

protected:
	bool WithTexture;
	s32 ThicknessID;
	s32 TextureUsageID;
};


}
}

#endif
#endif

