#include <beastquest/beastquest.hh>
#include <iostream>

int main(int argc, char **argv) {
  // Check number of arguments provided
  if (argc != 2) {
    std::cerr << "Error: Incorrect amount of arguments" << std::endl
              << "Usage: http_client <URL>" << std::endl;
    return EXIT_FAILURE;
  }

  // Get URL from argument and handle exception
  quest::Url url;
  try {
    url = quest::Url(argv[1]);
  } catch (const std::runtime_error &e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  // Perform GET request and print response
  auto res = quest::Get(url);
  std::cout << res.content << std::endl;

  return EXIT_SUCCESS;
}
