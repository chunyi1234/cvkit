/*
 * This file is part of the Computer Vision Toolkit (cvkit).
 *
 * Author: Heiko Hirschmueller
 *
 * Copyright (c) 2016 Roboception GmbH
 * Copyright (c) 2014 Institute of Robotics and Mechatronics, German Aerospace Center
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef GUTIL_MISC_H
#define GUTIL_MISC_H

#include "exception.h"

#include <string>
#include <set>
#include <vector>
#include <ios>

namespace gutil
{

/**
 * Returns true if the byte order is set to most significant byte first and
 * false if the least significant byte is first.
 */

bool isMSBFirst();

/**
 * Removes white space from the beginning and the end of a std::string.
 */

void trim(std::string &s);

/**
 * Splits a std::string into an sub components and adds them to the given vector.
 */

void split(std::vector<std::string> &list, const std::string &s, char delim=' ',
           bool skip_empty=true);

/**
 * Returns a list of file names that match the given prefix and suffix.
 */

void getFileList(std::set<std::string> &list, const std::string &prefix, const std::string &suffix);

/**
 * Forces given file to be synchronized to the device.
 */

bool syncFileByName(const char *name);

/**
  Reads a std::string from the given input stream. If the std::string does not match the
  expected character sequence, then the failbit is set.
*/

bool skip(std::istream &in, const char *expected);

}

#endif
