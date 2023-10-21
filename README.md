# 🚀 Custom Printf Function 🚀

![Printf Fun](https://media.giphy.com/media/GwtfUx2P2HnvByDZdg/giphy.gif)


## How to Use 📝

Using our custom printf is as easy as pie! Just follow these simple steps:

1. Install the repo for source files.


2. Call the `_printf` function with your format string and arguments:
   ```c
   int result = _printf("Hello, %s! 🌟\n", "World");
   ```

3. Watch the magic happen! ✨

The function returns the number of characters printed (excluding the null byte used to end output to strings), and it writes output to stdout.

## 🎉 Supported Format Specifiers 🎉

Our custom printf supports the classics and some cool new additions:

- `%c`: Character 😎
- `%s`: String 📜
- `%%`: Percent sign (because everyone loves a good percentage) 🤑
- `%d`, `%i`: Signed integer 🧮
- `%u`: Unsigned integer 🚀
- `%o`: Octal integer 🐙
- `%x`: Hexadecimal integer (lowercase) 🔥
- `%X`: Hexadecimal integer (uppercase) 🔥
- `%p`: Pointer 📍

## 🎈 Custom Conversion Specifiers 🎈

But wait, there's more! Our custom printf introduces some unique conversions that you won't find anywhere else:

- `%b`: Unsigned integer converted to binary 🤖
- `%S`: String with non-printable characters escaped as `\x` followed by the ASCII code value in hexadecimal (uppercase) format. It's like emojis for your strings! 🎨
- `%r`: Reversed string. Turn things around! 🔄
- `%R`: Rot13'ed string. For those secret messages 🤐

## 🚚 Installation 🚚

Installing our custom printf is as smooth as a penguin on ice:

1. Clone this repository (you're already a pro at this):
   ```bash
   git clone https://github.com/hiba-emording/printf.git
   ```

2. Include the `main.h` header in your C code.

3. Compile your code along with source files:
   ```bash
   gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
   ```

4. Run your program like a boss:
   ```bash
   ./your_program
   ```

## 💡 Examples 💡

Let's have some fun with Custom Printf! 🎊

```c
_printf("Hello, %s! 🌎\n", "World");
_printf("Binary: %b 🧬\n", 42);
_printf("Non-printable character: %S 😱\n", "\x07");
_printf("Reversed: %r 🔄\n", "abcdefg");
_printf("Rot13: %R 🕵️\n", "Hello, World!");
```

## 🎉 Fun Fact 🎉

Did you know that the first "printf" function was part of the original C programming language and introduced by Ken Thompson in the early 1970s? It has been a faithful companion to programmers for decades! Our custom printf is here to add a modern twist to this classic, bringing fun and excitement to your C coding adventures. 🚀


