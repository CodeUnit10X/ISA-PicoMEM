#include <errno.h>

int _link(const char *oldpath, const char *newpath)
{
    (void)oldpath; (void)newpath;
    errno = ENOSYS;
    return -1;
}

int _unlink(const char *path)
{
    (void)path;
    errno = ENOSYS;
    return -1;
}
