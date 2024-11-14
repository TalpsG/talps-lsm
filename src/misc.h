
#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>
namespace Talps {
class Arena {
  Arena();
  ~Arena();
  void *using_;
  std::vector<void *> used_;
};
struct Slice {
  Slice(std::string_view str);
  char *data_;
  uint32_t length_;
};
} // namespace Talps
