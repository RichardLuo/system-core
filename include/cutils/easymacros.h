/******************************************************************
 * @file   easymacros.h
 * @author Richard Luo
 * @date   2011/10/22 09:55:18
 * 
 * @brief  
 * 
 ****************************************************************** 
 */

#ifndef _EASYMACROS_H
#define _EASYMACROS_H

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#endif

#define LOG_IF_RETURN_CODE(cond,code,info_fmt, ...) \
    do {                                            \
        if ((cond)) {                               \
            LOGE(info_fmt, ## __VA_ARGS__);        \
            return (code);                          \
        }                                           \
    } while(0)

#define LOG_IF_RETURN_NULL(cond,info_fmt, ...)  \
    do {                                        \
        if ((cond)) {                           \
            LOGE(info_fmt, ## __VA_ARGS__);    \
            return (NULL);                      \
        }                                       \
    } while(0)

#define LOG_IF_RETURN_FALSE(cond,info_fmt, ...) \
    do {                                        \
        if ((cond)) {                           \
            LOGE(info_fmt, ## __VA_ARGS__);    \
            return false;                       \
        }                                       \
    } while (0)

#define LOG_IFE_RETURN(error,info_fmt, ...)     \
    do {                                        \
        int error_code = (error);               \
        if ((error_code) != 0) {                \
            LOGE(info_fmt, ## __VA_ARGS__);    \
            return (error_code);                \
        }                                       \
    } while(0)


#define LOG_IF_RETURN_VOID(cond,info_fmt, ...)  \
    do {                                        \
        if ((cond) != 0) {                      \
            LOGE(info_fmt, ## __VA_ARGS__);    \
            return;                             \
        }                                       \
    } while(0)

#define LOG_IF_RETURN(cond,info_fmt, ...)       \
    do {                                        \
        if ((cond)) {                           \
            LOGE(info_fmt, ## __VA_ARGS__);    \
            return (-1);                        \
        }                                       \
    } while (0)

#define LOG_IF_EXIT(cond,info_fmt, ...)             \
    do {                                            \
        if ((cond)) {                               \
            LOGE(info_fmt, ## __VA_ARGS__);        \
            LOG_ALWAYS_FATAL(" CRASHED HERE!!");    \
        }                                           \
    } while (0)

#define LOG_EXIT(info_fmt, ...)                 \
    do {                                        \
        LOGE(info_fmt, ## __VA_ARGS__);        \
        LOG_ALWAYS_FATAL(" CRASHED HERE!!");    \
    } while (0)

#define LOG_IF_EXECUTE(cond,code,info_fmt, ...) \
    do {                                        \
        if ((cond)) {                           \
            LOGE(info_fmt, ## __VA_ARGS__);    \
            code;                               \
        }                                       \
    } while (0)

#define LOG_IF_GOTO(cond,label,info_fmt, ...)   \
    do {                                        \
        if ((cond)) {                           \
            LOGE(info_fmt, ## __VA_ARGS__);    \
            goto label;                         \
        }                                       \
    } while (0)

#define LOG_IF(cond,info_fmt, ...)              \
    do {                                        \
        if ((cond)) {                           \
            LOGE(info_fmt, ## __VA_ARGS__);    \
        }                                       \
    } while(0)


#endif /* _EASYMACROS_H */



