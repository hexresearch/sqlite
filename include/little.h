#ifndef LITTLE_H
#define LITTLE_H 1

#include "sqlite3.h"

#define LITTLE_SLEEP_TIME   500
#define LITTLE_RETRIES      10
#define LITTLE_MAX_PATH     512
#define LITTLE_SECTOR_SIZE  8192
// XXX
#define LITTLE_DEVICE_CHARACTERISTICS SQLITE_IOCAP_ATOMIC8K

#define DECODE_VERSION(x) x
#define ENCODE_VERSION(x) x
#define DECODE_INT(x) x
#define ENCODE_INT(x) x

typedef sqlite3_int64 version_t;

int register_little_vfs(int makeDflt);
int register_little_ro_vfs(int makeDflt);
int get_version(const char *name, version_t *version, int *nextfreeblock);
extern const char *version_file;

#endif

