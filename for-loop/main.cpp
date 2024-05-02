#include <iostream>
#include <string>

int main()
{
    using std::string;
    using std::cout;

    string alphabet;

    for (char letter {'a'}; letter <= 'z'; ++letter)
        alphabet += letter;

    cout << alphabet;

    return 0;
}
