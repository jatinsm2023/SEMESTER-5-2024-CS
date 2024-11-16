// Declarations (variables(int, float, char), 1D array, 2D array, functions) and arithmetic operations

// Global declarations
float decimal = 2.3;
char letter;	
int var1, var2, var3, var4, var5, var6, var7;
int arr1D[10];                  // 1D array declaration
float arr2D[20][50];            // 2D array declaration
int num = 4, *ptr, result;      // pointer declaration

void func (int input, float dec) {
    dec = (float)(input ^ 7);
    return;
}

int main () {
    // Variable Declaration
    int value1 = 120;
    int value2 = 17;
    char char1 = 'c', char2 = 'a'; // character definitions

    if(value1>0){
        value1 = 1;
    }
    // Arithmetic Operations
    var1 = value1 + value2;
    var2 = value1 - value2;
    var3 = value1 * value2;
    var4 = value1 / value2;
    var5 = value1 % value2;
    var6 = value1 & value2;
    var7 = value1 | value2;
    
    value2 = var1 << 2;
    value1 = var1 >> 1;

    return 0;
}
