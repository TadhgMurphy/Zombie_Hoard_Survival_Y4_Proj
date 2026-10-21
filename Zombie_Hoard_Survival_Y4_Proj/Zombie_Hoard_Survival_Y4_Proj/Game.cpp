#include "Game.h"
#include "raymath.h"

Game::Game()
{
	InitWindow(window_w, window_h, "Zombie Horde Survival");
	SetTargetFPS(60);

	m_camera.offset = { window_w / 2.0f, window_h / 2.0f };
	m_camera.target = { window_w / 2.0f, window_h / 2.0f };
	m_camera.rotation = 0.0f;
	m_camera.zoom = 1.0f;
}

Game::~Game()
{
	CloseWindow();
}

void Game::Run()
{
	while (!WindowShouldClose())
	{
		float dt = GetFrameTime();
		if (dt > 0.1f)
			dt = 0.1f;

		Update(dt);
		Render();
	}
}

void Game::Update(float dt)
{
	(void)dt;
	switch (m_state)
	{
	case GameState::Playing:
		break;
	}
}

void Game::Render()
{
	BeginDrawing();
	ClearBackground(Color{ 15,15,15,255 });

	BeginMode2D(m_camera);
	EndMode2D();

	DrawFPS(10, 10);
	EndDrawing();
}
