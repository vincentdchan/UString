//
// Created by Duzhong Chen on 2021/5/16.
//

#ifndef USTRING_USTRINGUTILS_H
#define USTRING_USTRINGUTILS_H

#include <cassert>

#if defined(_DEBUG)
#define USTR_ASSERT(s) assert(s)
#else
#define USTR_ASSERT(s)
#endif

#ifdef _WIN32
#define ATTR_FORMAT(N, M)
#define ATTR_UNUSED
#define PACK( __Declaration__ ) __pragma( pack(push, 1) ) __Declaration__ __pragma( pack(pop))
#define likely(x)       !!(x)
#define unlikely(x)     !!(x)
#define popen(x, y) _popen(x, y)
#define pclose(x) _pclose(x)
#define force_inline __forceinline
#define no_inline __declspec(noinline)
#define __exception
#define __maybe_unused
typedef SSIZE_T ssize_t;
#else
#define ATTR_FORMAT(N, M) __attribute__((format(printf, N, M)))
#define ATTR_UNUSED __attribute((unused))
#define PACK( __Declaration__ ) __Declaration__ __attribute__((__packed__))
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#define force_inline inline __attribute__((always_inline))
#define no_inline __attribute__((noinline))
#define __maybe_unused __attribute__((unused))
#endif

#endif //USTRING_USTRINGUTILS_H
