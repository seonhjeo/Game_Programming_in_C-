#ifndef GAME_HPP
#define GAME_HPP

#include "SDL.h"

class Game
{
public:
	Game();
	// ���� �ʱ�ȭ
	bool Initialize();
	// ������ ������ ������ ���� ���� ����
	void RunLoop();
	// ���� ����
	void Shutdown();
private:
	// ���� ������ ���� ���� �Լ�
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	// SDL�� ������ ������
	SDL_Window* mWindow;
	// ������ ��� ����Ǿ� �ϴ����� �Ǵ�
	bool mIsRunning;
};

#endif