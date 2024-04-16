
#include <iostream>
int main()
{

    // an array storing 10 integers
    //  int scores[10]; //  STORED JUNK(garbage) DATA: "scores[0]849345856",scores[1]180
    *
        // Reading data
        std::cout << "scores[0]" << scores[0] << std::endl;
        std::cout << "scores[1]" << scores[1] << std::endl;

// read using loop.
for (int i = 0; i < 10; i++)
{
std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
}
*/
    *
        // write data into Array.
        scores[0] = 20;
        scores[1] = 21;
        scores[2] = 22;

    //now print the scores using loop.

        for (int i = 0; i < 10; i++)
        {
            std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
        }

    */

    //  write data in lOOP................................................................................................................................
    *
for (int i = 0; i < 10; i++)
{
scores[i] = i * 10;
}

for (int i = 0; i < 10; i++)
{
std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
}
*/

    *
        // Declare and initialize at the same time................................................................................................
        double salaries[5]{12.7, 13.2, 7.5, 8.1, 9.3};

        for (int i = 0; i < 5; i++)
        {
            std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
        }
    */
    *
        // if you don't initialize all the elements, those you leave out will........................................................................
        // are initializedto 0

        int families[5]{12, 7, 5};

        for (int i = 0; i < 5; i++) 
        {
            std::cout << "families[" <<  i << "]: "<< families[] << std::endl;
        }
    */
    *
        // omit(exclude) the size of the array at declaration................................................................
        int class_sizes[]{10, 12, 15, 11, 18, 17, 23};

        // will print this with range based for loop
        for (auto value : class_sizes)
        {
            std::cout << "value " << value << std::endl;
        }
     */
    //................................................................................................................................
        const int birds[]{10, 12, 15, 11, 18, 17, 23};
        birds[2] = 8;
    

    // operations(sum) scores array, store result in sum................................................................................................

    int scores[]{2, 5, 8, 2, 5, 6, 9};

    int sum = 0;
    for (int element : scores)
    {
        sum = sum + element; // 37
    }
    std::cout << "scores sum: " << sum << std::endl;

    return 0;
}