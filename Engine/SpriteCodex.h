#pragma once
#include "Graphics.h"
#include "Surface.h"
#include "Vec2.h"
#include <vector>

class SpriteCodex
{
public:
	SpriteCodex();
	void DrawNumbers( const Vec2i& pos,const int num,Graphics& gfx ) const;
	void DrawGrid( const Vec2i& pos,Graphics& gfx ) const;
	void DrawNewGame( const Vec2i& pos,Graphics& gfx ) const;
	void DrawGameOver( const Vec2i& gridpos,Graphics& gfx ) const;
	Surface getSPGameOver() const;
	Surface getSPGrid() const;
private:
	std::vector<Surface> sprite;
	Surface grid = Surface( L"Grid.bmp" );
	Surface newgame = Surface( L"NewGame.bmp" );
	Surface gameover = Surface( L"GameOver2.bmp" );
};