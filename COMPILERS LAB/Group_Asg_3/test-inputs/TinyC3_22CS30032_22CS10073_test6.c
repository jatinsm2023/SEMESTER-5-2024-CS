int fibonacci(int number) {
    if (number == 0)
        return 0;

    if (number == 1 || number == 2)
        return 1;

    // Recursive function
    else
        return (fibonacci(number - 1) + fibonacci(number - 2));
}

int main() {
    int length = 5;
    int index;
    int series[length];
    
    // for loop to print the Fibonacci series.
    for (index = 0; index < length; index++) {
        series[index] = fibonacci(index + 1);
    }
    
    return 0;
}
