#ifndef ROOT_RVersion
#define ROOT_RVersion

/* Version information automatically generated by installer. */

/*
 * These macros can be used in the following way:
 *
 *    #if ROOT_VERSION_CODE >= ROOT_VERSION(6,32,4)
 *       #include <newheader.h>
 *    #else
 *       #include <oldheader.h>
 *    #endif
 *
*/

#define ROOT_RELEASE "6.22/03"
#define ROOT_RELEASE_DATE "Aug 17 2020"
#define ROOT_RELEASE_TIME "14:44:17"
#define ROOT_VERSION(a,b,c) (((a) << 16) + ((b) << 8) + (c))
#define ROOT_VERSION_CODE ROOT_VERSION(6,22,3) /* 398851 */

#endif
