#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

// Base case of recursion: No arguments left to process
void format_impl(std::ostringstream &oss, const std::string &fmt, size_t pos) {
  oss << fmt.substr(pos);
}

// Recursive function to process arguments one by one
template <typename T, typename... Args>
void format_impl(std::ostringstream &oss, const std::string &fmt, size_t pos,
                 const T &arg, const Args &...args) {
  size_t next_brace = fmt.find('{', pos);
  if (next_brace != std::string::npos) {
    // Process the part of the format string before the current placeholder
    oss << fmt.substr(pos, next_brace - pos);

    // Process the argument
    size_t end_brace = fmt.find('}', next_brace + 1);
    if (end_brace != std::string::npos) {
      oss << " " << std::boolalpha << arg; // here adds a white space

      // Continue with the rest of the format string and remaining arguments
      format_impl(oss, fmt, end_brace + 1, args...);
    } else {
      // Invalid format string (missing closing brace)
      oss << fmt.substr(next_brace);
    }
  } else {
    // No more placeholders, append the rest of the format string
    oss << fmt.substr(pos);
  }
}

// Entry point for format function
template <typename... Args>
void format(const std::string &fmt, const Args &...args) {
  std::ostringstream oss;
  format_impl(oss, fmt, 0, args...);
  std::cout << oss.str();
}
