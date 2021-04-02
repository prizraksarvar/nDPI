#ifndef LIBINJECTION_XSS
#define LIBINJECTION_XSS

#ifdef __cplusplus
extern "C" {
#endif

/**
 * HEY THIS ISN'T DONE
 */

/* pull in size_t */

#ifndef __KERNEL__
#include <string.h>
#endif

  int libinjection_is_xss(const char* s, size_t len, int flags);

#ifdef __cplusplus
}
#endif
#endif
