#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> fibonacci( int len ) {
    assert( len > 0 );
    if (len == 1 ) return { 1 };

    std::vector<int> fib(len);
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < len; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib;
}

double vec_avg( std::vector<int> const &vec ) {
    double sum = 0;
    for ( int elem : vec ) {
        sum += elem;
    }
    return sum / vec.size();
}

void print_vec( std::vector<int> const &vec ) {
    for ( int elem : vec ) {
        std::cout << elem << ' ';
    }
}

void print_fib( int len ) {
    std::vector<int> fib = fibonacci(len); 
    print_vec( fib );
    std::cout << '\n';
    std::cout << "The average is " << vec_avg( fib ) << '\n';
}

int main() {
    print_fib( 20 );
    return 1;
}