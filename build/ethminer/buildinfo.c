/* Cable: CMake Bootstrap Library.
 * Copyright 2018 Pawel Bylica.
 * Licensed under the Apache License, Version 2.0. See the LICENSE file.
 */

/* Generated by Cable Build Info on 2021-05-23T11:41:45. Do not modify directly. */

#include "buildinfo.h"

const struct buildinfo* ethminer_get_buildinfo()
{
    static const struct buildinfo buildinfo = {
        .project_name = "ethminer",
        .project_version = "0.19.0-50+commit.088a1d0b.dirty",
        .project_name_with_version = "ethminer-0.19.0-50+commit.088a1d0b.dirty",
        .git_commit_hash = "088a1d0bb6030cf16555406246d5d2a8aa8757f4",
        .system_name = "linux",
        .system_processor = "x86_64",
        .compiler_id = "gnu",
        .compiler_version = "9.3.0",
        .build_type = "release",
    };
    return &buildinfo;
}