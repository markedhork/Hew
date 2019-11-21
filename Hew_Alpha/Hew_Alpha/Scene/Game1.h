#pragma once
#include "SceneMgr.h"

class Game1 :
	public SceneMgr
{
public:
	Game1();
	bool Initialize();
	bool Uninitialize();
	bool Set();
	bool Update();
	bool Draw();

};

