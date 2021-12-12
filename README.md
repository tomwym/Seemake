### Hello world! 

```
Seemake
├── CMakeLists.txt
├── bin
│   ├── SubMod1Shared.so
│   └── SubMod2Static.a
│   └── lib
│       └── Seemake
├── include
│   ├── CMakeLists.txt
│   ├── Seemake.hp
│   ├── SubMod1Shared
│   │   ├── Yuji.hpp
│   │   └── Todo.hpp
│   └── SubMod2Static
│       ├── Maki.hpp
│       └── Yuta.hpp
├── src
│   └── CMakeLists.txt
│   ├── Seemake.cpp
│   ├── SubMod1Shared
│   │   └── Yuji.cpp
│   │   └── Todo.cpp
│   └── SubMod2Static
│       ├── Maki.cpp
│       └── Yuta.cpp
```

```
$ cd into /Seemake dir
$ cd build
$ cmake ..
$ cd ..
$ cmake --build build
```