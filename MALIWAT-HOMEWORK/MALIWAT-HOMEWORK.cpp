#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

// base person class
class Person {
public:
	string name[500] = { "Jack", "Lewis", "Ryan", "Cameron", "James", "Andrew", "Liam", "Matthew", "Jamie", "Callum", "Ross", "Jordan",
	"Daniel", "Kieran", "Connor", "Scott", "Kyle", "David", "Adam", "Dylan", "Michael", "Ben", "Thomas", "Craig", "Nathan", "Sean",
	"John", "Aaron", "Calum", "Christopher", "Alexander", "Robert", "Euan", "Joshua", "Declan", "Aidan", "Mark", "Robbie", "Luke",
	"Fraser", "Reece", "William", "Ewan", "Joseph", "Paul", "Brandon", "Lee", "Owen", "Josh", "Samuel", "Finlay", "Stuart", "Rhys",
	"Stephen", "Rory", "Jake", "Steven", "Sam", "Jay", "Benjamin", "Ethan", "Harry", "Shaun", "Aiden", "Darren", "Blair", "Marc",
	"Dean", "Taylor", "Angus", "Gregor", "Conor", "Jonathan", "Patrick", "Ciaran", "Greg", "Jason", "George", "Logan", "Peter",
	"Bradley", "Max", "Arran", "Mohammed", "Morgan", "Oliver", "Gary", "Murray", "Louis", "Martin", "Alan", "Alistair", "Grant",
	"Joe", "Keir", "Duncan", "Leon", "Mitchell", "Nicholas", "Tyler", "Gavin", "Hamish", "Charles", "Iain", "Kerr", "Anthony",
	"Kevin", "Ronan", "Stewart", "Brendan", "Charlie", "Jacob", "Kai", "Zak", "Alasdair", "Keiran", "Evan", "Lucas", "Marcus",
	"Ian", "Neil", "Struan", "Alex", "Douglas", "Finn", "Ruairidh", "Tom", "Bruce", "Dillon", "Elliot", "Fergus", "Kian", "Niall",
	"Bailey", "Brian", "Colin", "Innes", "Richard", "Allan", "Caleb", "Calvin", "Corey", "Dominic", "Edward", "Harris", "Brodie",
	"Arron", "Drew", "Campbell", "Billy", "Donald", "Gordon", "Greig", "Alastair", "Barry", "Glen", "Reiss", "Ruaridh", "Travis",
	"Graeme", "Rowan", "Shane", "Conner", "Harrison", "Philip", "Lachlan", "Leo", "Henry", "Jordon", "Jude", "Lennon", "Mathew",
	"Archie", "Justin", "Bryan", "Dale", "Danny", "Joel", "Kane", "Kieron", "Mason", "Mohammad", "Muhammad", "Cian", "Isaac",
	"Kenneth", "Noah", "Rian", "Tony", "Ali", "Callan", "Cole", "Derek", "Findlay", "Gabriel", "Jon", "Lyle", "Oscar", "Russell",
	"Tommy", "Zachary", "Daryl", "Ellis", "Graham", "Kristopher", "Marco", "Anton", "Bobby", "Brad", "Christian", "Garry", "Keith",
	"Kieren", "Regan", "Rohan", "Saul", "Stefan", "Ayden", "Blake", "Bryce", "Harvey", "Hayden", "Hugh", "Jak", "Lloyd", "Magnus",
	"Myles", "Sebastian", "Zac", "Antony", "Brogan", "Conall", "Frazer", "Jackson", "Nathaniel", "Nico", "Reagan", "Timothy", "Zack",
	"Alfie", "Cory", "Dane", "Elliott", "Frederick", "Glenn", "Jai", "Jed", "Laurence", "Matt", "Robin", "Scot", "Toby", "Zain",
	"Ahmed", "Antonio", "Cain", "Cieran", "Cody", "Curtis", "Damien", "Eoin", "Ewen", "Flynn", "Francis", "Frank", "Gareth", "Gerard",
	"Hamzah", "Haydn", "Johnathan", "Jonathon", "Kelvin", "Kurt", "Luc", "Luca", "Malcolm", "Martyn", "Omar", "Ricky", "Ruairi", "Sandy",
	"Shawn", "Simon", "Sonny", "Troy", "Vincent", "Alister", "Baillie", "Brooklyn", "Byron", "Conrad", "Declyn", "Guy", "Hassan", "Jayden",
	"Kalvin", "Kirk", "Kris", "Kristofer", "Lawrence", "Levi", "Mackenzie", "Mohamed", "Murdo", "Ritchie", "Roan", "Ruari", "Usman", "Aarron",
	"Alec", "Amaan", "Blaine", "Brandyn", "Brett", "Cal", "Corrie", "Dillan", "Eoghan", "Finley", "Humza", "Jasper", "Johnny", "Keiren", "Keiron",
	"Kurtis", "Lochlan", "Luis", "Marley", "Moray", "Raymond", "Roddy", "Roderick", "Ronald", "Shea", "Terry", "Tim", "Will", "Zach", "Abdullah",
	"Benedict", "Braden", "Cailean", "Casey", "Chris", "Colm", "Conlan", "Dan", "Dario", "Dyllan", "Felix", "Gregory", "Hasan", "Hector", "Huw", "Jared",
	"Jonah", "Josef", "Laurie", "Leighton", "Lochlann", "Marshall", "Maximilian", "Maxwell", "Mitchel", "Nairn", "Oskar", "Padraig", "Ramsay", "Ruaraidh",
	"Saif", "Sami", "Shay", "Sol", "Syed", "Adil", "Aedan", "Amir", "Ammar", "Andreas", "Aodhan", "Argyll", "Aron", "Austin", "Cade", "Carlo", "Carter",
	"Conal", "Conan", "Damon", "Darius", "Darryl", "Devon", "Dion", "Eamonn", "Eden", "Eric", "Gregg", "Harley", "Ibrahim", "Jacques", "Jae", "Jorg",
	"Kamran", "Keenan", "Kenny", "Kristian", "Kristoffer", "Lennox", "Louie", "Lukas", "Lyall", "Muhammed", "Nikolai", "Norman", "Qasim", "Ray", "Reuben",
	"Richie", "Robson", "Ronin", "Ronnie", "Tayler", "Theo", "Todd", "Tristan", "Wallace", "Warren", "Xander", "Abdul", "Adeel", "Aden", "Adrian", "Alfred",
	"Aman", "Aran", "Archibald", "Arman", "Arthur", "Awais", "Beck", "Bilal", "Blane", "Brenden", "Bryn", "Cairn", "Cale", "Clark", "Coll", "Connal", "Connar",
	"Cooper", "Cormac", "Damian", "Dara", "Darrel", "Devin", "Devlin", "Eamon", "Fionn", "Forbes", "Gerald", "Gianluca", "Haaris", "Haris", "Haroon", "Hisham",
	"Hugo", "Ieuan", "Ivan", "Jac", "Jaden", "Jakob", "Jevan", "Jody", "Joey", "Jonas", "Ka", "Kain", "Kal", "Kaleb", "Kalib", "Kallum", "Keelan", "Keigan",
	"Kyran", "Lachlann", "Lauchlan", "Mikey", "Miller", "Nathanael", "Nathyn", "Nicky", "Nicolas", "Oran", "Ossian", "Paolo", "Pierce", "Quinn", "Rahul", "Ramzan" };

	

	string nameChoice() {
		return name[rand() % 500];
	}

	int age;

	int ageChoice() {
		return rand() % 18 + 10;
	}
};

// base student class inheriting person class
class Student : public Person {
public:
	string college = "College of Science";
	string program[2] = { "Information Technology", "Computer Science" };
	string currentSem[2] = { "1st Sem", "2nd Sem" };

	string programChoice() {
		return program[rand() % 2];
	}

	string semChoice() {
		return currentSem[rand() % 2];
	}
};

// NonGamingStudent class inheriting base student class
class NonGamingStudent : public Student {
public:
	string streamService[3] = { "Twitch", "Youtube", "Facebook" };
	int hoursNonGaming;

	string preferredChoice() {
		return streamService[rand() % 3];
	}

	int hoursChoice() {
		return rand() % 800 + 1;
	}
};

// Gaming Student class inheriting base student class
class GamingStudent : public Student {
public:
	string gamingDevice[5] = { "Xbox", "Playstation", "PC", "Nintendo Switch", "Phone" };
	int hoursGaming;

	string preferredChoice() {
		return gamingDevice[rand() % 3];
	}

	int hoursChoice() {
		return rand() % 800 + 1;
	}
};

// class for the survey
class Survey {
public:
	NonGamingStudent nonGamer;
	GamingStudent gamer;
	int numParti;
	int averageAge = 0;
	int averageHours = 0;
	int preferChoice = 0;

	void getParticipants(int x) {

		numParti = x;
		int gamingParticipants, nonGamingParticipants, participantDivider;


		//randomization of participants
		srand(time(NULL));
		participantDivider = rand() % numParti;
		//cout << "No. of Participants: "<< numParti;
		//system("pause");
		gamingParticipants = participantDivider;
		nonGamingParticipants = numParti - gamingParticipants;
		//cout << "Gaming: " << gamingParticipants << " and Non-Gaming: " << nonGamingParticipants;
		//system("pause");


		cout << "Non Gaming Students: " << nonGamingParticipants << "\nAverage Age: ";
		srand(time(NULL));
		for (int i = 1; i <= nonGamingParticipants; i++) {
			averageAge = nonGamer.ageChoice() + averageAge;
			preferChoice = (rand() % 2) + preferChoice;
			averageHours = nonGamer.hoursChoice() + averageHours;
		}
		cout << averageAge / nonGamingParticipants << endl;
		cout << "Most preferred streaming service: " << nonGamer.streamService[preferChoice / nonGamingParticipants] << endl;
		cout << "Average hours: " << averageHours / nonGamingParticipants << " hours\n";

		cout << "\n------------------------------------------------------------\n";
		cout << "Gaming Students: " << gamingParticipants << "\nAverage Age: ";
		for (int i = 1; i <= gamingParticipants; i++) {
			averageAge = gamer.ageChoice() + averageAge;
			preferChoice = (rand() % 4) + preferChoice;
			averageHours = gamer.hoursChoice() + averageHours;
		}
		cout << averageAge / gamingParticipants << endl;
		cout << "Most preferred gaming device: " << gamer.gamingDevice[preferChoice / gamingParticipants] << endl;
		cout << "Average hours: " << averageHours / gamingParticipants << " hours\n\n";

	}

};

int main() {

	NonGamingStudent Tao1;
	GamingStudent Tao2;
	Survey survey;


	Person person;


	// This is the welcome page
	cout << "\n-----------------------------------------------\n";
	cout << "\n Welcome User! This is the Survey Application!" << endl;
	cout << "\n-----------------------------------------------\n";
	system("pause");

	system("CLS");
	int participantsNumber = 501;


	cout << "\n-------------------------------------------------------------\n";
	cout << "\n How many participants do you want to participate? (Max 500)" << endl;
	cout << "\n-------------------------------------------------------------\n";
	cin >> participantsNumber;

	while (participantsNumber > 500)
	{
		system("CLS");
		cout << "\n------------------------------------------------------\n";
		cout << "\n Please enter partipants number only between 1-500!" << endl;
		cout << "\n------------------------------------------------------\n";
		cin >> participantsNumber;

	}


	//For Asking if will generate or not
	int counter = 0;
	while (counter == 0)
	{
		system("CLS");
		cout << "\n------------------------------------------------------------\n";
		cout << "\n Are you ready to process the survey? (0 for no/1 for yes)" << endl;
		cout << "\n------------------------------------------------------------\n";
		cin >> counter;

	}

	//Preparing of Survey
	system("CLS");
	cout << "Processing the Survey..." << endl;
	system("pause");


	//Calling of the Survey
	system("CLS");
	//srand (time(NULL));
	cout << "\n\n      Survey Results: " << endl;
	cout << "\n------------------------------------------------------------\n";
	survey.getParticipants(participantsNumber);



	return 0;
}