#include <string>
#include <string_view>
#include <unordered_map>
#include <valarray>
namespace talps {
template <class K, class Comparator> class SkipList {
public:
  void Get();
  void Put(std::string_view key, std::string_view value);

private:
  std::unordered_map<std::slice, std::slice> kvs_;
};
} // namespace talps
