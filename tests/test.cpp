#include "catch2/catch.hpp"

SCENARIO( "Some scenario", "[Module]" ) {
  GIVEN("Some given") {
    WHEN("Some when") {
      THEN("Some then") {
        REQUIRE(true);
      }
    }
  }
}
