load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

# Library for OpenDriveParser
cc_library(
    name = "OpenDriveParser",
    srcs = ["src/OpenDriveParser.cpp"],
    hdrs = glob(["src/*.h", "models/*.h"]),
    deps = ["@tinyxml2//:tinyxml2"],
    copts = ["-std=c++17"],
    visibility = ["//visibility:public"],
)

# Main executable
cc_binary(
    name = "main",
    srcs = ["src/main.cpp"],
    deps = [":OpenDriveParser"],
)
