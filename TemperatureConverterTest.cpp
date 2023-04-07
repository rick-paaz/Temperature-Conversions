// Unit test for the two
#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "TemperatureConverter.cpp"

// Programmer YOUR NAME
TEST_CASE("CtoF") {
  // CtoF is a static function. No object needed.
  REQUIRE (TemperatureConverter::CtoF(37) == 98.6);
  // TODO: Add more tests
}

TEST_CASE("FtoC") {
  // FtoC is a static function. No object needed.
  REQUIRE (TemperatureConverter::FtoC(117.0) == 47.2);
  // TODO Add more tests
}