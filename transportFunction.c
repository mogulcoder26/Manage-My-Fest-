#include <stdio.h>
#include <string.h>
#include <ctype.h>

//**********Structure for defining states and their distances from College.**********

typedef struct geographical_DISTANCE
{

    char state[20];
    float distanceByTrain;
    float distanceByFlight;
    float distanceByBus;
} gd;

//*************Function Call**********************************
void transport()
{

    //*****************************Greeting Message*******************.
    printf("Welcome to transport facility!");
    printf("\n");

    //************************User state extraction****************************

    printf("In which state do you live?:");
    char stateOfUser[20];
    scanf(" %s", stateOfUser);
    // why if using fgets the code fails but when using SCANF, the code works.

    //**********************DATABASE********************************

    gd pb = {"punjab", 2100, 1607.01, 2031.47};
    gd wb = {"westbengal", 400, 470.69, 556.68};
    gd assam = {"assam", 1000, 970.43, 1353.00};
    gd goa = {"goa", 1693.20, 1364.58, 1640.79};
    gd mp = {"madhyapradesh", 1000, 837.31, 1119.64};
    gd andhrap = {"andhrapradesh", 750, 810.57, 929.48};
    gd arunachalp = {"arunachalpradesh", 2600, 1216.48, 1811.39};
    gd bihar = {"bihar", 700, 548.18, 705.19};
    gd chattisgarh = {"chattisgarh", 500, 446.07, 553.61};
    gd delhi = {"delhi", 1800, 1273.43, 1635.87};
    gd guj = {"gujarat", 1600, 1486.29, 1780.50};
    gd haryana = {"haryana", 1900, 1383.22, 1753.86};
    gd jharkhand = {"jharkhand", 300, 388.22, 511.70};
    gd karnataka = {"karnataka", 1500, 1229.73, 1474.75};
    gd kerala = {"kerala", 2300, 1483.10, 1824.72};
    gd maharashtra = {"maharashtra", 1400, 1031.70, 1292.42};
    gd manipur = {"manipur", 2400, 988.91, 1399.35};
    gd meghalaya = {"meghalaya", 1800, 809.26, 1185.38};
    gd mizoram = {"mizoram", 2400, 800.23, 1384.59};
    gd nagaland = {"nagaland", 2400, 1095.89, 1626.07};
    gd rajasthan = {"rajasthan", 1700, 1400.05, 1833.09};
    gd tamilnadu = {"tamilnadu", 1700, 1306.26, 1580.21};
    gd telangana = {"telangana", 1000, 759.46, 1001.71};
    gd tripura = {"tripura", 2200, 758.22, 1005.45};
    gd up = {"uttarpradesh", 1100, 932.26, 1206.90};
    gd uk = {"uttarakhand", 1100, 1291.25, 1729.47};
    gd hp = {"himachalpradesh", 1596, 1551.33, 2134.09};
    // gd sikkim = {, 873.36, 1139.14};

    //*************************GEOGRAPHICAL_DIST ARRAY INIT*******************
    gd locationState[28] = {pb,
                            wb,
                            assam,
                            goa,
                            mp,
                            andhrap,
                            arunachalp,
                            bihar,
                            chattisgarh,
                            delhi,
                            guj,
                            haryana,
                            jharkhand,
                            karnataka,
                            kerala,
                            maharashtra,
                            manipur,
                            meghalaya,
                            mizoram,
                            nagaland,
                            rajasthan,
                            tamilnadu,
                            telangana,
                            tripura,
                            up,
                            uk,
                            hp};

    float extra_kilometers;
    int userchoice;
    float *traindistpointer, *flightdistpointer, *busdistpointer;

    //**********************Iterating through locationState to find stateOfUser and tap into hte data.
    for (int i = 0; i < 28; i++)
    {
        if (strcmp(locationState[i].state, stateOfUser) == 0)
        {

            printf("How far are you from the main capital of %s?\n", locationState[i].state);
            scanf("%f", &extra_kilometers);
            printf("Which mode of travel you want to have?\n1)By Train\n2)By Bus\n3)By Flight\n");
            scanf("%d", &userchoice);
            float userdistbytrain = locationState[i].distanceByTrain * extra_kilometers;
            float userdistbyflight = locationState[i].distanceByFlight * extra_kilometers;
            float userdistbybus = locationState[i].distanceByBus * extra_kilometers;
            (traindistpointer) = &(userdistbytrain);
            (flightdistpointer) = &(userdistbyflight);
            (busdistpointer) = &(userdistbybus);
        }
    }

    float distanceOfuser_BYTRAIN = *traindistpointer;
    float distanceOfuser_BYFLIGHT = *flightdistpointer;
    float distanceOfuser_BYBUS = *busdistpointer;
    int trainChoice, flightChoice, busChoice;

    float ac1c = 3.53;
    float ac2t = 2.08;
    float fc = 2.32;
    float ac3t = 1.46;
    float acc = 1.40;
    float sc = 0.62;

    float acs = 2.09;
    float nas = 1.74;
    float gb = 0.64;

    float indigo = 5.02;
    float jetairways = 3.89;
    float vistara = 4.23;
    float airindia = 3.02;

    float costByTrain, CostByBus, CostByFlight;
    float total_cost;
    // TRAIN****>
    if (userchoice == 1)
    {
        printf("Train Pricing Plan:\n*Base Price*\n1)AC First Class:Rs 3.53/Km\n2)AC Two Tier:Rs 2.08/Km\n3)First Class:Rs 2.32/Km\n4)AC 3*Tier:Rs 1.46/Km\n5)AC Chair Car:Rs 1.40/Km\n6)Sleeper Class:Rs 0.62/Km\n\n*Registration and Processing Fee:Rs 60*\nGST:5 percent.");
        scanf("%d", &trainChoice);
        if (trainChoice == 1)
        {
            costByTrain = ac1c * distanceOfuser_BYTRAIN;
        }
        else if (trainChoice == 2)
        {
            costByTrain = ac2t * distanceOfuser_BYTRAIN;
        }
        else if (trainChoice == 3)
        {
            costByTrain = fc * distanceOfuser_BYTRAIN;
        }
        else if (trainChoice == 4)
        {
            costByTrain = ac3t * distanceOfuser_BYTRAIN;
        }
        else if (trainChoice == 5)
        {
            costByTrain = acc * distanceOfuser_BYTRAIN;
        }
        else if (trainChoice == 6)
        {
            costByTrain = sc * distanceOfuser_BYTRAIN;
        }

        float gst_train = (costByTrain * 5.00) / 100.00;
        total_cost = costByTrain * gst_train * 60.0;
    }

    else if (userchoice == 2)
    {
        printf("Bus Pricing Plan:\n*Base Price*\n1)AC Sleeper Bus Premium:Rs 2.09/km\n2)Non*AC Sleeper Bus Premium:Rs 1.74/km\n3)General Seat Bus:Rs 0.64/Km)");
        scanf("%d", &busChoice);
        if (busChoice == 1)
        {
            CostByBus = acs * distanceOfuser_BYBUS;
        }
        else if (busChoice == 2)
        {
            CostByBus = nas * distanceOfuser_BYBUS;
        }
        else if (busChoice == 3)
        {
            CostByBus = gb * distanceOfuser_BYBUS;
        }
        float gst_bus = (CostByBus * 5.00) / 100.00;
        total_cost = CostByBus * gst_bus * 60.00;
    }
    else
    {
        printf("Flight Pricing Plan:\n*Base Price*\n1)Indigo:Rs 5.02/Km\n2)Jet Airways:Rs 3.89/km\n3)Vistara :Rs 4.23/Km\n4)Air India :Rs 3.02/Km\n");
        scanf("%d", &flightChoice);
        if (flightChoice == 1)
        {
            CostByFlight = indigo * distanceOfuser_BYFLIGHT;
        }
        else if (flightChoice == 2)
        {
            CostByFlight = jetairways * distanceOfuser_BYFLIGHT;
        }
        else if (flightChoice == 3)
        {
            CostByFlight = airindia * distanceOfuser_BYFLIGHT;
        }
        else if (flightChoice == 4)
        {
            CostByFlight = vistara * distanceOfuser_BYFLIGHT;
        }
        float gst_flight = (CostByFlight * 5.00) / 100.00;
        total_cost = CostByFlight * gst_flight * 60.00;
    }
    // printf("YOUR TOTAL COST = %.2f",total_cost);

    int hour;
    int min;
    int day;
    int month = 3;
    int year = 2023;

    printf("Please select the time for departure[12 HOUR FORMAT]:\n");
    printf("Hour:\n");
    scanf("%d", &hour);

    printf("Minute:\n");
    scanf("%d", &min);

    printf("Day:\n");
    scanf("%d", &day);

    // age,name,gender from FILE IO.

printf("%c*******************************************************************************************************************************%c",201,187);
printf("\n");
printf("|\t\t\t\t\t\tBOARDING PASS\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n|\t\t\t\tFlight\t\tBoarding*Time\tGate\tSeat\t\t\t\t\t\t\t        |\n");
printf("|\t\t\t\tABC1285\t\t10:20\t\t15\t11A                     \t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
printf("|\t\t\t\tPASSENGER NAME:Soubhik Gon\t\t    Class:Economy\t\t\t\t\t\t\t|");
printf("\n");
printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
printf("|\t\t\t\tFrom:Zurich/ZRH\t\t            To:DELHI/DEL\t\t\t\t\t\t\t|");
printf("\n");
printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
printf("|\t\t\t\tDATE:06 JUN 2004\t\t\t\t\t\t\t\t\t\t\t|\n");
printf("%c*******************************************************************************************************************************%c",192,188);

}


//file
int main()
{

    transport();
    return 0;
}