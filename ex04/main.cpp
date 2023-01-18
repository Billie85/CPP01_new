#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        std::cerr << "too many arguments" << std::endl;
        return 1;
    }
    std::string file_name(argv[1]);
    std::string str1(argv[2]);
    std::string str2(argv[3]);
    std::ifstream open_file(file_name.c_str());
    if (!open_file)
    {
        std::cerr << "Error : Unable to open file: " << file_name << std::endl;
        return 1;
    }
    if (str1 == str2)
        {
            std::cout << "it's the same try again" << std::endl;
            return 1;
        }
    std::string new_file = file_name + ".replace";
    std::ofstream output_file(new_file.c_str());
    if (!output_file)
    {
        std::cout << "Error : Unable to open file: " << output_file << std::endl;
        return 1; 
    }
    std::string line;
    while(std::getline(open_file, line))
    {
        size_t find_pos = line.find(str1);
        while (find_pos != std::string::npos)
        {
            line.erase(find_pos, str1.size());
            line.insert(find_pos, str2);
            find_pos = line.find(str1);
        }
        output_file << line << std::endl;
    }
    open_file.close();
    output_file.close();
    return 0;
}