# public-test-repo
Used for my experiments

How to build:

If cmake is not installed, install latest cmake version that corresponds to your local architecture here:
https://cmake.org/download/

If pip is not installed:
Follow instructions on https://pip.pypa.io/en/stable/installation/

If conan is not installed, run the following command:
pip install conan

Basic steps (assuming project root directory is working directory):
1) conan profile detect --force
2) mkdir build
3) conan install . --output-folder=build --build=missing
4) cd build
5) cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
6) cmake --build .

Running the program:
./test.out

