#ifndef GAME_LEVEL_H
#define GAME_LEVEL_H

#include"sprite_renderer.h"
#include"game_object.h"
#include"resource_manager.h"

#include <vector>


class GameLevel{
public:
  std::vector<GameObject> Bricks;
  GameLevel() { }
  void Load(const char* file, unsigned int levelWidth, unsigned int levelHeight);
  void Draw(SpriteRenderer& renderer);
  bool IsCompleted();

private:
    void init(std::vector<std::vector<unsigned int>> tileData, unsigned int levelWidth, unsigned int levelHeight);
};


#endif // GAME_LEVEL_H
