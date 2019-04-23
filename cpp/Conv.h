#include <string>
#include <memory>

namespace conv {
  class Condition {
  };
  class Constraint {
    std::string ctxName;
    std::unique_ptr<Condition> pre, post, inv;
  };
}
