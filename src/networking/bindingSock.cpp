
/* networking/bindingSock.cpp
 *
 * Implementation file for the bindingSock class
 *
 * This class will act as the implementation of simpleSock used for the system
 *
 */

#include "bindingSock.h"

bpp::bindingSock::bindingSock(int domain_, int service_, int protocol_, int port_, u_long interface_):
    simpleSock(domain_, service_, protocol_, port_, interface_)
{
    /* Establish and test connection */
    int connection_ = connect_network_(get_sock_(), get_address_()));
    test_connection_(connection_);
}

int bpp::bindingSock::connect_network_(int sock_, struct sockaddr_in address_)
{
    return bind(sock_, (struct sockaddr *) &address_, sizeof(address_));
}