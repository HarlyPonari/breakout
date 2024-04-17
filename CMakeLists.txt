cmake_minimum_required(VERSION 3.17)
project(main)

set(SOURCES 
  src/stb.cpp
  src/main.cpp
  src/shader.cpp
  src/texture.cpp
  src/game.cpp
  src/resource_manager.cpp
  src/glad.c
  src/sprite_renderer.cpp
  src/game_object.cpp
  src/game_level.cpp
  
  
)

include_directories(
  inc 
)

add_executable(main ${SOURCES})

add_custom_command(TARGET main PRE_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                       ${CMAKE_SOURCE_DIR}/res/ $<TARGET_FILE_DIR:main>)


target_include_directories(${PROJECT_NAME} PRIVATE 
  ${CMAKE_SOURCE_DIR}/inc
  ${CMAKE_SOURCE_DIR}/inc/stb
)

target_link_libraries(${PROJECT_NAME} 
  glfw
  GL
  dl
  
)

