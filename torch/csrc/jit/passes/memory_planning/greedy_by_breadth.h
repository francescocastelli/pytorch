#pragma once

#include <torch/csrc/jit/passes/memory_planning.h>

namespace torch {
namespace jit {

std::vector<MemAllocation> greedyByOperatorBreadth(
    FastMap<const Value*, std::pair<UniqueLiveRange, size_t>> managed_values,
    std::vector<const Node*> ops);

} // namespace jit
} // namespace torch