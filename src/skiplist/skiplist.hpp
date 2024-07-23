#ifndef SKIPLIST_HPP
#define SKIPLIST_HPP
#include "random.h"
namespace talps {

template <typename T, typename Comparator> class SkipList {
public:
  SkipList(Comparator comp)
      : max_height_(1), head_(new Node), rnd_(0xdeadbeef) {}

private:
  struct Node {
    Node() : val(-1), next(nullptr) {}
    T val;
    Node *next;
  };

  int max_height_;
  Node *head_;
  leveldb::Random rnd_;
};

} // namespace talps

#endif
