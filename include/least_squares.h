/// @file least_squares.h
/// Compute a least squares regression
/// @param <*x> first double value
/// @param <*y> second double value  
/// @return Return a least sqaure regression
#ifndef LEAST_SQUARES_H
#define LEAST_SQUARES_H

/// @brief A dataset of x-y points used for least-squares fitting.
typedef struct {
    double *x; ///< x values
    double *y; ///< y values
    int n;  ///< number of data points 
} Dataset;

/// @brief Read a dataset from a file.
/// @param filename Path to the input file.
/// @return A Dataset containing the loaded values.
Dataset read_data(const char *filename);

/// @brief Compute the least-squares best-fit line.
/// @param data Input dataset.
/// @param slope Output fitted slope.
/// @param intercept Output fitted intercept.
void solve_least_squares(const Dataset *data, double *slope, double *intercept);

/// @brief Print the fitted line parameters.
/// @param slope Fitted slope.
/// @param intercept Fitted intercept.
void print_solution(double slope, double intercept);

#endif // LEAST_SQUARES_H
