#include <iostream>
#include <filesystem>

namespace filesystem = std::filesystem;

void printDirectoryContents(filesystem::path& path)
{
    try
    {
        if (filesystem::is_directory(path))
        {
            std::cout << "path: " << path;
            for (const filesystem::directory_entry entry : filesystem::directory_iterator(path))
            {
                std::cout << entry.path() << std::endl;
            }
        }
        else
        {
            std::cout << "path either not here or has an error";
        }
    }
    catch(const filesystem::filesystem_error& e)
    {
        std::cerr << e.what() << '\n';
    }
}



int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cerr << "arguments expected";
        return 1;
    }

    filesystem::path p{argv[1]};

    printDirectoryContents(p);
}
