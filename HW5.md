### Part 1:

#### 1) Contradiction
Show that the square root of 2 is irrational
++assume square root of 2 is rational
++definition of rational number: sqaure root 2 = p/k
++sqaure both sides: 2 = (p/k)^2
--distribute the power of 2: 2 = p^2/k^2
--multiplicative property of equality : 2k^2 = p^2
--p^2/2 is true if p is even. the same can be said for k^2/q. 
If p and q are even, then they are divisible by 2, whitch means they are not in their lowest form.
Therefore sqareroot of 2 cannot be rational. 

#### 2) Exhaustion
If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares.
Sqrt(25) = 5 , yes it is a perfect sqaure. the sum of two perfect sqaures doesn't equal 25.

#### 3) Direct Proof
The sum of two odd integers is even. 
definition of odd number: 2n+1
definition of even number is 2m
(2n+1) + (2n+1) = 2m
4n + 2 = 2m
2(2n+1) = 2m
m = 2n+1
2m = 2m
Therefore this is true.

#### 4) Direct Proof
The sum of an even integer and it's square is even
definition of even integer: 2n
2n + (2n)^2 = 2m
2n + 4n^2 = 2m
2(n+2n^2) = 2m
m = n+2n^2
2m = 2m

#### 5) Contrapostion
If n squared is odd, then n is odd
if n is even, then n squared is even
defintion of even: 2m
n = 2m
n^2 = (2m)^2
n^2 = 4m^2
n^2 = 2(2m^2)
k = 2m^2
n^2 = 2k
Therefore, if n is even then n^2 is even. Therefor by contropostion if n is odd, then n^2 is odd. 

### Part 2:

#### 1)
Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1)
  Base Case: n = 1 ; 1=1
  assume true for n=k  1 + 3 + 5 + ... + 4k-3 = k(2k-1)
  1 + 3 + 5 + ... + 4k-3 + 4(k+1)-3 = (k+1)(2(k+1)-1)
  k(2k-1) + 4(k+1)-3 = (k+1)(2(k+1)-1)
  2k^2 - k + 4k + 4 -3 = (k+1)(2k+2-1)
  2k^2 + 3K + 1 = 2k^2 + 3k + 1
  True.
  
#### 2)
Prove that for any positive integer number n, n^3 + 2n is divisible by 3
  n^3 + 2n = 3m
  Base Case: n = 1 ; 1=1
  n = (k+1)
  (k+1)^3 + 2(k+1) = 3m
  k^3 + 3k^2 + 3k + 1 + 2k + 2 = 3m
  K^3 + 3k + 3k^2 + 3k + 3 = 3m
  3m + 3k^2 + 3k + 3 = 3m
  3m + 3(k^2 + k + 1) = 3m
  3(m + k^2 + k + 1) = 3m
  m + k^2 + k + 1 = some number m
  3m = 3m
  
#### 3)
 Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers 
 Hint: 4^(3+1) = 4 * 4^3 Hint: If 9^n - 1 = 8m, then 9^n = 8m + 1
 9^2n-1 = 8m
 Base Case: n = 0 ; ture
 n = K + 1
 9^(k+1) -1 + 9^((k+1)+1) -1 = 8m
 9^k * 9 - 1 + 9^k * 9^2 -1 = 8m
 9 * 9^k -1 + 9^2 * 9^k - 1 = 8m 
 9 * 8m + 9^2 * 8m = 8m
 8(9m + 9^2m) = 8m
 9m + 9^2m = some number m
 8m = 8m 


