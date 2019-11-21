#pragma once
#include "SceneMgr.h"

class Game2 :
	public SceneMgr
{
public:
	Game2();
	bool Initialize();
	bool Uninitialize();
	bool Set();
	bool Update();
	bool Draw();
};

