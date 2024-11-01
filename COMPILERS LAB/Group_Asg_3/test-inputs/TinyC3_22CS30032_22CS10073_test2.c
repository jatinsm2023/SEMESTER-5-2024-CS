// Function calls and conditional statements (ternary and if-else)

int max_value(int num1, int num2) {
    int result;
    if (num1 > num2)                   // if-else
        result = num1;
    else
        result = num2;

    if(result < 0)
        result = -result;
    return result;
}


int min_value(int num1, int num2) {
    int result;
    result = num1 > num2 ? num2 : num1; // ternary
    return result;
}

void display(char *text) {
    // Display the char array
    return;
}

void print_larger(int var1, int var2) {
    char var1_larger[] = "var1 > var2";
    char var2_larger[] = "var2 > var1";
    var1 > var2 ? display(var1_larger) : display(var2_larger);
    return;
}

int add_values(int x, int y) {
    int small = min_value(x, y);       // nested function calls
    int large = max_value(x, y);
    int sum = large + small;
    return sum;
}

int main() {
    int num1, num2, total;
    num1 = 1, num2 = 52;
    total = add_values(num1, num2);
    return 0;
}
