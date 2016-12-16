/*
 * This file is part of linux-steam-integration.
 *
 * Copyright © 2016 Ikey Doherty
 *
 * linux-steam-integration is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 */

#define _GNU_SOURCE

#include <link.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RTLD_API_VERSION 1

#define __lsi_public__ __attribute__((visibility("default")))
#define __lsi_unused__ __attribute__((unused))

/**
 * Main-entry for rtld-audit modules
 */
__lsi_public__ unsigned int la_version(unsigned int version)
{
        if (version > RTLD_API_VERSION) {
                return 0;
        }
        return version;
}

/**
 * Handle a lookup for a soname
 */
__lsi_public__ char *la_objsearch(const char *name, __lsi_unused__ uintptr_t *cookie,
                                  unsigned int flags)
{
        return (char *)name;
}

/*
 * Editor modelines  -  https://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 8
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=8 tabstop=8 expandtab:
 * :indentSize=8:tabSize=8:noTabs=true:
 */
