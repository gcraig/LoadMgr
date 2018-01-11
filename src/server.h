/*
 * server.h
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

#ifndef SERVER_H_
#define SERVER_H_

#include <iostream>
#include <iomanip>
#include <ctime>

int start_server(char **argv);

static std::string timestamp()
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    std::stringstream sstream;
    sstream << std::put_time(&tm, "%d-%m-%Y %H:%M:%S ");
    return sstream.str();
}

#endif /* SERVER_H_ */