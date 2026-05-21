from collections import Counter, defaultdict, deque
from dataclasses import dataclass
from functools import cache, lru_cache
from heapq import heapify, heappop, heappush
from itertools import accumulate, combinations, permutations, product
from math import ceil, floor, gcd, inf, isqrt
from typing import Deque, Dict, List, Optional, Set, Tuple
import unittest


class Solution:
    def addition(self, num1: int, num2: int) -> int:
        return num1 + num2
    

class TestSolution(unittest.TestCase):
    def setUp(self) -> None:
        self.solution = Solution()

    def test_1(self) -> None:
        self.assertEqual(self.solution.addition(2, 5), 7)

    def test_2(self) -> None:
        self.assertEqual(self.solution.addition(1, 45), 46)

    def test_3(self) -> None:
        self.assertEqual(self.solution.addition(6, 3), 9)


if __name__ == "__main__":
    unittest.main(verbosity=2)