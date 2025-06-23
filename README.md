# Linear Error-Correcting Codes using Finite Fields

This project demonstrates the implementation of linear error-correcting codes using finite fields (Galois fields) in C++. It includes simple encoder and decoder programs for two different code parameters, leveraging a Galois field arithmetic library.

## Project Structure

```
linear error correction/
  Encoder.cpp      # Encoder for a (7,4) code
  decoder.cpp      # Decoder for a (7,4) code
  encoder2.cpp     # Encoder for a (15,11) code
  decoder2.cpp     # Decoder for a (15,11) code
```

## Features
- **Encoding**: Generates codewords from messages using a generator matrix over a finite field.
- **Decoding**: Detects and corrects errors in received codewords using a parity-check matrix and syndrome decoding.
- **Finite Field Arithmetic**: All operations are performed over GF(4) (or other fields, as defined in the code) using an external Galois field library.

## Dependencies
- **C++17 or later**
- **Galois Field Arithmetic Library**
  - The code expects a header `<galois/galois.h>`. You can use any C++ Galois field library that provides similar functionality, such as:
    - [wkjarosz/galois](https://github.com/wkjarosz/galois)
    - [partow/galois](https://www.partow.net/projects/galois/)
    - [saiedhk/GaloisCPP](https://github.com/saiedhk/GaloisCPP)
  - Make sure to adjust include paths and linking as needed for your chosen library.

## Building

You can compile the programs using `g++` (or any C++17 compatible compiler). For example:

```
g++ -std=c++17 -I<path-to-galois-include> linear\ error\ correction/Encoder.cpp -o encoder
```

Replace `<path-to-galois-include>` with the path to the Galois field library headers. Repeat for the other source files as needed.

## Usage

Run the compiled executables from the command line:

```
./encoder
./decoder
./encoder2
./decoder2
```

Each program will print the encoded or decoded codeword to the console.

## Notes
- The code is for educational and demonstration purposes. For real-world applications, further error handling and input/output features may be needed.
- The Galois field size and code parameters are hardcoded in the source files. You can modify them to experiment with different codes.

## License
This project is provided for educational use. Please check the license of the Galois field library you choose to use. 