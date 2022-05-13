#include "Game.hpp"

Game::Game()
{
	this->mWindow = nullptr;
	mIsRunning = true;
}

bool Game::Initialize()
{
	int sdlResult = SDL_Init(SDL_INIT_VIDEO);
	if (sdlResult != 0)
	{
		SDL_Log("Unable to initialize SDL: %s\n", SDL_GetError());
		return false;
	}

	mWindow = SDL_CreateWindow(
		"Game Programming in C++ (Chapter 1)", // 윈도우 제목
		100,	// 윈도우 좌측 상단 x좌표
		100,	// 윈도우 좌측 상단 y좌표
		1024,	// 윈도우 너비
		768,	// 윈도우 높이
		0		// 플래그(0은 어떠한 플래그도 설정되지 않음을 의미)
	);
	if (!mWindow)
	{
		SDL_Log("Failed to create window: %s", SDL_GetError());
		return false;
	}
	return true;
}

void Game::RunLoop()
{
	while (mIsRunning)
	{
		ProcessInput();
		UpdateGame();
		GenerateOutput();
	}
}

void Game::Shutdown()
{
	SDL_DestroyWindow(mWindow);
	SDL_Quit();
}


void Game::ProcessInput()
{
	SDL_Event event;
}

void Game::UpdateGame()
{

}

void Game::GenerateOutput()
{

}