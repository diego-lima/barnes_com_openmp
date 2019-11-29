# pragma omp barrier

# pragma omp task
{
    
}
# pragma omp taskwait

# pragma omp parallel
{
    # pragma omp single
    {
        // ...
    }
}