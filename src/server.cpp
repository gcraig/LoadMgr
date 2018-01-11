/*
 * server.cpp
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
#include <string>
#include <algorithm>
#include "server.h"

int start_server(char **argv)
{
    std::cout
        << timestamp() << "starting loadsrv balancer ..." << std::endl
        << timestamp() << "options: " << std::endl;

        int len = (int)(sizeof(argv)/sizeof(argv[0]));
        for (int i=0; i<len; i++) 
        {
            std::string str = argv[i];
            std::transform(str.begin(), str.end(), str.begin(), ::tolower);
            std::cout << timestamp() << str << std::endl;
        }

    return EXIT_SUCCESS;
}
