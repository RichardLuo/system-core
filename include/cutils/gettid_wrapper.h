#ifndef GETTID_WRAPPER_H
#define GETTID_WRAPPER_H

#include <sys/types.h>
#include <sys/syscall.h>  
#define gettid() syscall(__NR_gettid)


#endif /* GETTID_WRAPPER_H */
