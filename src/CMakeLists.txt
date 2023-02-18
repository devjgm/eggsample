find_package(absl CONFIG REQUIRED)

add_library(eggs eggs.cc eggs.h)
target_link_libraries(eggs project-settings absl::strings)

add_executable(eggsample main.cc)
target_link_libraries(eggsample eggs project-settings)

if (BUILD_TESTING)
  find_package(GTest CONFIG REQUIRED)
  add_executable(eggs_test eggs_test.cc)
  target_link_libraries(eggs_test eggs project-settings GTest::gtest GTest::gtest_main)
  add_test(NAME eggs_test COMMAND eggs_test)
endif()

