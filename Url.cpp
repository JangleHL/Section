#include"Url.h"

URL::URL(std::string url)
{
    int firstColonlndex = url.find(":");
    scheme = url.substr(0, firstColonlndex);
    std::string restUrl = url.substr(firstColonlndex+3, url.length());
    
    int thirdSlashIndex = restUrl.find("/");
    authority = url.substr(firstColonlndex+3, thirdSlashIndex);
    path = restUrl.substr(thirdSlashIndex, url.length());
}

std::string URL::getScheme()
{
    return scheme;
}

std::string URL::getAuthority()
{
    return authority;
}

std::string URL::getPath()
{
    return path;
}

std::string URL::getCompleteURL()
{
    return scheme+"://"+authority+path;
}
