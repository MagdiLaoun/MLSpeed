#include "MLSpeed.h"
/*
Speed::Speed() {
    count = 0;
    index = 0;
    position = nullptr;
    time = nullptr;
}
*/

void Speed::begin(uint16_t count_) {
    this->count = count_;
    index = 0;
    delete[] position;
    delete[] time;
    position = new float[count];
    time = new uint64_t[count];
    for (int i = 0; i < count; i++) {
        position[i] = 0;
        time[i] = 0;
    }
}
float Speed::update(float newValue_) {
    float lastPosition = position[index];
    uint64_t lastTime = time[index];
    position[index] = newValue_;
    time[index] = micros();
    float speed = (position[index] - lastPosition)*1000000.0f/float(time[index] - lastTime); // Calculate speed in steps per second
    index = (index + 1) % count;
    return speed;
}