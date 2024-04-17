#include"game_object.h"

GameObject::GameObject()
  : Position(0, 0), Size(1, 1), Velocity(0.0f), Color(1.0f), Rotation(0.0f), Sprite(), IsSolid(false), Destroyed(false){}

GameObject::GameObject(glm::vec2 pos, glm::vec2 size, Texture2D sprite, glm::vec3 color, glm::vec2 velocity)
  : Position(pos), Size(size), Velocity(velocity), Color(color), Rotation(0.0f), Sprite(sprite), IsSolid(false), Destroyed(false){}

void GameObject::Draw(SpriteRenderer &renderer){
  renderer.DrawSprite(this->Sprite, this->Position, this->Size, this->Rotation, this->Color);
}

// bool GameObject::CheckCollision(GameObject& one, GameObject& two){
//   bool collisionX = one.Position.x + one.Size.x >= two.Position.x && two.Position.x + two.Size.x >= one.Position.x;
//   bool collisionY = one.Position.y + one.Size.y >= two.Position.y && two.Position.y + two.Size.y >= one.Position.y;
// 
//   return collisionX && collisionY;
// }
