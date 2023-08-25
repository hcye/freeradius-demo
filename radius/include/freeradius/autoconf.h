/* src/include/autoconf.h.  Generated from autoconf.h.in by configure.  */
/* src/include/autoconf.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* BSD-Style get*byaddr_r */
#define BSDSTYLE 3

/* style of ctime_r function */
#define CTIMERSTYLE POSIXSTYLE

/* Define to 1 to have OpenSSL version check enabled */
#define ENABLE_OPENSSL_VERSION_CHECK 1

/* Define to ensure each build is the same */
/* #undef ENABLE_REPRODUCIBLE_BUILDS */

/* Define if your processor stores words with the most significant byte first
   */
/* #undef FR_BIG_ENDIAN */

/* Define if your processor stores words with the least significant byte first
   */
#define FR_LITTLE_ENDIAN 1

/* style of gethostbyaddr_r functions */
#define GETHOSTBYADDRRSTYLE GNUSTYLE

/* style of gethostbyname_r functions */
#define GETHOSTBYNAMERSTYLE GNUSTYLE

/* GNU-Style get*byaddr_r */
#define GNUSTYLE 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `ASN1_STRING_get0_data' function. */
#define HAVE_ASN1_STRING_GET0_DATA 1

/* Define if your compiler supports the __bounded__ attribute (usually OpenBSD
   gcc). */
/* #undef HAVE_ATTRIBUTE_BOUNDED */

/* Define to 1 if you have the `bindat' function. */
/* #undef HAVE_BINDAT */

/* Define if we have a binary safe regular expression library */
#define HAVE_BINSAFE_REGEX 1

/* Define if the compiler supports __builtin_bswap64 */
#define HAVE_BUILTIN_BSWAP_64 1

/* Define if the compiler supports __builtin_choose_expr */
#define HAVE_BUILTIN_CHOOSE_EXPR 1

/* Define if the compiler supports __builtin_types_compatible_p */
#define HAVE_BUILTIN_TYPES_COMPATIBLE_P 1

/* Define to 1 if you have the <sys/capability.h> header file. */
/* #undef HAVE_CAPABILITY_H */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `closefrom' function. */
/* #undef HAVE_CLOSEFROM */

/* Define to 1 if you have the `collectdclient' library (-lcollectdclient). */
/* #undef HAVE_COLLECTDC_H */

/* Define to 1 if you have the `CONF_modules_load_file' function. */
#define HAVE_CONF_MODULES_LOAD_FILE 1

/* Do we have the crypt function */
#define HAVE_CRYPT /**/

/* Define to 1 if you have the `CRYPTO_set_id_callback' function. */
/* #undef HAVE_CRYPTO_SET_ID_CALLBACK */

/* Define to 1 if you have the `CRYPTO_set_locking_callback' function. */
/* #undef HAVE_CRYPTO_SET_LOCKING_CALLBACK */

/* Define to 1 if you have the <crypt.h> header file. */
#define HAVE_CRYPT_H 1

/* Do we have the crypt_r function */
#define HAVE_CRYPT_R /**/

/* Define to 1 if you have the `ctime_r' function. */
#define HAVE_CTIME_R 1

/* Define to 1 if you have the declaration of `gethostbyaddr_r', and to 0 if
   you don't. */
/* #undef HAVE_DECL_GETHOSTBYADDR_R */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dladdr' function. */
#define HAVE_DLADDR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* define this if we have <execinfo.h> and symbols */
#define HAVE_EXECINFO 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <features.h> header file. */
#define HAVE_FEATURES_H 1

/* Define to 1 if you have the <fnmatch.h> header file. */
#define HAVE_FNMATCH_H 1

/* Define to 1 if you have the `fopencookie' function. */
#define HAVE_FOPENCOOKIE 1

/* Define to 1 if you have the `funopen' function. */
/* #undef HAVE_FUNOPEN */

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the getgrnam_r. */
#define HAVE_GETGRNAM_R 1

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `getpeereid' function. */
/* #undef HAVE_GETPEEREID */

/* Define to 1 if you have the getpwnam_r. */
#define HAVE_GETPWNAM_R 1

/* Define to 1 if you have the `getresuid' function. */
#define HAVE_GETRESUID 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getusershell' function. */
#define HAVE_GETUSERSHELL 1

/* Define to 1 if you have the <glob.h> header file. */
#define HAVE_GLOB_H 1

/* Define to 1 if you have the `gmtime_r' function. */
#define HAVE_GMTIME_R 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define to 1 if you have the <history.h> header file. */
/* #undef HAVE_HISTORY_H */

/* Define to 1 if you have the `HMAC_CTX_free' function. */
#define HAVE_HMAC_CTX_FREE 1

/* Define to 1 if you have the `HMAC_CTX_new' function. */
#define HAVE_HMAC_CTX_NEW 1

/* Define if the function (or macro) htonll exists. */
/* #undef HAVE_HTONLL */

/* Define if the function (or macro) htonlll exists. */
/* #undef HAVE_HTONLLL */

/* Define to 1 if you have the `if_indextoname' function. */
#define HAVE_IF_INDEXTONAME 1

/* define if you have IN6_PKTINFO (Linux) */
#define HAVE_IN6_PKTINFO /**/

/* Define to 1 if you have the `inet_aton' function. */
#define HAVE_INET_ATON 1

/* Define to 1 if you have the `inet_ntop' function. */
#define HAVE_INET_NTOP 1

/* Define to 1 if you have the `inet_pton' function. */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* define if you have IP_PKTINFO (Linux) */
#define HAVE_IP_PKTINFO /**/

/* Define to 1 if you have the `kqueue' function. */
/* #undef HAVE_KQUEUE */

/* Define to 1 if you have the `cap' library (-lcap). */
/* #undef HAVE_LIBCAP */

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `nsl' library (-lnsl). */
#define HAVE_LIBNSL 1

/* Define to 1 if you have the `pcap' library (-lpcap) and header file
   <pcap.h>. */
/* #undef HAVE_LIBPCAP */

/* Define if you have a readline compatible library */
#define HAVE_LIBREADLINE 1

/* Define to 1 if you have the `resolv' library (-lresolv). */
#define HAVE_LIBRESOLV 1

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the `ssl' library (-lssl). */
#define HAVE_LIBSSL 1

/* Define to 1 if you have the `ws2_32' library (-lws2_32). */
/* #undef HAVE_LIBWS2_32 */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/if_packet.h> header file. */
#define HAVE_LINUX_IF_PACKET_H 1

/* Define to 1 if you have the `localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the `mallopt' function. */
#define HAVE_MALLOPT 1

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the `mkdirat' function. */
#define HAVE_MKDIRAT 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the `openat' function. */
#define HAVE_OPENAT 1

/* Define to 1 if you have the <openssl/asn1.h> header file. */
#define HAVE_OPENSSL_ASN1_H 1

/* Define to 1 if you have the <openssl/conf.h> header file. */
#define HAVE_OPENSSL_CONF_H 1

/* Define to 1 if you have the <openssl/crypto.h> header file. */
#define HAVE_OPENSSL_CRYPTO_H 1

/* Define to 1 if you have the <openssl/engine.h> header file. */
#define HAVE_OPENSSL_ENGINE_H 1

/* Define to 1 if you have the <openssl/err.h> header file. */
#define HAVE_OPENSSL_ERR_H 1

/* Define to 1 if you have the <openssl/evp.h> header file. */
#define HAVE_OPENSSL_EVP_H 1

/* Define to 1 if you have the <openssl/hmac.h> header file. */
#define HAVE_OPENSSL_HMAC_H 1

/* Define to 1 if you have the <openssl/md4.h> header file. */
#define HAVE_OPENSSL_MD4_H 1

/* Define to 1 if you have the <openssl/md5.h> header file. */
#define HAVE_OPENSSL_MD5_H 1

/* Define to 1 if you have the <openssl/ocsp.h> header file. */
#define HAVE_OPENSSL_OCSP_H 1

/* Define to 1 if you have the <openssl/rand.h> header file. */
#define HAVE_OPENSSL_RAND_H 1

/* Define to 1 if you have the <openssl/sha.h> header file. */
#define HAVE_OPENSSL_SHA_H 1

/* Define to 1 if you have the <openssl/ssl.h> header file. */
#define HAVE_OPENSSL_SSL_H 1

/* Define to 1 if you have the `pcap_activate' function. */
/* #undef HAVE_PCAP_ACTIVATE */

/* Define to 1 if you have the `pcap_create' function. */
/* #undef HAVE_PCAP_CREATE */

/* Define to 1 if you have the `pcap_dump_fopen' function. */
/* #undef HAVE_PCAP_DUMP_FOPEN */

/* Define to 1 if you have the `pcap_fopen_offline' function. */
/* #undef HAVE_PCAP_FOPEN_OFFLINE */

/* define this if we have libpcre */
#define HAVE_PCRE 1

/* Define to 1 if you have the <prot.h> header file. */
/* #undef HAVE_PROT_H */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the `pthread_sigmask' function. */
#define HAVE_PTHREAD_SIGMASK 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the <readline.h> header file. */
/* #undef HAVE_READLINE_H */

/* Define if your readline library has \`add_history' */
#define HAVE_READLINE_HISTORY 1

/* Define to 1 if you have the <readline/history.h> header file. */
#define HAVE_READLINE_HISTORY_H 1

/* Define to 1 if you have the <readline/readline.h> header file. */
#define HAVE_READLINE_READLINE_H 1

/* Define if we have any regular expression library */
#define HAVE_REGEX 1

/* Define to 1 if you have the `regncomp' function. */
/* #undef HAVE_REGNCOMP */

/* Define to 1 if you have the `regnexec' function. */
/* #undef HAVE_REGNEXEC */

/* define this if we have REG_EXTENDED (from <regex.h>) */
/* #undef HAVE_REG_EXTENDED */

/* Define to 1 if you have the <resource.h> header file. */
/* #undef HAVE_RESOURCE_H */

/* Define to 1 if you have the <sanitizer/lsan_interface.h> header file. */
/* #undef HAVE_SANITIZER_LSAN_INTERFACE_H */

/* Define to 1 if you have the <semaphore.h> header file. */
#define HAVE_SEMAPHORE_H 1

/* Define to 1 if you have the `setlinebuf' function. */
#define HAVE_SETLINEBUF 1

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the `setuid' function. */
#define HAVE_SETUID 1

/* Define to 1 if you have the `setvbuf' function. */
#define HAVE_SETVBUF 1

/* Define to 1 if you have the <siad.h> header file. */
/* #undef HAVE_SIAD_H */

/* Define to 1 if you have the <sia.h> header file. */
/* #undef HAVE_SIA_H */

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `sigprocmask' function. */
#define HAVE_SIGPROCMASK 1

/* Define if the type sig_t is defined by signal.h */
#define HAVE_SIG_T 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `SSL_get_client_random' function. */
#define HAVE_SSL_GET_CLIENT_RANDOM 1

/* Define to 1 if you have the `SSL_get_server_random' function. */
#define HAVE_SSL_GET_SERVER_RANDOM 1

/* Define to 1 if you have the `SSL_SESSION_get_master_key' function. */
#define HAVE_SSL_SESSION_GET_MASTER_KEY 1

/* Define to 1 if you have the <stdalign.h> header file. */
#define HAVE_STDALIGN_H 1

/* Define to 1 if you have the <stdatomic.h> header file. */
#define HAVE_STDATOMIC_H 1

/* Define to 1 if you have the <stdbool.h> header file. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strsep' function. */
#define HAVE_STRSEP 1

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Generic DNS lookups */
#define HAVE_STRUCT_ADDRINFO 1

/* IPv6 address structure */
#define HAVE_STRUCT_IN6_ADDR 1

/* IPv6 socket addresses */
#define HAVE_STRUCT_SOCKADDR_IN6 1

/* Generic socket addresses */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the `systemd' library (-lsystemd). */
/* #undef HAVE_SYSTEMD */

/* Define to 1 if you have the <systemd/sd-daemon.h> header file. */
/* #undef HAVE_SYSTEMD_SD_DAEMON_H */

/* Define to 1 if you have watchdog support in the `systemd' library
   (-lsystemd). */
/* #undef HAVE_SYSTEMD_WATCHDOG */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/fcntl.h> header file. */
#define HAVE_SYS_FCNTL_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/procctl.h> header file. */
/* #undef HAVE_SYS_PROCCTL_H */

/* Define to 1 if you have the <sys/ptrace.h> header file. */
#define HAVE_SYS_PTRACE_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/security.h> header file. */
/* #undef HAVE_SYS_SECURITY_H */

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the function talloc_set_memlimit. */
#define HAVE_TALLOC_SET_MEMLIMIT 1

/* 128 bit unsigned integer */
/* #undef HAVE_UINT128_T */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlinkat' function. */
#define HAVE_UNLINKAT 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define to 1 if you have the `vdprintf' function. */
#define HAVE_VDPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define if the compiler supports -Wdocumentation */
/* #undef HAVE_WDOCUMENTATION */

/* Define to 1 if you have the <winsock.h> header file. */
/* #undef HAVE_WINSOCK_H */

/* compiler specific 128 bit unsigned integer */
#define HAVE___UINT128_T 1

/* define if you have OSFC2 authentication */
/* #undef OSFC2 */

/* define if you have OSFSIA authentication */
/* #undef OSFSIA */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugs.freeradius.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "freeradius"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "freeradius $Id: 5041ca264f4d3ef91410bc78e5516857f1332826 $"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "freeradius"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.freeradius.org"

/* Define to the version of this package. */
#define PACKAGE_VERSION "$Id: 5041ca264f4d3ef91410bc78e5516857f1332826 $"

/* Posix-Style ctime_r */
#define POSIXSTYLE 1

/* Version integer in format <ma><ma><mi><mi><in><in> */
#define RADIUSD_VERSION 030203

/* Commit HEAD at time of configuring */
/* #undef RADIUSD_VERSION_COMMIT */

/* Raw version string from VERSION file */
#define RADIUSD_VERSION_STRING "3.2.3"

/* Solaris-Style ctime_r */
#define SOLARISSTYLE 2

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* SYSV-Style get*byaddr_r */
#define SYSVSTYLE 2

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define if the compiler supports a thread local storage class */
#define TLS_STORAGE_CLASS __thread

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* include support for Ascend binary filter attributes */
#define WITH_ASCEND_BINARY 1

/* define if you want DHCP support */
#define WITH_DHCP 1

/* define if the server was built with -DNDEBUG */
#define WITH_NDEBUG 1

/* define if you want RADIUSv11 support (For RADSec et al) */
/* #undef WITH_RADIUSV11 */

/* define if you want TCP support (For RADSec et al) */
#define WITH_TCP 1

/* define if you want thread support */
#define WITH_THREADS 1

/* define if you want udpfromto */
#define WITH_UDPFROMTO /**/

/* define if you want VMPS support */
#define WITH_VMPS 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Force OSX >= 10.7 Lion to use RFC2292 IPv6 socket options */
/* #undef __APPLE_USE_RFC_3542 */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* socklen_t is generally 'int' on systems which don't use it */
/* #undef socklen_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* uint16_t should be the canonical '2 octets' for network traffic */
/* #undef uint16_t */

/* uint32_t should be the canonical 'network integer' */
/* #undef uint32_t */

/* uint64_t is required for larger counters */
/* #undef uint64_t */

/* uint8_t should be the canonical 'octet' for network traffic */
/* #undef uint8_t */

/* define to something if you don't have ut_xtime in struct utmpx */
#define ut_xtime ut_tv.tv_sec

#include <freeradius/automask.h>
