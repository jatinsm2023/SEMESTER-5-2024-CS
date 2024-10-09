// Keywords
auto int x = 10;
const float pi = 3.14;
void func() { return; }
unsigned long ul = 100;
static int arr[5] = {1, 2, 3, 4, 5};
volatile double d = 0.0;

// Identifiers
int main()
{
    int y = x + 5;
    float result = pi * y;
    char ch = 'a';
    _Bool isTrue = 1;
    _Complex z = 1.0 + 2.0;
    char c = 'Bfae';
    // Constants    
    int num = 100;
    float num2 = 10.5e-2;
    char *str = "Hello, World!";
    char *str = "Hello, World!";
    
    unsigned long long ull = 123456789012345;
    
    float scientific = 1.23e10;

    // Punctuators
    int a = 10, b = 20;
    a += b;
    b++;
    if (a > b)
    {
        a = a - b;
    }
    else
    {
        b = a * 2;
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    while (x > 0)
    {
        x--;
    }

    // Multi-line and Single-line Comments
    /* This is a multi-line comment
       that spans multiple lines */

    // This is a single-line comment

    // String literals with escape sequences
    char *escaped_str = "Tab\tNewLine\nBackslash\\DoubleQuote\"SingleQuote\'";

    // Complex expressions
    int complex = ((a << 2) & b) ^ (a | b);

    // Special characters in strings and char literals
    char special = '\n';
    char *special_str = "This string contains a \\ backslash and a \" double quote";

    // Nested and combined expressions
    int combined = (a + b) * (x - y) / z;
    combined = (a && b) || (x == y) ? a : b;

    // Floating-point operations
    double result_double = 1.0 / 3.0 * pi;
    double complex_expr = 2.0 + 3.0 * (1.0 / 2.0);

    // Switch case statement with multiple cases
    switch (a)
    {
    case 1:
        x = 10;
        break;
    case 2:
        x = 20;
        break;
    default:
        x = 0;
    }
    return 0;
}
// More complex function declarations
void print_hello()
{
    printf("Hello, World!\n");
}

-42