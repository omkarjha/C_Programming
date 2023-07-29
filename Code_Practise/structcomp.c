// C -> 15 +3i
// 15 is real
// 3i is imaginary

struct Complex
{
    double real;
    double img;
};

int main()
{
    struct Complex mycomplex;

    printf("Enter the real part");
    scanf("%lf", &mycomplex.real);

    printf("Enter the imaginary part");
    scanf("%lf", &mycomplex.img);

    printf("Complex number is : %lf + %lf",mycomplex.real,mycomplex.img);
}
