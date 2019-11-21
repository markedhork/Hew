#pragma once
#include "SceneMgr.h"

class Title :
	public SceneMgr
{
public:
	Title();
	bool Initialize();
	bool Uninitialize();
	bool Set();
	bool Update();
	bool Draw();
};

