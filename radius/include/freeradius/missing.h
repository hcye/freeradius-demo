#ifndef _FR_MISSING_H
#define _FR_MISSING_H

/*
 * missing.h	Replacements for functions that are or can be
 *		missing on some platforms.
 *		HAVE_* and WITH_* defines are substituted at
 *		build time by make with values from autoconf.h.
 *
 * Version:	$Id: 5698797b0e0831c7d6b27ad6db46f815c6c3f23d $
 *
 */
RCSIDH(missing_h, "$Id: 5698797b0e0831c7d6b27ad6db46f815c6c3f23d $")

#if 1
#  include <stdint.h>
#endif

#if 1
#  include <stddef.h>
#endif

#if 1
#  include <sys/types.h>
#endif

#if 1
#  include <inttypes.h>
#endif

#if 1
#  include <strings.h>
#endif

#if 1
#  include <string.h>
#endif

#if 1
#  include <netdb.h>
#endif

#if 1
#  include <netinet/in.h>
#endif

#if 1
#  include <arpa/inet.h>
#endif

#if 1
#  include <sys/select.h>
#endif

#if 1
#  include <sys/socket.h>
#endif

#if 1
#  include <unistd.h>
#endif

#if !1
#  include <stdarg.h>
#endif

#if 1
#  include <errno.h>
#endif

/*
 *  Check for inclusion of <time.h>, versus <sys/time.h>
 *  Taken verbatim from the autoconf manual.
 */
#if 1
#  include <sys/time.h>
#  include <time.h>
#else
#  if HAVE_SYS_TIME_H
#    include <sys/time.h>
#  else
#    include <time.h>
#  endif
#endif

#if 1
#  include <openssl/ssl.h>
#endif

#if 1
#  include <openssl/hmac.h>
#endif

#if 1
#  include <openssl/asn1.h>
#endif

#if 1
#  include <openssl/conf.h>
#endif

/*
 *	Don't look for winsock.h if we're on cygwin.
 */
#if !defined(__CYGWIN__) && 0
#  include <winsock.h>
#endif

#ifdef __APPLE__
#undef DARWIN
#define DARWIN (1)
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 *	Functions from missing.c
 */
#if !1
int strncasecmp(char *s1, char *s2, int n);
#endif

#if !1
int strcasecmp(char *s1, char *s2);
#endif

#if !1
char *strsep(char **stringp, char const *delim);
#endif

#if !1
struct tm;
struct tm *localtime_r(time_t const *l_clock, struct tm *result);
#endif

#if !1
char *ctime_r(time_t const *l_clock, char *l_buf);
#endif

#if !1
int		inet_pton(int af, char const *src, void *dst);
#endif
#if !1
char const	*inet_ntop(int af, void const *src, char *dst, size_t cnt);
#endif
#if 1
int		closefrom(int fd);
#endif

#if !1
#if 1
#    define setlinebuf(x) setvbuf(x, NULL, _IOLBF, 0)
#  else
#    define setlinebuf(x)     0
#  endif
#endif

#ifndef INADDR_ANY
#  define INADDR_ANY      ((uint32_t) 0x00000000)
#endif

#ifndef INADDR_LOOPBACK
#  define INADDR_LOOPBACK ((uint32_t) 0x7f000001) /* Inet 127.0.0.1 */
#endif

#ifndef INADDR_NONE
#  define INADDR_NONE     ((uint32_t) 0xffffffff)
#endif

#ifndef INADDRSZ
#  define INADDRSZ 4
#endif

#ifndef INET_ADDRSTRLEN
#  define INET_ADDRSTRLEN 16
#endif

#ifndef AF_UNSPEC
#  define AF_UNSPEC 0
#endif

#ifndef AF_INET6
#  define AF_INET6 10
#endif

#if !1
struct in6_addr
{
	union {
		uint8_t	u6_addr8[16];
		uint16_t u6_addr16[8];
		uint32_t u6_addr32[4];
	} in6_u;
#  define s6_addr	in6_u.u6_addr8
#  define s6_addr16	in6_u.u6_addr16
#  define s6_addr32	in6_u.u6_addr32
};

#  ifndef IN6ADDRSZ
#    define IN6ADDRSZ 16
#  endif

#  ifndef INET6_ADDRSTRLEN
#    define INET6_ADDRSTRLEN 46
#  endif

#  ifndef IN6ADDR_ANY_INIT
#    define IN6ADDR_ANY_INIT 		{{{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }}}
#  endif

#  ifndef IN6ADDR_LOOPBACK_INIT
#    define IN6ADDR_LOOPBACK_INIT 	{{{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 }}}
#  endif

#  ifndef IN6_IS_ADDR_UNSPECIFIED
#    define IN6_IS_ADDR_UNSPECIFIED(a) \
	(((__const uint32_t *) (a))[0] == 0				      \
	 && ((__const uint32_t *) (a))[1] == 0				      \
	 && ((__const uint32_t *) (a))[2] == 0				      \
	 && ((__const uint32_t *) (a))[3] == 0)
#  endif

#  ifndef IN6_IS_ADDR_LOOPBACK
#    define IN6_IS_ADDR_LOOPBACK(a) \
	(((__const uint32_t *) (a))[0] == 0				      \
	 && ((__const uint32_t *) (a))[1] == 0				      \
	 && ((__const uint32_t *) (a))[2] == 0				      \
	 && ((__const uint32_t *) (a))[3] == htonl (1))
#  endif

#  ifndef IN6_IS_ADDR_MULTICAST
#    define IN6_IS_ADDR_MULTICAST(a) (((__const uint8_t *) (a))[0] == 0xff)
#  endif

#  ifndef IN6_IS_ADDR_LINKLOCAL
#    define IN6_IS_ADDR_LINKLOCAL(a) \
	((((__const uint32_t *) (a))[0] & htonl (0xffc00000))		      \
	 == htonl (0xfe800000))
#  endif

#  ifndef IN6_IS_ADDR_SITELOCAL
#    define IN6_IS_ADDR_SITELOCAL(a) \
	((((__const uint32_t *) (a))[0] & htonl (0xffc00000))		      \
	 == htonl (0xfec00000))
#  endif

#  ifndef IN6_IS_ADDR_V4MAPPED
#    define IN6_IS_ADDR_V4MAPPED(a) \
	((((__const uint32_t *) (a))[0] == 0)				      \
	 && (((__const uint32_t *) (a))[1] == 0)			      \
	 && (((__const uint32_t *) (a))[2] == htonl (0xffff)))
#  endif

#  ifndef IN6_IS_ADDR_V4COMPAT
#    define IN6_IS_ADDR_V4COMPAT(a) \
	((((__const uint32_t *) (a))[0] == 0)				      \
	 && (((__const uint32_t *) (a))[1] == 0)			      \
	 && (((__const uint32_t *) (a))[2] == 0)			      \
	 && (ntohl (((__const uint32_t *) (a))[3]) > 1))
#  endif

#  ifndef IN6_ARE_ADDR_EQUAL
#    define IN6_ARE_ADDR_EQUAL(a,b) \
	((((__const uint32_t *) (a))[0] == ((__const uint32_t *) (b))[0])     \
	 && (((__const uint32_t *) (a))[1] == ((__const uint32_t *) (b))[1])  \
	 && (((__const uint32_t *) (a))[2] == ((__const uint32_t *) (b))[2])  \
	 && (((__const uint32_t *) (a))[3] == ((__const uint32_t *) (b))[3]))
#  endif
#endif /* HAVE_STRUCT_IN6_ADDR */

/*
 *	Functions from getaddrinfo.c
 */

#if !1
struct sockaddr_storage
{
    uint16_t ss_family;		/* Address family, etc.  */
    char ss_padding[128 - (sizeof(uint16_t))];
};
#endif

#if !1
/* for old netdb.h */
#  ifndef EAI_SERVICE
#    define EAI_MEMORY      2
#    define EAI_FAMILY      5	/* ai_family not supported */
#    define EAI_NONAME      8	/* hostname nor servname provided, or not known */
#    define EAI_SERVICE     9	/* servname not supported for ai_socktype */
#  endif

/* dummy value for old netdb.h */
#  ifndef AI_PASSIVE
#    define AI_PASSIVE      1
#    define AI_CANONNAME    2
#    define AI_NUMERICHOST  4
#    define NI_NUMERICHOST  2
#    define NI_NAMEREQD     4
#    define NI_NUMERICSERV  8

struct addrinfo
{
  int ai_flags;			/* Input flags.  */
  int ai_family;		/* Protocol family for socket.  */
  int ai_socktype;		/* Socket type.  */
  int ai_protocol;		/* Protocol for socket.  */
  socklen_t ai_addrlen;		/* Length of socket address.  */
  struct sockaddr *ai_addr;	/* Socket address for socket.  */
  char *ai_canonname;		/* Canonical name for service location.  */
  struct addrinfo *ai_next;	/* Pointer to next in list.  */
};

#  endif /* AI_PASSIVE */
#endif /* HAVE_STRUCT_ADDRINFO */

/* Translate name of a service location and/or a service name to set of
   socket addresses. */
#if !1
int getaddrinfo(char const *__name, char const *__service,
		struct addrinfo const *__req,
		struct addrinfo **__pai);

/* Free `addrinfo' structure AI including associated storage.  */
void freeaddrinfo (struct addrinfo *__ai);

/* Convert error return from getaddrinfo() to a string.  */
char const *gai_strerror (int __ecode);
#endif

/* Translate a socket address to a location and service name. */
#if !1
int getnameinfo(struct sockaddr const *__sa,
		socklen_t __salen, char *__host,
		size_t __hostlen, char *__serv,
		size_t __servlen, unsigned int __flags);
#endif

/*
 *	Functions from snprintf.c
 */
#if !1
int vsnprintf(char *str, size_t count, char const *fmt, va_list arg);
#endif

#if !1
int snprintf(char *str, size_t count, char const *fmt, ...);
#endif

/*
 *	Functions from strl{cat,cpy}.c
 */
#if 1
size_t strlcpy(char *dst, char const *src, size_t siz);
#endif

#if 1
size_t strlcat(char *dst, char const *src, size_t siz);
#endif

#ifndef INT16SZ
#  define INT16SZ (2)
#endif

#if !1
struct tm *gmtime_r(time_t const *l_clock, struct tm *result);
#endif

#if !1
int vdprintf (int fd, char const *format, va_list args);
#endif

#if !1
int gettimeofday (struct timeval *tv, void *tz);
#endif

/*
 *	Work around different ctime_r styles
 */
#if POSIXSTYLE && (CTIMERSTYLE == SOLARISSTYLE)
#  define CTIME_R(a,b,c) ctime_r(a,b,c)
#  define ASCTIME_R(a,b,c) asctime_r(a,b,c)
#else
#  define CTIME_R(a,b,c) ctime_r(a,b)
#  define ASCTIME_R(a,b,c) asctime_r(a,b)
#endif

#ifdef WIN32
#  undef interface
#  undef mkdir
#  define mkdir(_d, _p) mkdir(_d)
#  define FR_DIR_SEP '\\'
#  define FR_DIR_IS_RELATIVE(p) ((*p && (p[1] != ':')) || ((*p != '\\') && (*p != '\\')))
#else
#  define FR_DIR_SEP '/'
#  define FR_DIR_IS_RELATIVE(p) ((*p) != '/')
#endif

#ifndef offsetof
#  define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
#endif

void timeval2ntp(struct  timeval const *tv, uint8_t *ntp);
void ntp2timeval(struct timeval *tv, char const *ntp);

/*
 *	This is really hacky. Any code needing to perform operations on 128bit integers,
 *	or return 128BIT integers should check for HAVE_128BIT_INTEGERS.
 */
#if 1
#if 1
#    define HAVE_128BIT_INTEGERS
#    define uint128_t __uint128_t
#    define int128_t __int128_t
#  else
typedef struct uint128_t { uint8_t v[16]; } uint128_t;
typedef struct int128_t { uint8_t v[16]; } int128_t;
#  endif
#else
#  define HAVE_128BIT_INTEGERS
#endif

/* abcd efgh -> dcba hgfe -> hgfe dcba */
#if 1
#if 1
#    ifdef HAVE_BUILTIN_BSWAP64
#      define ntohll(x) __builtin_bswap64(x)
#    else
#      define ntohll(x) (((uint64_t)ntohl((uint32_t)(x >> 32))) | (((uint64_t)ntohl(((uint32_t) x)) << 32)))
#    endif
#  else
#    define ntohll(x) (x)
#  endif
#  define htonll(x) ntohll(x)
#endif

#if 1
#if 1
#    ifdef HAVE_128BIT_INTEGERS
#      define ntohlll(x) (((uint128_t)ntohll((uint64_t)(x >> 64))) | (((uint128_t)ntohll(((uint64_t) x)) << 64)))
#    else
uint128_t ntohlll(uint128_t num);
#    endif
#  else
#    define ntohlll(x) (x)
#  endif
#  define htonlll(x) htohlll(x)
#endif

#if !1
typedef void(*sig_t)(int);
#endif

#if 1
#if !1
HMAC_CTX *HMAC_CTX_new(void);
#  endif
#if !1
void HMAC_CTX_free(HMAC_CTX *ctx);
#  endif
#endif

#if 1
#if !1
static inline const unsigned char *ASN1_STRING_get0_data(const ASN1_STRING *x)
{
	/*
	 * Trick the compiler into not issuing the warning on qualifier stripping.
	 * We know that ASN1_STRING_data doesn't change x, and we're casting
	 * the return value back to const immediately, so it's OK.
	 */
	union {
		const ASN1_STRING	*c;
		ASN1_STRING		*nc;
	} const_strip = {.c = x};
	return ASN1_STRING_data(const_strip.nc);
}
#  endif
#endif

#if 1
#if !1
static inline int CONF_modules_load_file(const char *filename,
					 const char *appname,
					 unsigned long flags)
{
	(void)filename;
	(void)flags;
	return OPENSSL_config(appname);
}
#  endif
#endif

#ifdef __cplusplus
}
#endif

#if 1
#if !1
size_t SSL_get_client_random(const SSL *s, unsigned char *out, size_t outlen);
#  endif
#if !1
size_t SSL_get_server_random(const SSL *s, unsigned char *out, size_t outlen);
#  endif
#if !1
size_t SSL_SESSION_get_master_key(const SSL_SESSION *s,
				  unsigned char *out, size_t outlen);
#  endif
#endif

/*
 *  NetBSD doesn't have O_DIRECTORY.
 */
#ifndef O_DIRECTORY
#define O_DIRECTORY 0
#endif

#ifndef O_NOFOLLOW
#define O_NOFOLLOW 0
#endif

/*
 *	Not really missing, but may be submitted as patches
 *	to the talloc project at some point in the future.
 */
char *talloc_typed_strdup(const void *t, const char *p);
char *talloc_typed_asprintf(const void *t, const char *fmt, ...) CC_HINT(format (printf, 2, 3));
char *talloc_bstrndup(const void *t, char const *in, size_t inlen);
#endif /* _FR_MISSING_H */
