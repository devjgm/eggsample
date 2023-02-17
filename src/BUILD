cc_library(
  name = "eggs",
  srcs = ["eggs.cc", "eggs.h"],
  deps = ["@abseil-cpp//absl/strings"]
)

cc_test(
  name = "eggs_test",
  srcs = [ "eggs_test.cc" ],
  deps = [":eggs", "@googletest//:gtest_main"]
)
