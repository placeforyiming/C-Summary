FROM ubuntu:20.04
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt install -y \
  make \
  build-essential \
  gcc \
  g++ \
  cppcheck \
  valgrind \
   libcairo2-dev\
   libgraphicsmagick1-dev\
   libwxgtk-media3.0-gtk3-dev\
   libgtk-3-dev\
   libpng-dev\
   git\
   wget


RUN wget http://www.cmake.org/files/v3.15/cmake-3.15.0.tar.gz && tar xf cmake-3.15.0.tar.gz && cd cmake-3.15.0 && ./configure && make && make install

RUN git clone --recurse-submodules https://github.com/cpp-io2d/P0267_RefImpl

RUN cd P0267_RefImpl && pwd && mkdir Debug && cd Debug && pwd && cmake --config Debug "-DCMAKE_BUILD_TYPE=Debug" .. && cmake --build . && make install 


WORKDIR /project

#docker run --rm -it --mount type=bind,source=/home/yiming/Udacity_C++/C++Summary/,target=/project --net=host --env="DISPLAY" --volume="$HOME/.Xauthority:/root/.Xauthority:rw"  c_plusplus_summary:latest