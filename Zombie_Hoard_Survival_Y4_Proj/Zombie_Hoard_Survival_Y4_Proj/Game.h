#pragma once
#include "raylib.h"
#include "Level.h"

enum class GameState
{
	Playing
};

class Game
{
public:
	Game();
	~Game();
	void Run();
private:
	void Update(float dt);
	void Render();

	static constexpr int window_w = 1280;
	static constexpr int window_h = 720;

	Camera2D m_camera{};
	GameState m_state = GameState::Playing;

	Level m_level;
};