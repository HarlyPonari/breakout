#ifndef GAME_H
#define GAME_H

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
  Game(unsigned int width, unsigned int height);
  ~Game();
  
  void Init();
  
  void ProcessInput(float deltaTime);
  void Update(float deltaTime);
  void Render(); 
};
#endif // GAME_H
