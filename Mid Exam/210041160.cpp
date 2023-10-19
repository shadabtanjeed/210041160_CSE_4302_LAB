#include <iostream>
#include <string>

using namespace std;

class DessertRecipe
{
private:
    const static int max_value = 10;
    int count;
    int ingredient_isGram[max_value];
    string dessertName;
    string ingredients[max_value];
    float ingredient_measurement[max_value];

public:
    DessertRecipe() : count(0)
    {
    }

    ~DessertRecipe()
    {
    }

    void addIngredients(const string name, const float measurement, const int isGram)
    {
        if (count > -1 && count <= max_value)
        {
            ingredients[count] = name;
            ingredient_measurement[count] = measurement;
            ingredient_isGram[count] = isGram;

            count++;
            return;
        }

        cout << "Error" << endl;
        return;
    }

    void setDessertName(string name)
    {
        dessertName = name;
    }

    void ShowIngredients()
    {
        cout << "Dessert Name: " << dessertName << endl;

        cout << endl;

        for (int i = 0; i < count - 1; ++i)
        {

            for (int j = i; j < count - 1; ++j)
            {
                if (ingredient_measurement[j] < ingredient_measurement[j + 1])
                {
                    string temp1; // name
                    float temp2;  // measure
                    int temp3;    // isgram

                    temp2 = ingredient_measurement[j];
                    ingredient_measurement[j] = ingredient_measurement[j + 1];
                    ingredient_measurement[j + 1] = temp2;

                    temp3 = ingredient_isGram[j];
                    ingredient_isGram[j] = ingredient_isGram[j + 1];
                    ingredient_isGram[j + 1] = temp3;

                    temp1 = ingredients[j];
                    ingredients[j] = ingredients[j + 1];
                    ingredients[j + 1] = temp1;
                }
            }
        }

        for (int i = 0; i < count; ++i)
        {
            cout << "Ingredient Name: " << ingredients[i] << endl;
            cout << "Measurement: " << ingredient_measurement[i] << " ";

            if (ingredient_isGram[i] == 1)
                cout << "grams" << endl;

            else
                cout << "mililiters" << endl;

            cout << endl;
        }
    }

    int getCount() const
    {
        return count;
    }
};

class ImperialConverter
{

private:
    float ounce;
    float fluid_ounce;
    const float GTO = 0.5;
    const float GTFO = 2;
    int isGram;
    float gm;
    float ml;
    int count2;

public:
    ImperialConverter()
    {
    }

    ~ImperialConverter()
    {
    }

    void SetValues(const float value, const int isG)
    {
        if (isG == 1)
        {
            isGram = 1;
            gm = value;
            ounce = value * GTO;
        }

        else
        {
            isGram = 0;
            ml = value;
            fluid_ounce = ml * GTFO;
        }
    }

    void Print() const
    {
        cout << "Measurements: ";

        if (isGram == 1)
        {
            cout << ounce << " ounce" << endl;
        }

        else
        {
            cout << fluid_ounce << " fluid ounce" << endl;
        }
    }
};

int main()
{
    DessertRecipe d1;

    d1.setDessertName("Cake");
    d1.addIngredients("Flour", 10, 1);
    d1.addIngredients("Sugar", 17, 1);
    d1.addIngredients("Vinegar", 9, 0);
    d1.addIngredients("Water", 8, 0);

    ImperialConverter ic1;
    ImperialConverter ic2;
    ImperialConverter ic3;
    ImperialConverter ic4;

    ic1.SetValues(10, 1);
    ic2.SetValues(17, 1);
    ic3.SetValues(9, 0);
    ic4.SetValues(8, 0);

    ic1.Print();
    ic2.Print();
    ic3.Print();
    ic4.Print();

    cout << endl;

    d1.ShowIngredients();
}