#pragma once
#include "Types.h"
#include "Colorbuffer.h"
#include "Camera.h"

class Scene;

class Tracer
{
public:
	void Trace(const ColorBuffer& colorBuffer, Scene* scene, Camera* camera);

public:
	int samples = 3;
	int depth = 30;
};

