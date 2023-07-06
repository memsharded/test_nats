#include <iostream>
#include <string>

#include <nats/nats.h>

int main()
{
const std::string& url = "nats://localhost:4222";
// Connect to the NATS server
natsStatus status;
natsConnection* conn = nullptr;
status = natsConnection_ConnectTo(&conn, url.data());
if (status == NATS_OK)
{
std::cout << "Connected to " << url << std::endl;
}
else
{
std::cout << "Could not connect to " << url << std::endl;
}
// Cleanup and close the connection
natsConnection_Destroy(conn);
nats_Close();

return 0;
}