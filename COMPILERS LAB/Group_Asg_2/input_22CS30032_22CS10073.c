
// Test 1: Expressions (Primary, Postfix, Unary, Binary, and Assignment)
void test_expressions() {
    int a = 10;
    int b = 5;
    int c;
    
    c = a + b; // Addition
    c = a * b; // Multiplication
    c = (a + b) * (a - b); // Compound Expression

    a++; // Postfix increment
    b--; // Postfix decrement
    c = -a; // Unary minus
    c = ~b; // Unary bitwise NOT
    c = a & b; // Bitwise AND
    c = a | b; // Bitwise OR
    c = a << 1; // Shift left
    c = a >> 1; // Shift right
    c = a == b; // Equality
    c = (a > b) ? a : b; // Conditional Expression
}

// Test 2: Declarations (including complex initializers, pointer, array)
void test_declarations() {
    int x = 10;
    float y = 3.14;
    int arr[5] = {1, 2, 3, 4, 5}; // Array declaration
    int *ptr = &x; // Pointer declaration

    const int z = 100; // Constant declaration
    extern int global_var; // External declaration
}


// Test 3: Statements (if, switch, compound statements)
void test_statements() {
    int x = 10;
    
    // If-else statement
    if (x > 5) {
        x++;
    } else {
        x--;
    }

    // Switch-case statement
    switch (x) {
        case 5:
            x += 5;
            break;
        case 10:
            x += 10;
            break;
        default:
            x += 1;
    }

    // Compound statement
    {
        int y = 20;
        x += y;
    }
}

// Test 4: Loops (while, do-while, for)
void test_loops() {
    int i = 0;

    // While loop
    while (i < 5) {
        i++;
    }

    // Do-while loop
    do {
        i--;
    } while (i > 0);

    // For loop
    for (int j = 0; j < 5; j++) {
        i += j;
    }
}

// Test 5: Function Definitions and Calls
int add(int a, int b) {
    return a + b;
}

void test_functions() {
    int x = add(10, 20); // Function call
}

// Test 6: Pointer Arithmetic and Dereferencing
void test_pointers() {
    int arr[3] = {1, 2, 3};
    int *p = arr;
    
    int x = *p; // Dereference
    p++; // Pointer arithmetic
    x = *(p + 1); // Accessing next element
}

// Test 7: Arrays (accessing elements, modifying)
void test_arrays() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; i++) {
        arr[i] += i;
    }
}



