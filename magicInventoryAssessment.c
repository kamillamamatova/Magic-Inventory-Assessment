// Kamilla Mamatova
// COP 3502 - Section 0004
// Magic Inventory Assessment (MIA)
// 7 September 2024

// Use loops, arrays, structs, strings, dynamic memory allocation.

// Story:
// Find how much magic is being consumed by my school.
/* Failure of using the proper amount of magic can 
lead to a world-altering disaster. */
/* Organizing and generalizing the information recorded
by the school to ensure there is no cataclysm. */
/* Every person in the school has a role to fulfill. 
You have noted which magical materials are needed by each role. */
// Currently, every magical material requires some amount of magic.
/* As time goes on magical advancements enable making 
material using a different amount of magic */
// Some roles might require a different amount of magical material.
// Ensure that after each change, the required total amount of magic is known.

// Problem:
/* Takes in an initial set of roles, magical requirements for roles, 
and magic requirements for magical materials. */
/* Take in updates that include: changing the magic requirement of a magical
material, adding an existing magical needed by a role, removing a magical
material needed by a role, or changing the amount of magical material needed by
a particular role. */

// Output Specification:
/* Output for each update  single line containing an integer. The value on the
line should be the total amount of magic required by everyone in the Greak Oak
School of Magic after the corresponding update. */
// This program will not print the intial magic required.

/*
2 - 
            2 roles
2 QuickSilver 1 Resin 1 - 
            1st role needs 2 magical materials: Quick Silver(1) and Resin(1)
2 Resin 1 GraveDust 5 - 
            2nd role needs 2 magical materials: Resin(1) and Gravedust(5)
QuickSilver 1 Resin 10 GraveDust 100 - 
            QuickSilver = 1; Resin = 10; GraveDust = 100
3 - 
            There are three people
1 2 1 - 
            Person 1 is role 1, person 2 is role 2, and person 3 is role 1
            (1(1) + 1(10)) + (1(10) + 5(100)) +(1(1) + 1((10)) = 532
            - don't output the intial total
4 - 
            4 updates
1 Resin 5 - 
            Resin goes from 10 to 5
            (1(1) + 1(5)) + (1(5) + 5(100) + (1(1) + 1(5)) = 517
1 Resin 20 - 
            Resin goes from 5 to 20 
            (1(1) + 1(20) + (1(20) +5(100) + (1(1) + 1(20)) = 562
2 2 GraveDust 10 - 
            Changes role's 2 amount of GraveDust from 5 to 10
            (1(1) + (1(20)) + (1(20) + 10(100)) + (1(1) + 1(20)) = 1062
2 1 QuickSilver 4 - 
            Changes role's 1 amount of QuickSilver from 1 to 4 
            (4(1) + 1(20)) + (1(20) + 10(100)) + (4(1) + 1(20)) = 1068
*/

/*
517
562
1062
1068
*/

/*
2 - 
            2 roles
1 Plutonium 2 -
            1st role needs 1 magical material: Plutonium(2)
1 Plutonium 45 - 
            2nd role needs 1 magical material: Plutonium(45)
Plutonium 5
            Plutonium = 5 
5 - 
            5 people
1 1 1 1 2 - 
            Person 1 is role 1, person 2 is role 1, person 3 is role 1, 
            person 4 is role 1, and person 5 is role 2 
            2(5) + 2(5) + 2(5) + 2(5) + 45(5) = 265
1 - 
            1 update
2 2 Plutonium 50 - 
            Change role's 2 amount of Plutonium from 45 to 50
            2(5) + 2(5) + 2(5) + 2(5) + 50(5) = 290
*/

/*
290
*/
