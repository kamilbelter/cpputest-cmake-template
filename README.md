# cpputest-cmake-template

Template for cpputest with CMake.

git clone --recursive https://github.com/kamilbelter/cpputest-cmake-template.git
cd test_framework
mkdir cmake-build
cmake -S . -B cmake-build -G "Ninja"
cmake --build cmake-build
cmake --build cmake-build --target install --config Release

Export env variable named CPPUTEST_HOME to newly installed cpputest

