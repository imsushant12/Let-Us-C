
main()
{
struct animal
{
   char name[30];
   int type;
};

struct animal a={"OCELOT",18};

int z,x,y;;
x=(a.type)<<4;
z=x&1;
if(x==z)
    printf("Herbivore  ");
else
    printf("Carnivore  ");
y=(a.type);
if(y&1)
    printf("Canine  ");
if(y&2)
    printf("Feline  ");
if(y&4)
    printf("Cetacean  ");
if(y&8)
    printf("Marsupial  ");
}
