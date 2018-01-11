/*
 * main.cpp
 * 
 * Copyright 2018 gcraig <georgeacraig@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <iostream>
#include "server.h"

static void usage(void)
{
    std::cerr << "Usage: loadsrv [options] "
        << std::endl << " -p, --port [num]        Listening port, default 6065"
        << std::endl << " -s, --start             Start server"
        << std::endl << " -e, --stop              Stop server"
        << std::endl << " -f, --file [file]       Json configuration file"
        << std::endl << " -t, --threads [n]       Number of processing threads"
        << std::endl << " -r, --throttle [speed]  Bandwidth speed limit (Mbps)"
        << std::endl << " -?, --help              Help for more information"
        << std::endl << " -c, --cli               Start commandline client"
        << std::endl;
}

/*
 * LoadSrv is a load balancer server, a tcp/udp stream proxy,
 * throttler, connection manager, and/or port forwarder;
 * It is predominately an exercise in learning and development
 * of best practice thus innovation is not to be expected other
 * than building a better mousetrap. Possibly.
 */
int main(int argc, char **argv)
{
    int results = EXIT_SUCCESS;
    
    if (argc == 1)
        usage();

    std::string opt = argv[1];
    std::cout << opt << std::endl;
    if (opt.compare("-s") == 0)
        results = start_server(argv); 
    
    return results;
}
