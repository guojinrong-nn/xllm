#pragma once

#include <optional>
#include <string>

namespace xllm {
namespace edge {

struct Options
{
  std::string model_path;
  std::optional<std::string> lora_model_path;
  std::string prompt;
};

} // namespace edge
} // namespace xllm
