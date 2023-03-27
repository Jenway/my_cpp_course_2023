#include "client.h"

using namespace std;

void Client::ChangeServerName(string name)
{
    ServerName = name;
    cout << "Server name changed => " << name << " !" << endl;
}

void Client::getClientNum()
{
    cout << "Client num:  " << ClientNum << endl;
}

Client::Client()
{
    ClientNum++;
}

Client::Client(string name)
{
    ClientNum++;
    ServerName = name;
}

Client::~Client()
{
    ClientNum--;
}

