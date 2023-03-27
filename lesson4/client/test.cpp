#include "client.h"

#include <string>

using namespace std;

string Client::ServerName = "Default";
int Client::ClientNum = 0;

int main(void)
{
    Client server_a("server_a");
    Client server_b("server_b");
    Client server_c;
    server_c.ChangeServerName("server_c");
    Client::getClientNum();
    return 0;
}