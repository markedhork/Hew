#pragma once

class SceneMgr
{
public:
	virtual bool Initialize() = 0;
	virtual bool Uninitialize() = 0;
	virtual bool Set() = 0;
	virtual bool Update() = 0;
	virtual bool Draw() = 0;
};

