#include <iostream>
using namespace std;

class URL
{
    private:
    string scheme;
    string authority;
    string path;
    public:
    URL(std::string);
    string getURL() const;
    string getScheme() const;
    string getAuthority() const;
    string getPath() const;
    friend ostream& operator<<(ostream &out, const URL&url);
};
