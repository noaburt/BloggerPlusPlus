
/* networking/bindingSock.h
 *
 * Header file for the bindingSock class
 *
 * This class will act as the implementation of simpleSock used for the system
 *
 */

#ifndef BINDINGSOCK_H
#define BINDINGSOCK_H

#include <stdio.h>
#include "simpleSock.h"

namespace bpp
{

    class bindingSock: public simpleSock
    {
    public:
        /* Constructor */
        bindingSock(int domain_, int service_, int protocol_, int port_, u_long interface_) :
            simpleSock(domain_, service_, protocol_, port_, interface_);
        int connect_network_(int sock_, struct sockaddr_in address_);
    };

} //bpp

#endif // BINDINGSOCK_H
