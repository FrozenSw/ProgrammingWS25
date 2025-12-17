#include <iostream>
// argv[] is an array of pointers
// Alternative: int main(int argc, char** argv)
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: hello <your name>" << std::endl;
        return 1;
    }
    // print hello message
    std::cout << "Hello " << argv[1] << "!" << std::endl;
        return 0;
}