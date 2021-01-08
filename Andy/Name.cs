using System;
// En konstruktor är som en speciell typ av metod som är 
// bunden till en klass, konstruktorn har samma namn som
// klassen och kan anropas när man en instans av klassen.

class Name{

    private string firstName;
    private string lastName;

    public Name(string firstName, string lastName){
        this.firstName = firstName;
        this.lastName = lastName;
    }

    public override string ToString()
   {
      return "\n" + firstName + " " + lastName;
   }
}

class Person{
    public static void main(String[] args){
        Name person1 = new Name("John", "Doe");
        Name person2 = new Name("Ahmad", "Bratko");

        Console.WriteLine(person1.ToString());
        Console.WriteLine(person2.ToString());
        }
}

class Teacher : Person {
    
}

