
/* networking/simpleSock.cpp
 *
 * Implementation file for the simpleSock class
 *
 * This class will provide a simple way to create and open generic sockets, which will be
 * used for hosting a webpage.
 *
 */

#include "simpleSock.h"

/* Default constructor */
bpp::simpleSock::simpleSock(int domain_, int service_, int protocol_, int port_, u_long interface_)
{
    /* Initialise the connection and bind to network (name socket) */

    /* Address structure must be defined */
    address_.sin_family = domain_;
    address_.sin_port = htons(port_);
    address_.sin_addr.s_addr = htonl(interface_);

    /* Establish and test socket */
    sock_ = socket(domain_, service_, protocol_);
    test_connection_(sock_);

}

/* Test components of socket connection */
bpp::simpleSock::test_connection_(int item_toTest_)
{
    if (item_toTest_ < 0)
    {
        perror("Failed to connect"); // maybe change error handling future
        exit(EXIT_FAILED);
    }
}

/* Getter functions */
struct sockaddr_in bpp::simpleSock::get_address_()
{
    return address_;
};

int bpp::simpleSock::get_sock_()
{
    return sock_;
}

int bpp::simpleSock::get_connection_()
{
    return connection_;
}
