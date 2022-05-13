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
		"Game Programming in C++ (Chapter 1)", // ������ ����
		100,	// ������ ���� ��� x��ǥ
		100,	// ������ ���� ��� y��ǥ
		1024,	// ������ �ʺ�
		768,	// ������ ����
		0		// �÷���(0�� ��� �÷��׵� �������� ������ �ǹ�)
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