// Copyright 2025 UNN-CS

#include "alg.h"
#include <cstdint>
#include <gtest/gtest.h>

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(30);
  uint64_t expected = 129;
  EXPECT_EQ(expected, res);
}

TEST(st1, SmallNumbers) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, EvenNumbers) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(100));
}

TEST(st1, LargePrimes) {
  EXPECT_TRUE(checkPrime(9973));
  EXPECT_TRUE(checkPrime(7919));
}
TEST(st1, BasicCases) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(5), 11);
  EXPECT_EQ(nPrime(10), 29);
}

TEST(st1, EdgeCases) {
  EXPECT_EQ(nPrime(0), 0);
  EXPECT_EQ(nPrime(100), 541);
}

TEST(st1, BasicJump) {
  EXPECT_EQ(nextPrime(10), 11);
  EXPECT_EQ(nextPrime(13), 17);
  EXPECT_EQ(nextPrime(2), 3);
}

TEST(st1, LargeNumbers) { EXPECT_EQ(nextPrime(10000), 10007); }

TEST(st1, SmallBounds) {
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(5), 5);
}

TEST(st1, KnownValues) {
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(2000000), 142913828922);
}
