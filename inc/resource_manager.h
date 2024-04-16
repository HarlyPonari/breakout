#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

#include<glad/glad.h>

#include<map>
#include<string>

#include "shader.h"
#include "texture.h"

class ResourceManager {
public:
  // Keep a list of the created shaders and loaded textures
  static std::map<std::string, Shader> Shaders;
  static std::map<std::string, Texture2D> Textures;

  //Load and compile the shader program from the given file paths
  static Shader LoadShader(const char* vShaderFile, const char* fShaderFile, const char* gShaderFile, std::string name);
  static Shader& GetShader(std::string name);

  //Load and create a texture from the given file path
  static Texture2D LoadTexture(const char* file, bool alpha, std::string name);
  static Texture2D& GetTexture(std::string name);

  static void Clear();

private:
  // private constructor that this object remains static/singleton
  ResourceManager() { }
  static Shader loadShaderFromFile(const char* vShaderFile, const char* fShaderFile, const char* gShaderFile = nullptr);
  static Texture2D loadTextureFromFile(const char* file, bool alpha);

};
#endif // RESOURCE_MANAGER_H
