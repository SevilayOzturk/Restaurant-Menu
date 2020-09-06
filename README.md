# Restaurant-Menu
In this homework, I wrote a simple food kiosk menu, and allow the user to enter different options to make a purchase. Every option generates a different response from the kiosk.
The program starts by printing the following menu:
Please select a menu item from the list below: 
1 – View food menu
2 – Pay total due
3 – Add $5 in credit
4 – Clear order

The user can input a numerical menu option between 1 and 4. If an incorrect entry is inputted then the program will print.
Please enter a valid option!
Below is an explanation of each menu option:
	• 1 – View food menu: This option will go into another menu which will display food options to the user. The user can input a numerical menu option between 1 and 5.
What would you like to add to your order?
(1) Chicken Sandwich: $3.45
(2) Chicken Salad: $4.00
(3) French Fries: $1.99
(4) Hotdog: $2.99
(5) Pizza: $3.99
(6) Go to main menu
Your current total is: $0.00
If an incorrect entry is inputted then the program will print.
Invalid item number please try again
This menu will loop until the user enters option 6 which will bring them back to the main menu. When the user inputs an option between 1 and 5 the program will display a confirmation of the selected item. Make sure that each corresponding menu option prints the exact confirmation format listed below:
You have added a Chicken Sandwich to your order.
You have added a Chicken Salad to your order.
You have added French Fries to your order.
You have added a Hot Dog to your order.
You have added a Slice of Pizza to your order.
Below is an example of the console output when the user chooses option 1 and then 2 (note that the input is not visible in the output).
What would you like to add to your order?
(1) Chicken Sandwich: $3.45
(2) Chicken Salad: $4.00
(3) French Fries: $1.99
(4) Hotdog: $2.99
(5) Pizza: $3.99
(6) Go to main menu
Your current total is: $0.00
You have added a Chicken Sandwich to your order.
What would you like to add to your order?
(1) Chicken Sandwich: $3.45
(2) Chicken Salad: $4.00
(3) French Fries: $1.99
(4) Hotdog: $2.99
(5) Pizza: $3.99
(6) Go to main menu
Your current total is: $3.45
You have added a Chicken Salad to your order.
What would you like to add to your order?
(1) Chicken Sandwich: $3.45
(2) Chicken Salad: $4.00
(3) French Fries: $1.99
(4) Hotdog: $2.99
(5) Pizza: $3.99
(6) Go to main menu
Your current total is: $7.45
	• 2 – Pay total due: This option allows the user to pay the amount that is due. The user will start from an initial budget of $10 and if the user is able to afford the total due then the purchase will go through and the user will see the following text:
Your total due is: $7.45
Thank you! Your change is: $2.55
Enjoy your meal!
If the user cannot afford the purchase they will received the following console text and exit the program:
Insufficient funds!
	• 3 - Add $5 in credit: This option increments the available credit by $5, and prints the new available credit (with 2 digits precision):
Credit available: $<credit>
	• 4 – Clear order: This menu option will reset the total balance due to $0:
Current order balance has been cleared. Current due: $0.00 
Below is an example of what the program should output based on the input 1 3 5 6 2.
Please select a menu item from the list below
1 - View Food Menu
2 - Pay total due
3 - Add $5 in credit
4 - Clear order
What would you like to add to your order?
(1) Chicken Sandwich: $3.45
(2) Chicken Salad: $4.00
(3) French Fries: $1.99
(4) Hotdog: $2.99
(5) Pizza: $3.99
(6) Go to main menu
Your current total is: $0.00
You have added French Fries to your order.
What would you like to add to your order?
(1) Chicken Sandwich: $3.45
(2) Chicken Salad: $4.00
(3) French Fries: $1.99
(4) Hotdog: $2.99
(5) Pizza: $3.99
(6) Go to main menu
Your current total is: $1.99
You have selected added a Slice of Pizza to your order
What would you like to add to your order?
(1) Chicken Sandwich: $3.45
(2) Chicken Salad: $4.00
(3) French Fries: $1.99
(4) Hotdog: $2.99
(5) Pizza: $3.99
(6) Go to main menu
Your current total is: $5.98
Please select a menu item from the list below
1 - View Food Menu
2 - Pay total due
3 - Add $5 in credit
4 - Clear order
Your total due is: $5.98
Thank you! Your change is: $4.02
Enjoy your meal!
Every dollar amount must be printed with 2 digits precision. Check section 9.2 of this book for how to use setprecision and iomanip to achieve this result.
