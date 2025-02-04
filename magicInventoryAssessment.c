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
#include <stdio.h>
#include <string.h>
#include <std.lib>

/*struct mag_mat_for_role {
    int type ; // index into the list of magical materials
    long long amount_needed ;
};

struct role {
    int materials_needed ;
    mag_mat_for_role * item_list ;
};

struct mag_mat_for_list {
    char * mat_name ;
    long long total_amount_needed;
    long long magic_required ;
};*/

struct role {
    int count;
    int num_items;
    int * indices;
    int * amount;
};

struct mat {
    char * name;
    long long int total;
    long long int mag_per;
};

struct matArrayList {
    mat * array;
    int size, cap;
};

// Prototypes
// Dynamic array that will store magical materials
matArrayList * createMatArrayList();
/* Searches the MatArrayList for a magical material 
by its name and returns its index */
int find(matArrayList * list, char * name);
// Adds a new magical material to the MatArrayList
void append(matArrayList * list, char * name);

// Main function
int main(){
    
    int role_count;
    // Read in number of roles
    scanf("%d", &role_count);
    
    // Array of roles
    struct role *roles = (struct role *)malloc(sizeof(role_count * struct role));
    
    // Array list of materials
    struct matArrayList *materials = createMatArrayList();
    
    // Iterate through roles and read them in 
    for (int i = 0; i < roles.count; i++){
        // Read in the number of materials needed for this role
        scanf("%d", &roles.num_items[i]);
        // Allocate room in the current role
        // ??
        roles[i].indices = (int *)malloc(roles.num_items * sizeof(int));
        roles[i].amount = (int *)malloc(role.num_items * sizeof(int));
        roles[i].coumt = 0;
        // Loop through the needed materials and add them
        for (int j = 0; j < roles.num_items; j++){
            // Read in the name and the required number
            scanf("%c", " ", "%d", mat.name, &role.*amount);
            // Find the index of the material based on the name
            int matIndex = find(materials, materials.name);
            //??
            if (matIndex == -1){
                // Add the materials name into the matrial list (matArrayList)
                append(materials, materials.name);
                matIndex = materials->size - 1;
            }
            // ??
            // Store the material index and amount in the role
            roles[i].indices[i] = matIndex;
            role[i].amount[j] = roles.amount;
        }
    }
    
    // Loop until a new line is encountered
    while (roles.num_items != '\n' && mat.name != '\n'){
        // Iterate through roles and read them in 
        for (int i = 0; i < roles.count; i++){
            // Read in the number of materials needed for this role
            scanf("%d", &roles.num_items[i]);
            // Allocate room in the current role
            // ??
            roles[i].indices = (int *)malloc(roles.num_items * sizeof(int));
            roles[i].amount = (int *)malloc(role.num_items * sizeof(int));
            roles[i].coumt = 0;
            // Loop through the needed materials and add them
            for (int j = 0; j < roles.num_items; j++){
                // Read in the name and the required number
                scanf("%c", " ", "%d", mat.name, &role.*amount);
                // Find the index of the material based on the name
                int matIndex = find(materials, materials.name);
                //??
                if (matIndex == -1){
                    // Add the materials name into the matrial list (matArrayList)
                    append(materials, materials.name);
                    matIndex = materials->size - 1;
                }
                // ??
                // Store the material index and amount in the role
                roles[i].indices[i] = matIndex;
                role[i].amount[j] = roles.amount;
            }
        }
    }
    
    /*// Read the magic requirements for each material
    for (int i = 0; i < materials->size; i++) {
        long long int mag_required;
        scanf("%lld", &mag_required);
        materials->array[i].mag_per = mag_required;
    }*/
    
    //int numPeople;
    // Read in the number of people
    scanf("%d", &roles.count);
    
    // Iterate through all people
    for (int i = 0; i < roles.count; i++){
        int roleIndex;
        // Read in the role of this current person
        scanf("%d", &roleIndex);
        // ??
        roleIndex--;
        // Update the count for the role
        roles[roleIndex].count++;
        // Loop through all the materials types needed by the current role 
        for (int j = 0; j < roles[roleIndex].num_items; j++){
            // Get the index of this ite,
            int matIndex = roles[roleIndex].indices[j];
            int matAmount = roles[roleIndex].amount[j];
            // ??
            materials->array[matIndex].total += mat_amount;
        }
    }
    
    /*// Calculate initial total magic required
    long long int total_magic = 0;
    for (int i = 0; i < materials->size; i++) {
        total_magic += materials->array[i].total * materials->array[i].mag_per;
    }*/
    
    int numUpdates;
    // Read in the number of updates
    scanf("%d", &numUpdates);
    
    // Loop through all the updates
    for (int i = 0; i < numUpdates; i++){
        int update;
        // Read in the update
        scanf("%d", &update);
        // Check the update type
        if (update == 1){
            char material.name[101];
            // ??
            long long int newMagPer;
            // Read in the material name and magic requirement
            scanf("%s %lld", material.name, &newMagPer);
            
            // Find the index of the material
            updateMagicRequired(materials, material.name, newMagPer);
            
            // Update the material
            
        }
        else if (update == 2){
            // Read in the role
            int roleIndex;
            // Read in the material name
            char material.name[101];
            // Read in the new amount
            int new_amount;
            
            scanf("%d %c %d", &roleIndex, material.name, &new_amount);
            roleIndex--;
            
            // Find the index of the material
            int matIndex = find(materials, materials.name);
            // Find the index of the role
            // roles.count??
            int roleIndex = find(roles, roles.count)
            // Update the answer
            // Update the amount of this item needed
            // ??
            updateRoleMaterial(&roles[roleIndex], matIndex, new_amount);
        }
        // Print the reslting answer
        printf("%lld\n", total_magic);
    }
    
    free()
    
    for (int i = 0; i < role.material_needed; i++){
        scanf("%c", &mag_mat_for_list.mat_name[i]);
        for (int j = 0; j < role.materials_needed; j++){
            scanf(" ", "%d", &)
        }
    }
    // Output
    long long int total = 0;
    
    // How many people
    int people;
    scanf("%d", &people);
    
    int assign_role;
    for (int i = 0; i < people; i++){ //assign_role[i] != '\0'
        scanf(" ", "%d", &assign_role[i]);
    }
    
    scanf("%d", &amount_updates);
    
