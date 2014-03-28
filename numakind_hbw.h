#ifndef numakind_hbw_include_h
#define numakind_hbw_include_h
#ifdef __cplusplus
extern "C" {
#endif

static const char *NUMAKIND_BANDWIDTH_PATH = "/etc/numakind/node-bandwidth";

int numakind_hbw_isavail(void);
int numakind_hbw_nodemask(unsigned long *nodemask, unsigned long maxnode);

#ifdef __cplusplus
}
#endif
#endif