/**
 * Boost Software License - Version 1.0 - August 17th, 2003
 * Permission is hereby granted, free of charge, to any person
 * or organization obtaining a copy of the software and
 * accompanying documentation covered by this license
 * (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative
 * works of the Software, and to permit third-parties to whom the
 * Software is furnished to do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement,
 * including the above license grant, this restriction and the following
 * disclaimer, must be included in all copies of the Software, in whole or
 * in part, and all derivative works of the Software, unless such copies
 * or derivative works are solely in the form of machine-executable
 * object code generated by a source language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE AND
 * NON-INFRINGEMENT. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR ANYONE
 * DISTRIBUTING THE SOFTWARE BE LIABLE FOR ANY DAMAGES OR OTHER LIABILITY,
 * WHETHER IN CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef BIG_INT_HPP
#define BIG_INT_HPP

#include <iostream>
#include <string>

namespace libbig
{
// constants used with the bool largeInt::sign attribute
// this->sign = POSITIVE; instead of this->sign = true;
constexpr bool POSITIVE = true;
constexpr bool NEGATIVE = false;
class largeInt
{
  private:
    bool sign;
    std::string number;

  public:
    largeInt();

    explicit largeInt(int);
    explicit largeInt(long long int);
    explicit largeInt(std::string);

    largeInt operator+(largeInt);
    largeInt operator+(int);
    largeInt operator+(int64_t);

    largeInt operator-(largeInt);
    largeInt operator-(int);
    largeInt operator-(int64_t);

    largeInt operator*(largeInt);
    largeInt operator*(int);
    largeInt operator*(int64_t);

    largeInt operator/(largeInt);
    largeInt operator/(int);
    largeInt operator/(int64_t);

    largeInt operator%(largeInt);
    largeInt operator%(int);
    largeInt operator%(int64_t);

    largeInt &operator+=(largeInt);
    largeInt &operator+=(int);
    largeInt &operator+=(int64_t);

    largeInt &operator-=(largeInt);
    largeInt &operator-=(int);
    largeInt &operator-=(int64_t);

    largeInt &operator*=(largeInt);
    largeInt &operator*=(int);
    largeInt &operator*=(int64_t);

    largeInt &operator/=(largeInt);
    largeInt &operator/=(int);
    largeInt &operator/=(int64_t);

    largeInt operator%=(largeInt);
    largeInt operator%=(int);
    largeInt operator%=(int64_t);

    //   PREFIX OPERATORS

    //   POSTFIX OPERATORS

    largeInt &operator=(const largeInt &);
    largeInt &operator=(int);
    largeInt &operator=(int64_t);

    bool operator==(const largeInt &);
    bool operator==(int);
    bool operator==(int64_t);

    bool operator!=(largeInt);
    bool operator!=(int);
    bool operator!=(int64_t);

    bool operator<(largeInt);
    bool operator<(int);
    bool operator<(int64_t);

    bool operator>(largeInt);
    bool operator>(int);
    bool operator>(int64_t);

    bool operator<=(largeInt);
    bool operator<=(int);
    bool operator<=(int64_t);

    bool operator>=(largeInt);
    bool operator>=(int);
    bool operator>=(int64_t);

    friend std::istream &operator>>(std::istream &, largeInt &);
    friend std::ostream &operator<<(std::ostream &, const largeInt &);
};
} // namespace libbig

#endif