/* Lena is preparing for an important coding competition that is preceded by a number of sequential
preliminary contests. She believes in "saving luck", and wants to check her theory. Each contest is
described by two integers, and :
is the amount of luck associated with a contest. If Lena wins the contest, her luck balance will
decrease by ; if she loses it, her luck balance will increase by .
denotes the contest's importance rating. It's equal to if the contest is important, and it's equal
to if it's unimportant.
If Lena loses no more than important contests, what is the maximum amount of luck she can have after
competing in all the preliminary contests? This value may be negative.
For example -
Contest L[i] T[i]
1 5 1
2 1 1
3 4 0
If Lena loses all of the contests, her will be . Since she is allowed to lose important
contests, and there are only important contests. She can lose all three contests to maximize her luck atIf, she has to win at least of the important contests. She would choose to win the lowest
value important contest worth . Her final luck will be .
Input Format
The first line contains two space-separated integers and , the number of preliminary contests and the
maximum number of important contests Lena can lose.
Each of the next lines contains two space-separated integers, and , the contest's luck balance
and its importance rating.
Constraints
Output Format
Print a single integer denoting the maximum amount of luck Lena can have after all the contests
