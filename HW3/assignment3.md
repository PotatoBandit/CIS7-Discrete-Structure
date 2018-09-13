### Part1:
   let S = it is sunny, C = camping is fun, H = the homework is
   done, and M = mathematics is easy.

   ( M -> H ) ^ ( S -> C )
   Mathematics is easy therefore the homework is done and it is sunny therefore camping is fun.

   “Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”
    (S ^ H) -> (M v C)

### Part 2:

| A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | ((¬B -> A) -> B | (¬B → ¬A) → ((¬B → A) → B)
|---|---|--- |--- | -------- | ------- | --------------- |--------------------------- 
| T | T | F  | F  | T        | T       |  T              | T
| T | F | F  | T  | F        | T       |  F              | T
| F | T | T  | F  | T        | T       |  T              | T
| F | F | T  | T  | T        | F       |  T              | T
TAUTOLOGY


| A | B | ¬A |  A -> B | B -> ¬A | ((A → B)∧(B → ¬A)) | ((A → B)∧(B → ¬A)) → A
|---|---|--- | ------- | ------- | ------------------ | ---------------------- 
| T | T | F  | T       | F       | F                  | T
| T | F | F  | F       | T       | F                  | T
| F | T | T  | T       | T       | T                  | F
| F | F | T  | T       | T       | T                  | F
NEITHER

### Part 3:
| why wont you  | y | pleae         |work k thna
| ------------- | - | ------------- |-------------
| (p ∧ q) → r   | = |  p → (q → r ) | Given       
| (p ^ q)' v r  | = |  p → (q → r ) | implication 
| p' v q' v r   | = |  p → (q → r ) | De Morgans  
| p' v (q → r)  | = |  p → (q → r ) | implication 
| p → (q → r)   | = |  p → (q → r ) | implication 

| ------------------- |---| ------------- | --------------
| (q → p)∧(r → p)     | = |  (q ∨ r ) → p |  given        
| (q → p)∧(r → p)     | = |  (q ∨ r ) → p |  given         
| (q' v p) ^ (r' v p) | = |  (q ∨ r ) → p |  implication  
| p v (q' ^ r')       | = |  (q ∨ r ) → p |  distributive 
| p v (q ^ r )'       | = |  (q ∨ r ) → p |  De morgans   
| (q ^ r) -> p        | = |  (q ∨ r ) → p |  implication  

### Part 4:
Translate into English: ∃x∀y∀z(City(x) ∧ Traveler (y)∧Li ves(z,x)) → (Loves(y,x)∧ ¬Loves(z,x))
There exists some x for all y and all z where x is a city and y is a traveler and z lives in a city. 
Therefore a traveler loves the city and those who live in the city do not love the city. 

“No traveler loves the city they live in.”
∃x∀y(City(x) ∧ Traveler (y)) → (¬Loves(y,x) ∧ Lives(y,x))

### Part 5: 

   Assuming: p → (q ∧ r ), s → r , r → p
    Prove: s → q.

 | ------- | -----------
 |  s      | assumption    
 |  r      | mpp    
 |  p      | mpp    
 |  q ^ r  | mpp   
 |  q      | truth table
 | s → q   | steps 1-5


 Assuming: ¬(r ∨ s), ¬p → s, p → q. 
 Prove: q
    
  | -- | -----------
  | ¬s | De morgans  
  | p  |  mtt       
  | q  | mpp        
  | q  | step 1 - 3 

