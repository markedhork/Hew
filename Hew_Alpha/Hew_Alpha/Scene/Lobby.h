#pragma once
#include "SceneMgr.h"


class Lobby :
	public SceneMgr
{
public:
	Lobby();
	bool Initialize();
	bool Uninitialize();
	bool Set();
	bool Update();
	bool Draw();
};

