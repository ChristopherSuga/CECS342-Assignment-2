import Data.List (sortBy)
import Data.Ord (comparing)

main = do
  let numbers = [645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25]
  let numbersResult = qsort numbers
  let people = [("Hal", 20), ("Susann", 31), ("Dwight", 19), ("Kassandra", 21), ("Lawrence", 25), ("Cindy", 22), ("Cory", 27), ("Mac", 19), ("Romana", 27), ("Doretha", 32), ("Danna", 20), ("Zara", 23), ("Rosalyn", 26), ("Risa", 24), ("Benny", 28), ("Juan", 33), ("Natalie", 25)]
  let peopleResult = sortBy sortPair people
  print numbersResult
  print peopleResult


--http://learnyouahaskell.com/recursion#quick-sort
qsort :: (Ord a) => [a] -> [a]
--base case for if the list is null then return null
qsort [] = []
--takes the head and creates two arrays around it
qsort (x : xs) =
  -- filter p xs = [ x | x <- xs, p x] filter function that creates a new array with values that satisfy the condition p x
  --two new arrays are created one with values lower than x and one with values higher than x

  let smallerSorted = qsort [a | a <- xs, a <= x]
      biggerSorted = qsort [a | a <- xs, a > x]
   in --merges the arrays. array with numbers lower than x are placed on the left and array with larger numbers are placed to the right
      smallerSorted ++ [x] ++ biggerSorted

sortPair (a1, b1) (a2, b2)
  | b1 < b2 = GT
  | b1 > b2 = LT
  | b1 == b2 = compare a1 a2
