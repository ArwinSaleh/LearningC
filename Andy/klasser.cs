class Program
    {
        static void Main(string[] args)
        {

        }
    }

class Animal
    {
        public string Name;
        public int Hunger;
        public int NumberOfAnimals;

        public int Eat(Food food)
        {

        }
    }

class Duck : Animal 
    {
        public float Wingspan;

        public void Fly(Direction direction)
        {

        }
    }

class Fish : Animal
    {
        public int Fins;
        public float Velocity;

        public void Swim(Direction direction)
        {

        }
    }

class Farm
    {
        public string Address;
        public Location Location;

        public Location GetLocation(){

        }
        public void SetLocation(){
            
        }
    }

interface IAnimal
    {
        public string Name;
        public int Hunger;
        public int NumberOfAnimals;

        public int Eat(Food food)
        {
            
        }
    }

interface IDuck
    {
        public float Wingspan;

        public void Fly(Direction direction)
        {

        }
    }

interface IFish
    {
        public int Fins;
        public float Velocity;

        public void Swim(Direction direction)
        {

        }
    }