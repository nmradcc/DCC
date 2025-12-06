#pragma once

#include <dcc/dcc.hpp>

struct CommandStation : dcc::tx::CrtpBase<CommandStation> {
  friend dcc::tx::CrtpBase<CommandStation>;

private:
  // Write track outputs
  // N: negative track output state
  // P: positive track output state
  // first_bit: true if this is the first bit after preamble (when trigger flag is set)
  void trackOutputs(bool N, bool P, bool first_bit);
};
