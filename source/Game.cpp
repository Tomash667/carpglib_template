#include "Pch.h"
#include "Game.h"
#include <Engine.h>
#include <Render.h>
#include <Input.h>

Game::Game() : engine(new Engine)
{
}

Game::~Game()
{
	delete engine;
}

void Game::Run()
{
	engine->SetTitle("carpglib template");
	app::render->SetShadersDir("../carpglib/shaders");
	engine->Start(this);
}

void Game::OnUpdate(float dt)
{
	if(app::input->Shortcut(KEY_ALT, Key::F4) || app::input->Pressed(Key::Escape))
	{
		engine->Shutdown();
		return;
	}
	if(app::input->Shortcut(KEY_ALT, Key::Enter))
		engine->ChangeMode(!engine->IsFullscreen());
	if(app::input->Shortcut(KEY_CONTROL, Key::U))
		engine->UnlockCursor();
}
