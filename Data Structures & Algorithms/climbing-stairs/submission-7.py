class Solution:
    # Approach #3: Binet's Formula method
    # climbing tree is a fibonnaci seq
    # which means we have F(n) = (phi^n + psi^n) / sqrt(5)
    # where phi = (1 + sqrt(5)) / 2 and psi = (1 + sqrt(5)) / 2
    def climbStairs(self, n: int) -> int:
        phi = (1 + math.sqrt(5)) / 2
        psi = (1 - math.sqrt(5)) / 2
        n += 1
        output = (phi**n - psi**n) / math.sqrt(5)
        return round(output)