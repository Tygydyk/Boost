#include <boost/filesystem/fstream.hpp>
#include <string>
 
namespace fs = boost::filesystem;
 
int main(int argc, char* argv)
{
  std::wstring filepath(L"C:\тест");
  fs::ofstream(filepath);
  return 0;
}
