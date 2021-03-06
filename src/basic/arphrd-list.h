/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

/***
  This file is part of systemd.

  Copyright 2014 Lennart Poettering
***/

const char *arphrd_to_name(int id);
int arphrd_from_name(const char *name);

int arphrd_max(void);
