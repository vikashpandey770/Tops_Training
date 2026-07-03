


Variable: likes
Address : 0x1000
Value   : 100

Pointer : ptrLikes
Address : 0x2000
Value   : 0x1000  -----> points to likes

likes is an integer variable stored at address 0x1000 and contains the value 100.
ptrLikes is a pointer variable stored at a different address (0x2000).
The value stored in ptrLikes is 0x1000, which is the address of likes.
Dereferencing the pointer (*ptrLikes) gives the value stored at address 0x1000, which is 100.
