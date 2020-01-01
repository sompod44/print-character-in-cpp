#ifndef SOMPOD_MAGIC_H_INCLUDED
#define SOMPOD_MAGIC_H_INCLUDED


void gm_A(int value, int hold) // This function for Character 'A'
{
    int n = value;
    int x;
    if(hold == 1)
    {
        x = n;
    }
    else
    {
        x = n-hold;
        ++x;
    }
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (j == x || j == n + i - 1)
                printf("%c", 'A');
            else if (j >= x && j <= n + i - 1 && i == n / 2 + 1)
                printf("%c", 'A');
            else
                printf("%c", ' ');
        }
        printf(" ");
        break;
        x--;
    }
}// end of function

void gm_B(int value,int hold) // this function for character 'B'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || ((i == 1 || i == n || i == n / 2 + 1) && j <= n - 1))
                printf("%c", 'B');
            else if (i != 1 && i != n && j == n)
                printf("%c", 'B');
            else
                printf("%c", ' ');
        }
        printf(" ");
        break;
    }

} // end of function


void gm_C(int value,int hold) // this function of C
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1)
                printf("%c", 'C');
            else
                printf(" ");
        }
        printf(" ");
        break;
    }

} // end of function

int gm_D(int value,int hold, int x)//this function for character 'D'
{
    int n = value;

    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == x)
                printf("%2c", 'D');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        if (hold <= n / 2)
        {
            x++;
        }

        else
        {
            x--;
        }

        return x;
        break;

    }
}// end of function

void gm_E(int value,int hold)// this function for character 'E'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == 1 || i == n || i == n / 2 + 1)
                printf("%2c", 'E');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }

} // end of function

void gm_F(int value,int hold) // this function for character 'F'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == 1 || i == n / 2 + 1)
                printf("%2c", 'F');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }

} // end of function


void gm_G(int value,int hold)// this function for character 'G'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == 1 || i == n || (i > n / 2 && j == n) || (i == (n / 2 + 1) && j > n / 2))
                printf("%2c", 'G');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function

void gm_H(int value,int hold)// this function for character 'H'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == n / 2 + 1)
                printf("%2c", 'H');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function


void gm_I(int value,int hold)// this function for character 'I'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == n / 2 + 1)
                printf("%2c", 'I');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function


void gm_J(int value,int hold)// this function for character 'J'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || (i == n && j <= n / 2 + 1) || j == n / 2 + 1)
                printf("%2c", 'J');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        return;
    }

}// end of function

int gm_K(int value,int hold,int x)// this function of character 'K'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n / 2 + 1; j++)
        {
            if (j == 1 || j == x)
                printf("%2c", 'K');
            else
                printf("%2c", ' ');
        }
        if (i <= n / 2)
            x--;
        else
            x++;
        printf(" ");
        return x;
        break;
    }
}// end of function


void gm_L(int value,int hold)// this function of character 'L'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == n)
                printf("%2c", 'L');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function


int gm_M(int value,int hold,int x)// this function for character 'M'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || ((j == x || j == n - x + 1) && i <= n / 2 + 1))
                printf("%2c", 'M');
            else
                printf("%2c", ' ');
        }
        x++;
        printf(" ");
        return x;
        break;
    }
}// end of function

void gm_N(int value,int hold)// this function for character 'N'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == j)
                printf("%2c", 'N');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function


void gm_O(int value,int hold)// this function for character 'O'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == n)
                printf("%2c", 'O');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function

void gm_P(int value, int hold)// this function for character 'P'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || (j == n && i <= n / 2) || i == n / 2 + 1)
                printf("%2c", 'P');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function


void gm_Q(int value,int hold)// this function for character 'Q'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i == 1 || i == n - n / 2 + 1) && j <= n - n / 2 + 1)
                    || ((j == 1 || j == n - n / 2 + 1) && i <= n - n / 2 + 1))
                printf("%2c", 'Q');
            else if (j == i && i >= n - n / 2 + 1)
                printf("%2c", 'Q');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function


int gm_R(int value,int hold,int x)// this function for character 'R'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n / 2 + 1; j++)
        {
            if (j == 1 || i == 1 || i == n / 2 + 1 || (i <= n / 2 && j == n / 2 + 1) || j == x)
                printf("%2c", 'R');
            else
                printf("%2c", ' ');
        }
        if (i > n / 2)
            x++;
        printf(" ");
        return x;
        break;
    }
}// end of function

void gm_S(int value,int hold)// this function for character 'S'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || i == n / 2 + 1 || (j == 1 && i <= n / 2 + 1) || (j == n && i > n / 2 + 1))
                printf("%2c", 'S');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function

void gm_T(int value, int hold)// this function for character 'T'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == n / 2 + 1)
                printf("%2c", 'T');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function


void gm_U(int value,int hold)// this function for character 'U'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == n)
                printf("%2c", 'U');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function

int gm_V(int value,int hold,int x)// this function for character 'V'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (j == x || j == 2 * n - x)
                printf("%c", 'V');
            else
                printf("%c", ' ');
        }
        printf(" ");
        x++;
        return x;
        break;
    }
}// end of function


int gm_W(int value,int hold,int x)// this function for character 'W'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (j == 1 || j == 2 * n - 1 || j == x || j == 2 * n - x)
                printf("%c", 'W');
            else
                printf("%c", ' ');
        }
        printf(" ");
        x--;
        return x;
        break;
    }
}// end of function

void gm_X(int value,int hold)// this function for character 'X'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == i || j == n - i + 1)
                printf("%2c", 'X');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }

}// end of function

void gm_Y(int value,int hold)//this function for character 'Y'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((j == i || j == n - i + 1) && i <= n / 2 + 1 || (j == n / 2 + 1 && i > n / 2))
                printf("%2c", 'Y');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function

void gm_Z(int value,int hold)// this function for character 'Z'
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == n - i + 1)
                printf("%2c", 'Z');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }
}// end of function


void gm_0(int value,int hold)
{
    int n = value;
    for (int i = hold; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == n)
                printf("%2c", '*');
            else
                printf("%2c", ' ');
        }
        printf(" ");
        break;
    }

}

void gm_2(int value,int hold)
{
    int n = value;
    for(int i=hold; i <=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i%2 != 0)
            {
                printf("%2c",'*');
            }
            else
            {

                if((i==2 && j==n) || (i==4 && j==1))
                {
                    printf("%2c",'*');
                }
                else
                {
                    printf("%2c",' ');
                }
            }
        }
        printf(" ");
        break;
    }
}

#endif // SOMPOD_MAGIC_H_INCLUDED
