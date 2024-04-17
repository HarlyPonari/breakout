#ifndef GAME_H
#define GAME_H

#include"game_level.h"

#include <vector>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
enum GameState {
  GAME_ACTIVE,
  GAME_MENU,
  GAME_WIN,
};

class Game {
public:
  GameState State;
  bool Keys[1024];
  unsigned int Width, Height;
  std::vector<GameLevel> Levels;
  unsigned int Level;
  Game(unsigned int width, unsigned int height);
  ~Game();
  
  void Init();
  
  void ProcessInput(float deltaTime);
  void Update(float deltaTime);
  void Render(); 
};
#endif // GAME_H
