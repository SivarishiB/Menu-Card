# Cafe Menu Ordering System

This program simulates a cafe menu ordering system where customers can select items from the menu, specify the quantity, and receive a total price for their order.

## Features

- **Menu Display:** Customers are presented with a menu displaying various items and their corresponding prices.
- **Item Selection:** Customers can select items by entering the item number.
- **Quantity Input:** Customers can specify the quantity of the selected item.
- **Price Calculation:** The program calculates the total price based on the selected item and quantity.
- **Reordering Option:** After completing an order, customers have the option to reorder or exit the program.

## Usage

1. **Compilation:** Compile the source code using a C compiler. For example:
   ```
   gcc -o cafe_menu cafe_menu.c
   ```

2. **Execution:** Run the compiled executable file. For example:
   ```
   ./cafe_menu
   ```

3. **Menu Navigation:** Upon execution, the program displays a menu with options to select items. Customers can enter the item number and quantity to place an order.

4. **Output:** The program calculates the total price of the order and displays a confirmation message. Customers can choose to reorder or exit the program.

## File Structure

- **cafe_menu.c:** Contains the source code for the cafe menu ordering system.
- **README.md:** This file providing information about the program.

## Notes

- Customize the menu items and prices according to the specific cafe's offerings.
- Consider adding error handling for invalid input values or edge cases to enhance the robustness of the program.
- Avoid using `goto` statements for control flow whenever possible, as they can make the code harder to understand and maintain.

## Author

[SIVARISHI B]
