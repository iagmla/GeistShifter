# GeistShifter

GeistShifter is a rotor machine with 52 rotors.  It takes a 52 letter key and may be secure up to the length of the key.

One can always replace the default A-Z rotors with custom rotors for increased strength.

# Usage

gs -e inputfile outputfile ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ

gs -d outputfile decryptedfile ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ

# Secure Rotor Generation

To generate truly random rotors, do one of the following:

1. Playing Cards Method

Find a box of appropriate size to allow a deck of cards to adequately shake about. Place the deck of cards in the box, shake until satisfied. Remove the cards from the box and splash the cards on a flat surface. Return the cards to the box and shake more, remove and splash. Repeat until satisfied.

2. D26 Method

Roll one D26 (yes, they exist) on a smooth, flat surface. Record the numbers, discarding a value that you already have for a rotor. Repeat until all values for all rotors are taken.

For the control rotor, roll two D26 using the above instructions.
