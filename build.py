import os

def run(cmd):
    ret = os.system(cmd)
    if ret != 0:
        raise Exception(f"COMMAND FAILED: {cmd}")


# For windows msvc 2019
run("conan create . -s compiler.version=16")
run("conan create . -o *:shared=True -s compiler.version=16")