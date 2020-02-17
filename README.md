# Install Google Test on Ubuntu 16.04
sudo apt isntall libgtest-dev
cd /usr/src/gtest/
sudo cmake -DBUILD_SHARED_LIBS=ON
sudo make
sudo cp *.so /usr/lib

# Install lcov
sudo apt install lcov

# Build
./build clean;build

# Exec test and generate test coverage
./execTest test_foo
