
#ifndef __TIDY_EXCEPTION_H__
#define __TIDY_EXCEPTION_H__
#include "Tidy_Macro.h"
#include <exception>
#include "Tidy_String.h"
namespace Tidy {
        class LocaleString;
        class UTF8String;
        class GBKString;
        class Exception : public std::exception {
        public:
            LocalString Message;
            Exception(LocaleString message) : std::exception() {
                this->Message = message;
            }
        };
}
#endif