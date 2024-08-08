# 0x14. Bit Manipulation

## Tasks

### 0. Binary to Unsigned Int
Write a function that converts a binary number to an unsigned int.

**Prototype:** `unsigned int binary_to_uint(const char *b);`

**Description:**
- `b` is pointing to a string of 0 and 1 characters.
- Returns the converted number, or 0 if there is one or more characters in the string `b` that are not 0 or 1, or if `b` is NULL.

### 1. Print Binary
Write a function that prints the binary representation of a number.

**Prototype:** `void print_binary(unsigned long int n);`

**Description:**
- You are not allowed to use arrays or malloc.
- You are not allowed to use the `%` or `/` operators.

### 2. Get Bit
Write a function that returns the value of a bit at a given index.

**Prototype:** `int get_bit(unsigned long int n, unsigned int index);`

**Description:**
- `index` is the index, starting from 0 of the bit you want to get.
- Returns the value of the bit at index `index` or -1 if an error occurred.

### 3. Set Bit
Write a function that sets the value of a bit to 1 at a given index.

**Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`

**Description:**
- `index` is the index, starting from 0 of the bit you want to set.
- Returns 1 if it worked, or -1 if an error occurred.

### 4. Clear Bit
Write a function that sets the value of a bit to 0 at a given index.

**Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`

**Description:**
- `index` is the index, starting from 0 of the bit you want to set.
- Returns 1 if it worked, or -1 if an error occurred.

### 5. Flip Bits
Write a function that returns the number of bits you would need to flip to get from one number to another.

**Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

**Description:**
- You are not allowed to use the `%` or `/` operators.

### 6. Endianness
Write a function that checks the endianness.

**Prototype:** `int get_endianness(void);`

**Description:**
- Returns 0 if big endian, 1 if little endian.

### 7. Crackme3
Find the password for this program.

**Description:**
- Save the password in the file `101-password`.
- The file should contain the exact password, no new line, no extra space.

