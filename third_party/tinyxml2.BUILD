load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "tinyxml2",
    srcs = ["tinyxml2.cpp"],
    hdrs = ["tinyxml2.h"],
    includes = ["."],  # Assumes the BUILD file is in the same directory as tinyxml2.h
    copts = [
        "-D_FILE_OFFSET_BITS=64",
        "-D_CRT_SECURE_NO_WARNINGS",
        "-std=c++11",  # Ensure this matches the C++ standard used by TinyXML-2
    ],
    visibility = ["//visibility:public"],
)
