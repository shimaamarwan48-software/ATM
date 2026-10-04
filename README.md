# ATM Simulator (C++)

A simple console-based ATM machine simulation written in C++. The user logs in with a password, then can check the balance, withdraw money, or deposit money.

## Features

- Password-protected access
- Check current balance
- Withdraw money (rejected if the amount exceeds the balance)
- Deposit money
- Retry option when the password is wrong
- Re-prompt when the menu choice is invalid (greater than 4)

## Requirements

- A C++ compiler such as `g++`, `clang++`, or MSVC
- Any C++11 (or newer) standard

## Build and Run

Save the source file as `atm.cpp`, then:

```bash
g++ atm.cpp -o atm
./atm        # on Windows: atm.exe
```

## Usage

1. The menu is displayed:

   ```
   ***** Menu *****
   1. balance
   2. withDraw
   3. deposit
   4. Exit
   ```

2. Enter the password. The default password is `1234`.
   - If it is wrong, you are asked whether to try again: `Y` to retry, `N` to quit.
3. Choose an option (1-4):

   | Choice | Action |
   | ------ | ------ |
   | 1 | Show the current balance |
   | 2 | Withdraw an amount (must not exceed the balance) |
   | 3 | Deposit an amount |
   | 4 | Exit the program |

The starting balance is `1000`.

## Code Structure

| Part | Description |
| ---- | ----------- |
| Global variables | `balance`, `deposit`, `withdraw`, `password`, `choice` |
| `show()` | Prints the ATM menu |
| `process()` | Handles login, reads the user's choice, and performs the operation inside a loop until Exit is chosen |
| `main()` | Calls `show()` then `process()` |

## Known Limitations

This is a learning project, so it keeps things simple. Possible improvements:

- The password is hard-coded (`1234`) and there is no limit on wrong attempts.
- The menu is shown only once at startup, not after each operation.
- Input is not fully validated: entering letters instead of numbers can make the program loop, and a menu choice below 1 is not rejected.
- `withdraw` is an `int` while `balance` is a `double`, so decimal withdrawals are not supported.
- All variables are global; passing them as function parameters would be cleaner.
- The balance is not saved, so it resets to `1000` each time the program starts.

## License

Free to use for learning purposes.
