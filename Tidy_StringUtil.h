#ifndef __TIDY_STRING_UTIL_H__
#define __TIDY_STRING_UTIL_H__

#include "Tidy_Macro.h"
#include <string>
#include <vector>
namespace Tidy {
    class  StringUtil {
    public:
    static unsigned int GetLocale();
    static std::string To(const std::string &value, unsigned int fromCodePage, unsigned int toCodePage);
    static std::string To(const wchar_t *value, unsigned int toCodePage);
#if SUPPORT_STD_WSTRING
    static std::wstring To(const std::string &value, unsigned int fromCodePage);
#endif
    };
};
#endif