/*
Copyright (c) 2022 Bert Melis. All rights reserved.

This work is licensed under the terms of the MIT license.  
For a copy, see <https://opensource.org/licenses/MIT> or
the LICENSE file.
*/

#if defined(__linux__)

#include "ClientPosixIPAddress.h"

IPAddress::IPAddress()
: _address(0) {
  // empty
}

IPAddress::IPAddress(uint8_t p0, uint8_t p1, uint8_t p2, uint8_t p3)
: _address(0) {
  _address = static_cast<uint32_t>(p0) << 24 | static_cast<uint32_t>(p1) << 16 | static_cast<uint32_t>(p2) << 8 | p3;
}

IPAddress::IPAddress(uint32_t address)
: _address(address) {
  // empty
}

IPAddress::operator uint32_t() {
  return _address;
}

bool IPAddress::operator==(IPAddress other) {
  return _address == other._address;
}

bool IPAddress::operator!=(IPAddress other) {
  return _address != other._address;
}

#endif
