
/* networking/simpleSock.h
 *
 * Header file for the simpleSock class
 *
 * This class will provide a simple way to create and open generic sockets, which will be
 * used for hosting a webpage.
 *
 */

#ifndef SIMPLESOCK_H
#define SIMPLESOCK_H

#include <stdio.h>
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>

namespace bpp
{

    class simpleSock
    {
    private:
        struct sockaddr_in address_;
        int sock_;
        int connection_;

    public:
        /* Constructor */
        simpleSock(int domain_, int service_, int protocol_, int port_, u_long interface_);

        /* Virtual function to connect */
        virtual int connect_network_(int sock_, struct sockaddr_in address_) = 0;

        /* Test sockets and connection */
        void test_connection_(int);

        /* Getter functions */
        struct sockaddr_in get_address_();
        int get_sock_();
        int get_connection_();

    };

} //bpp


#endif //SIMPLESOCK_H
