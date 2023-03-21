# A. Black Square

- <h6> <center> Time limit per test 1 second </center> </h6>
- <h6> <center> Memory limit per test 256 megabytes </center> </h6>
- <h6> <center> input: standard input </center> </h6>
- <h6> <center> output: standard output </center> </h6>

Quite recently, a very smart student named Jury decided that lectures are boring, so he downloaded a game called "Black Square" on his super cool touchscreen phone.

In this game, the phone's screen is divided into four vertical strips. Each second, a black square appears on some of the strips. According to the rules of the game, Jury must use this second to touch the corresponding strip to make the square go away. As Jury is both smart and lazy, he counted that he wastes exactly ai calories on touching the i-th strip.

You've got a string s, describing the process of the game and numbers *a1, a2, a3, a4*. Calculate how many calories Jury needs to destroy all the squares?

<h5>Input</h5>

The first line contains four space-separated integers *a1, a2, a3, a4* `(0 ≤ a1, a2, a3, a4 ≤ 104)`.

The second line contains string *s* `(1 ≤ |s| ≤ 105)`, where the і-th character of the string equals *"1"*, if on the *i-th* second of the game the square appears on the first strip, *"2"*, if it appears on the second strip, *"3"*, if it appears on the third strip, *"4"*, if it appears on the fourth strip.

<h5>Output</h5>

Print a single integer — the total number of calories that Jury wastes.

<h5>Example 1</h5>

<h6>Input</h6>

>1 2 3 4
>
>123214

<h6>Output</h6>

>13

<h5>Example 2</h5>

<h6>Input</h6>

>1 5 3 2
>
>11221


<h6>Output</h6>

>13

### Note

## Codeforces Link
[A. Black Square](https://codeforces.com/problemset/problem/431/A)
