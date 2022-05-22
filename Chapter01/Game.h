#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include "Vector2.h"

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
	// �׷����� �������� ������
	SDL_Renderer* mRenderer;
	// ������ ��� ����Ǿ� �ϴ����� �Ǵ�
	bool mIsRunning;

	Uint32 mTicksCount;

	Vector2 mBallPos; // �� ��ġ
	Vector2 mPaddlePos; // �е� ��ġ
	Vector2 mBallVel; // �� �ӵ�

	int mPaddleDir;
};

#endif