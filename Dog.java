//creat a class 
class Dog{
	int size;
	String bread;
	String name;
	void bark(){
		System.out.println(""Ruff!Ruff!);
	}
}
//use class to creat a object and test
class DogTest{
	public static void main (String[] args){
		Dog d=new Dog();
		d.size=40;
		d.bark();
	}
}
// creat a Movie object and test
class Movie{
	String title;
	String genre;
	int rating;

	void play(){
		System.out.println("Playing the movine");
	}
}
//use a public class to test the new object
public class MovieTest{
	public static void main(String[] args) {
		Movie one=new Movie();
		one.title="Gone with the wind";
		one.genre="Tragic";
		one.rating=-2;
		Movie two=new Movie();
		two.title="Lost in Beijing";
		two.genre="comedy";
		two.rating=5;
		two.play();
		Movie three=new Movie();
		three.title="Evil";
		three.genre="technology";
		three.rating=127;

	}
}
//play a game
public class GuessGame{
	Player p1;
	Player p2;
	Player p3;

	public void start(){
		p1=new Player();
		p2=new Player();
		p3=new Player();

		int guessp1=0;
		int guessp2=0;
		int guessp3=0;

		boolean p1isRight=false;
		boolean p2isRight=false;
		boolean p3isRight=false;

		int targetNumber=(int)(Math.random()*10);
		System.out.println("I'm thinking of a number between 0 and 9...");
		while(true){
			System.out.println("Number to guess is "+targetNumber);
			p1.guess();
			p2.guess();
			p3.guess();

			guessp1=p1.number;
			System.out.println("Player 1 guessd "+guessp1);
			guessp2=p2.number;
			System.out.println("Player 2 guessd "+guessp2);
			guessp3=p3.number;
			System.out.println("Player 3 guessd "+guessp3);

			if(guessp1==targetNumber){
				p1isRight=true;
			}
			if(guessp2==targetNumber){
				p2isRight=true;
			}
			if(guessp3==targetNumber){
				p3isRight=true;
			}
			if(p3isRight||p2isRight||p1isRight){
				System.out.println(“We have a winner!”); 
				System.out.println(“Player one got it right? “ + p1isRight);
				System.out.println(“Player two got it right? “ + p2isRight); 
				System.out.println(“Player three got it right? “ + p3isRight); 
				System.out.println(“Game is over.”);
                break; //          
			} else{
				System.out.println("Players have to try it again!");
			}
		}
	}
}
//The game test
//initialize the player
public class Player{
	int number=0;
	public void guess(){
		number=(int)(Math.random()*10);
		System.out.println("I'm guessing "+number);
	}
}
public class GameLauncher{
	public static void main(String[] args){
		GuessGame game=new GuessGame();
		game.start();
	}
}
//class dog
class Dog{
	String name;
	public static void main(String[] args){
		Dog dog1=new Dog();
		dog1.bark();
		dog1.name="Bart";

		Dog[] mydogs=new Dog[3];
		mydogs[0]=new Dog();
		mydogs[1]=new Dog();
		mydogs[2]=dog1;
		int x=0;
		while(x<mydogs.length){
			mydogs[x].bark();
			x=x+1;
		}
}