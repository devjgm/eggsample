#include "src/eggs.h"

#include "absl/strings/str_cat.h"

namespace eggsample {
std::string Eggs::Message() const {
  // ...
  return absl::StrCat(greeting_, " Eggs");
}
}  // namespace eggsample
