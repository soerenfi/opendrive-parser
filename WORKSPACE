workspace(name = "OpenDriveParser")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "tinyxml2",
    urls = ["https://github.com/leethomason/tinyxml2/archive/10.0.0.tar.gz"],
    strip_prefix = "tinyxml2-10.0.0",
    build_file = "@//third_party:tinyxml2.BUILD",  # Path to the BUILD file you've created   
)