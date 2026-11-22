#include<iostream>
#include<filesystem>
#include<string>
#include<fstream>
namespace fs = std::filesystem;
int main() {
	std::string fileext;
	std::string path;
	std::string projectname;
	std::cout << "Path to build: ";
	std::cin >> path;
	std::cout << std::endl <<"Whats the name of your project: ";
	std::cin >> projectname;
	std::cout << std::endl << "Language(Only One Language): ";
	std::cin >> fileext;
	fs::path projectPath = fs::path(path)/projectname;
	fs::create_directories(projectPath / "src");
	fs::create_directories(projectPath / "graphics");
	fs::create_directories(projectPath / "bin");
	fs::path srcpath = fs::path(path)/projectname/"src";
	std::ofstream file(srcpath/("main." + fileext));
}