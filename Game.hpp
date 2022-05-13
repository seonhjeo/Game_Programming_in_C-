#ifndef GAME_HPP
#define GAME_HPP

#include "SDL.h"

class Game
{
public:
	Game();
	// 게임 초기화
	bool Initialize();
	// 게임이 끝나기 전까지 게임 루프 실행
	void RunLoop();
	// 게임 종료
	void Shutdown();
private:
	// 게임 루프를 위한 헬퍼 함수
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	// SDL이 생성한 윈도우
	SDL_Window* mWindow;
	// 게임이 계속 실행되야 하는지를 판단
	bool mIsRunning;
};

#endif