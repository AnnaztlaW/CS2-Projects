#ifndef UNTILITIES_HPP
#define UNTILITIES_HPP

//Anna Waltz
//Project Three


#include "stack.hpp"
#include "../string/string.hpp"

String expression(std:: istream&, std::ostream&);
String infixToPostfix(std:: istream&, std::ostream&);
String infixToPrefix(std:: istream&, std::ostream&);

String postfixToAs(const String&);
String evaluate(const String&, const String&, const String&, const String&);

#endif