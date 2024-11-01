// Nested if else and recursive functions  

int factorial(int num) {                               // recursive function
    if (num == 0) 
        return 1; 
    return num * factorial(num - 1); 
} 

int main() {  
    int value;
    value = -5;

    if (value > 10) {
        value = 10;
    } else {
        if (value < 0) {                            // nested if-else
            value = 0;
        } else {
            value = 5;
        }
    }
    int result = factorial(value); 
    return 0;  
}
