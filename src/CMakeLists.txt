add_library(eggs eggs.cc eggs.h)
target_link_libraries(eggs project-settings)

add_executable(eggsample main.cc)
target_link_libraries(eggsample eggs project-settings)
