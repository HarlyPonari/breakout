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

enum Direction{
  UP,
  RIGHT,
  DOWN,
  LEFT
};

typedef std::tuple<bool, Direction, glm::vec2> Collision;


const glm::vec2 PLAYER_SIZE(100.0f, 20.0f);
const float PLAYER_VELOCITY(500.0f);

const glm::vec2 INITIAL_BALL_VELOCITY(100.0f, -350.0f);
const float BALL_RADIUS = 12.5f;

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

  void DoCollisions();
  void ResetLevel();
  void ResetPlayer();
};
#endif // GAME_H
