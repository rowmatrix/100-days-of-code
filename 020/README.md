Start off by reading a string from the user.
After reading the string, you will prompt the user to see if he or she would like to determine whether the string is a palindrome (the same forwards as backwards, ignoring whitespace) or to determine if subsequent words are sub-anagrams.
A sub-anagram is a word that can be made from a subset of the letters in a word.
If the user selects the sub-anagram option, you will then prompt him or her to enter another string, from which you will determine if the second string is a sub-anagram of the first.
If so, you will tell the user; if not, you will the user which characters violate the sub-anagram property.

Continue to allow the user to enter candidate sub-anagram strings until he or she enters `\q`, in which case you will return to prompting the user to enter the first string again.
From the first string prompt, if the user entes `\q`, you will display a thank you message and exit the program.

Your program will be case-insensitive, meaning that it doesn't matter if the user enters the initial phrase using capital or lowercase letters.
Your program will also be whitespace-insensitive, meaning that it doesn't matter if there are spaces or tabs in the input — they will be ignored by your program.

There are two cases when phrases are not sub-anagrams of the original word — when a character is used that is not in the original word, or when a character is used more than the number of times it appears in the original word.
The output for each case is different, as can be seen below in the sample execution.

When prompting the user to enter `yes` or `no`, it doesn't matter if the word is entered with capital or lowercase letters, but if the user does not type `yes` or `no`, you will prompt them with the same question again.

The output should be exactly the same as what is listed below.

```
Enter a word or phrase (or \q to quit): race car
Would you like to see if the phrase is a palindrome: ye
Would you like to see if the phrase is a palindrome: yes
The phrase "race car" IS a palindrome.

Would like to play the sub-anagram game? Yes
Enter a potential sub-anagram phrase (or \q to go back): jeff
"jeff" is NOT a sub-anagram of "race car"
  "race car" does not contain a "j"
  "race car" does not contain a "f"
  "race car" does not contain a "f"

Enter a potential sub-angram phrase (or \q to go back): care
"care" IS a sub-anagram of "race car"

Enter a potential sub-anagram phrase (or \q to go back): rarer
"rarer" is NOT a sub-anagram of "race car"
  "race car" does not contain 3 r's

Enter a potential sub-anagram phrase (or \q to go back): \q

Enter a word or phrase (or \q to quit): Hello World
Would you like to see if the phrase is a palindrome? no

Would you like to play the sub-anagram game? YES
Enter a potential sub-anagram phrase (or \q to go back): dell row
"dell row" IS a sub-anagram of "hello world"

Enter a potential sub-anagram phrase (or \q to go back): \q

Enter a word or phrase (or \q to quit): \q

Thank you for using my program!
```
