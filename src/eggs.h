#ifndef EGGSAMPLE_SRC_EGGS_H
#define EGGSAMPLE_SRC_EGGS_H

#include <string>

namespace eggsample {

// Comment
class Eggs {
 public:
  std::string Message() const;

 private:
  std::string greeting_ = "Hello";
};

}  // namespace eggsample

#endif  // EGGSAMPLE_SRC_EGGS_H
