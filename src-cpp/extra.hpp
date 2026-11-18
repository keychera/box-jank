#pragma once
#include <SDL3/SDL.h>

// from choreograph samples
struct vec2 {
  vec2(double x = 0.0f, double y = 0.0f) : x(x), y(y) {}

  vec2 &operator+=(const vec2 &o) {
    *this = *this + o;
    return *this;
  }
  vec2 operator+(const vec2 &o) const { return {x + o.x, y + o.y}; }
  vec2 operator-(const vec2 &o) const { return {x - o.x, y - o.y}; }
  vec2 operator*(double s) const { return {x * s, y * s}; }
  vec2 operator*(const vec2 &o) const { return {x * o.x, y * o.y}; }

  double x, y;
};
