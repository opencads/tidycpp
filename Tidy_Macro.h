
#ifndef __TIDY_MACRO_H__
#define __TIDY_MACRO_H__

#ifndef SUPPORT_ASSERT_NULLPTR
    #define SUPPORT_ASSERT_NULLPTR(POINTER) if(POINTER == SUPPORT_NULLPTR) { throw Tidy::Exception(Tidy::UTF8String("Null pointer exception. File ")+Tidy::UTF8String(__FILE__)+", Line "+Tidy::UTF8String(__LINE__)); }
#endif

#ifndef SUPPORT_NULLPTR
    #if defined(_MSC_VER) && _MSC_VER >= 1600
        #define SUPPORT_NULLPTR nullptr
    #else
        #ifndef NULL
            #define NULL 0
        #endif
        #define SUPPORT_NULLPTR NULL
    #endif
#endif

#ifndef SUPPORT_STD_STRINGSTREAM
    #ifdef _MSC_VER
        #if _MSC_VER >= 1400
            #define SUPPORT_STD_STRINGSTREAM 1
        #else
            #define SUPPORT_STD_STRINGSTREAM 0
        #endif
    #else
        #define SUPPORT_STD_STRINGSTREAM 1
    #endif
#endif

#ifndef SUPPORT_EXPLICIT
#ifdef _MSC_VER
    #if _MSC_VER >= 1800
        #define SUPPORT_EXPLICIT explicit
    #else
        #define SUPPORT_EXPLICIT
    #endif
#else
    #define SUPPORT_EXPLICIT explicit
#endif
#endif

#ifndef SUPPORT_INT64
    #ifdef _MSC_VER
        #if _MSC_VER <= 1800
            #define SUPPORT_INT64 __int64
        #else
            #define SUPPORT_INT64 std::int64_t
        #endif
    #else
        #define SUPPORT_INT64 std::int64_t
    #endif
#endif

#ifndef SUPPORT_STD_OSTRINGSTREAM
    #ifdef _MSC_VER
        #if _MSC_VER >= 1400
            #define SUPPORT_STD_OSTRINGSTREAM 1
        #else
            #define SUPPORT_STD_OSTRINGSTREAM 0
        #endif
    #else
        #define SUPPORT_STD_OSTRINGSTREAM 1
    #endif
#endif

#ifndef SUPPORT_STD_WSTRING
    #ifdef _MSC_VER
        #if _MSC_VER >= 1200
            #define SUPPORT_STD_WSTRING 1
        #else
            #define SUPPORT_STD_WSTRING 0
        #endif
    #else
        #define SUPPORT_STD_WSTRING 1
    #endif
#endif

#ifndef SUPPORT_RVALUE_REFERENCES
    #ifdef _MSC_VER
        #if _MSC_VER >= 1800
            #define SUPPORT_RVALUE_REFERENCES 1
        #else
            #define SUPPORT_RVALUE_REFERENCES 0
        #endif
    #else
        #define SUPPORT_RVALUE_REFERENCES 1
    #endif
#endif

#ifndef SUPPORT_STD_FUNCTION
    #ifdef _MSC_VER
        #if _MSC_VER >= 1800
            #define SUPPORT_STD_FUNCTION 1
        #else
            #define SUPPORT_STD_FUNCTION 0
        #endif
    #else
        #define SUPPORT_STD_FUNCTION 1
    #endif
#endif

#if SUPPORT_STD_FUNCTION
    #include <functional>
#endif
#endif
        