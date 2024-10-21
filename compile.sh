g++ $(pkg-config --cflags --libs Qt5Widgets) -fPIC -Iinc -o output cryptoStatsTracker.cpp src/coinTimestamp.cpp src/coinClass.cpp src/coinGraph.cpp
