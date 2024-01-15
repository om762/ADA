#include<iostream>
#include<unordered_map>
#include<random>

using namespace std;

unordered_map<int, int> p2h(int P, int H)
{
    unordered_map<int, int> rel;
    for (int i = 0; i < P; ++i)
    {
        rel[i] = -1;
    }

    int currentPigeon = 0;
    int emptyHole[H];
    for (int i=0; i<H; i++)
    {
        emptyHole[i] = i;
    }
    int s = 0;
    int e = H;

    while (P>0)
    {
        if (s!=e)
        {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> distribution(s, H - 1);

            int randomPos = distribution(gen);
            int hole = emptyHole[randomPos];

            rel[currentPigeon] = hole;

            //Effect
            currentPigeon++;
            P--;

            int temp = emptyHole[randomPos];
            emptyHole[randomPos] = emptyHole[s];
            emptyHole[s] = temp;
            s = s +1; 
        }

        else
        {
            s = 0;
            for (int i=0; i<H; i++)
                {
                    emptyHole[i] = i;
                }            
        }
    }
    return rel;
}

int findCollusion(unordered_map<int, int> func, int P, int H)
{
    unordered_map<int, int> ass;
    for (int i = 0; i < P; i++)
    {
        int pigeon = i;
        int hole = func[pigeon];

        if (ass[hole] == -1)
        {
            // If the hole is empty, assign the pigeon to the hole
            ass[hole] = pigeon;
        }
        else
        {
            // If the hole is already occupied, we found a collision
            return hole;
        }
    }

    // If no collision is found, return -1
    return -1;
}


int main() 
{
    int P = 7; // Number of pigeons
    int H = 5; // Number of holes

    unordered_map<int, int> pigeonToHole = p2h(P, H);
    
    // Print the allocated pigeons to holes
    for (const auto& entry : pigeonToHole)
    {
        cout << "Pigeon " << entry.first << " -> Hole " << entry.second << endl;
    }

    int collusionPoint = findCollusion(pigeonToHole, P, H);

    cout<<"Collision at "<<collusionPoint;

    return 0;
}