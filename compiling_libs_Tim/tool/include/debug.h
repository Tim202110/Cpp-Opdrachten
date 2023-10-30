/**
 * @file debug.h
 * This is the debug file.
 * 
 * @brief The debug header file.
 * 
 * @section license License
 * Copyright 2010 Rik Teerling
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
 */

#ifndef DEBUG_H_
#define DEBUG_H_

#include <cstdio>
#include <stdarg.h>
#include <sstream>
#include <iostream>

/**
 * @brief Do we want to see Debug output?
 * 
 * @var DEBUG_OUTPUT
 * 1 if yes
 */
#define DEBUG_OUTPUT 1

/**
 * @brief The Debug class adds debugging opportunities to our game.
 * 
 * It only has static methods.
 * 
 * Also note there is no constructor and destructor. We can't create an instance of this class.
 * 
 * @par codeExample
 * Use the Debug class like this:
 * @code
 * Debug::log("Something particular went horribly wrong.");
 * @endcode
 * Or:
 * @code
 * std::stringstream ss;
 * ss << "Last update: " << timer.getTicks() << " ms ago (" << counter << " ticks)."; 
 * Debug::log(ss);
 * @endcode
 * Or:
 * @code
 * std::string s = "Hello";
 * s.append(" world!");
 * Debug::log(s);
 * @endcode
 */
class Debug
{
public:
	/**
	 * @brief log debugging information
	 * 
	 * @param c
	 * The const char* to log to the output.
	 */
	static void log(const char* c);
	/**
	 * @brief log debugging information
	 * 
	 * @param ss
	 * The stringstream to log to the output.
	 */
	static void log(std::stringstream& ss);
	/**
	 * @brief log debugging information
	 * 
	 * @param s
	 * The string& to log to the output.
	 */
	static void log(std::string& s);
};

#endif /* DEBUG_H_ */

