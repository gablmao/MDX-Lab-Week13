/*
WEEK 13: INTRO TO ALGORITHMS WOOOOOOOOOOW

three points when analysing algorithms:
> estimating running time
> mathematical model for running time
> asymptotic notation


ESTIMATING RUNNING TIME:
> since a brute force approach will take too long to process larger sets
of data, a different approach must be used to process faster

> one example of a "quicker" algorithm is timing insertion sort
    > this means manually timing the time it takes a set of data
    to be sorted via insertion
    > smaller sets makes this easy to do manually, but as sets get
    larger and larger, this process becomes more "annoying" to used
    > sometimes, for much larger sets we ESTIMATE by using a formula
    and looking at the trend from previous sets/runs
    > ESTIMATIONS can be very accurate, or you can be off my some margin.
    ensure the formula being used is "fool-proof" enough to get an accurate
    estimation of time


MATHEMATICAL MODEL FOR RUNNING TIME:
> total running time = sum of cost * frequency of all operations
    > cost of operations depend on the machine and compiler used
    > frequency can be seen in the algorithm and input data

    ORDER OF GROWTH:
    >1 -> constant
    >log(n) -> logarithmic
    >n - > linear
    >nlog(n) -> linearithmic
    >n^2 -> quadratic
    >n^3 -> cubic
    >2^n -> exponential
    **you can look up an image of a graph showing how as size and time
    increases, each growth affects the alg


ASYMPTOTIC NOTATIONS:
> O-Notation 
> OMEGA-Notation
> Big O-Notation

    >every algorithm has either one of the three NOTATIONS
    >these notations tells us how effective it is in terms of space and time
    >for example, the algorithm Insertion sort has...
        >worse case Big-O(n^2)
            >this means at worst this will take a quadratic amount of time 
            and space to complete
        >best case Big-O(n)
            >this means at bestthis will take a linear amount of time
            and space to complete
*/