#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>

class Client
{
private:
    static int ClientNum;
    static std::string ServerName;

public:
    static void ChangeServerName(std::string name);
    static void getClientNum();
    Client();
    Client(std::string name);
    ~Client();
};

#endif