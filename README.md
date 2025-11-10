# C-Invoice-System
A simple C program that prints an online shop invoice with GST.

# 🛒 Online Shop Invoice Generator (C Program)

This is a simple **C program** that generates an **invoice for online shopping orders**.  
It allows a user to enter customer details, list of purchased products, and automatically calculates:
- Total amount
- 5% GST
- Grand total

---

## 🧠 Features
- Accepts **multiple products** with name, quantity, and price.  
- Calculates **subtotal, GST (5%)**, and **grand total**.  
- Displays a **well-formatted invoice** for the customer.  
- Uses **structures (`struct`)** for `product` and `customer` data organization.

---

## 💻 Sample Output
--------------------------------------------------------
                   ONLINE SHOP INVOICE
--------------------------------------------------------
Customer Name: Alan
Order ID     : 1547
--------------------------------------------------------
Product Name            Qty     Price           Amount
--------------------------------------------------------
Key                     5       48.00           240.00
Chain                   1       175.00          175.00
Oreo                    2       35.00           70.00
Malkist                 2       55.00           110.00
Clock                   1       350.00          350.00
--------------------------------------------------------
Total Bill          : 945.00/-
GST                 : 47.25/-
Grand Total         : 992.25/-
--------------------------------------------------------
Thank you for shopping!


