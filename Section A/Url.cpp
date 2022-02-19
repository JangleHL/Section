#include <iostream>
#include "url.h"
using namespace std;

URL::URL(string authority)
{
    this->authority = authority;
    scheme = "https";
    path = "/";
}

string URL::getURL()const
{
    return scheme + "://" + authority + path;
}
string URL::getScheme() const
{
    return scheme;
}
string URL::getAuthority() const
{
    return authority;
}
string URL::getPath() const
{
    return path;
}

ostream& operator<<(ostream &out, const URL&url)
{
    out<<"URL:"<<url.getURL()<<endl;
    out<<"SCHEME:"<<url.getScheme()<<endl;
    out<<"AUTHORITY:"<<url.getAuthority()<<endl;
    out<<"PATH:"<<url.getPath()<<endl;
    return out;
}