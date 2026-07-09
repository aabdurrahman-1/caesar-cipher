# Caesar Cipher
A Caesar Cipher encryption and decryption tool built with C++ and Qt.

## What it does
Encrypts or decrypts a text message using the Caesar Cipher algorithm. 
The user enters a message, selects a shift number (1–25), chooses to 
encrypt or decrypt, and the result is displayed instantly.

## How it works
Each letter in the message is shifted forward (encryption) or backward 
(decryption) by the shift number. The alphabet wraps around, so shifting 
'Z' by 1 gives 'A'. Uppercase and lowercase letters are handled 
separately, preserving the original case.

## How to build and run
1. Open `CaesarCipher.pro` in Qt Creator
2. Click Build and then Run

## Requirements
- Qt Creator
- C++ compiler (MinGW or MSVC)

## Limitations
- Only alphabetic characters are encrypted. Numbers, spaces, and symbols 
are passed through unchanged.
- Both the sender and receiver must use the same shift number to 
encrypt and decrypt correctly.
