#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
  const char *chinastring = "中国中国";
  std::cout << sizeof(chinastring) << std::endl;

  const std::string chinastr = "中国中国";
  std::cout << chinastr.size() << std::endl;
  std::cout << chinastr.length() << std::endl;
  std::cout << sizeof(chinastr) << std::endl;
  return 0;
}
