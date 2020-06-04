
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
system("CLS");
char w,a,f,i,g,b;
int e,c,m,j,n,o,q,r1,z,s;
{
cout<<"\n\n";
cout<<setw(75)<<"@@0000000@   000000000                                              \n";
cout<<setw(75)<<"@@00000000@  0000000000                                             \n";
cout<<setw(75)<<"@@@      0@@ 00       00                                            \n";
cout<<setw(75)<<"@@@      0@@ 00        00                                           \n";
cout<<setw(75)<<"@@@      0@@ 00       00                                            \n";
cout<<setw(75)<<"@@@      0@@ 000000000                                              \n";
cout<<setw(75)<<"@@@      0@@ 00      00                                             \n";
cout<<setw(75)<<"@@00000000@  00       00                                            \n";
cout<<setw(75)<<"@@0000000@   00        00                                           \n";
cout<<"\n\n\n";
cout<<setw(75)<<" 0000000000  @@@@@@@@   ooooooooo  ##     ##                        \n";
cout<<setw(75)<<"000000000000 @@@@@@@@@ ooooooooooo ##     ##      By -              \n";
cout<<setw(75)<<"     00      ##        oo          ##     ##          S.DEEPTHI.    \n";
cout<<setw(75)<<"     00      ##        oo          #########                        \n";
cout<<setw(75)<<"     00      ##@@@@@   oo          #########                        \n";
cout<<setw(75)<<"     00      ##        oo          ##     ##                        \n";
cout<<setw(75)<<"     00      ##        oo          ##     ##                        \n";
cout<<setw(75)<<"     00      @@@@@@@@@ ooooooooooo ##     ##                        \n";
cout<<setw(75)<<"     00      @@@@@@@@   oooooooooo ##     ##                        \n";
getch();
system("CLS");;
}
{
cout<<setw(44)<<"DR.TECH\n";
cout<<setw(44)<<"~~~~~~~\n";
cout<<setw(45)<<"PREFACE\n\n";
cout<<" Our Project Acts As An Ultimate Remedy For Health Issues. \n Your Symptoms Can Be Diagnosed Accurately Under Human Diseases Category Just\n Like Visiting a Doctor.\n If you are a Person Who Likes Getting a Cure In a Natural Way, You Are Provided With Natural Home Remedies For your Illness.\n If You Are a Person Who relies On Medicines, Then Dont Worry Because\n This provides You With Tablets For Your Illness.\n";
cout<<" Not Just You, But Even Your Pets Can Be Diagnosed And Given a Cure Under Pets\n Category.\n Sometimes We Come Across Emergency Situations Like Live Accidents.\n This Project Provides You With Adequate Information About The First Aid And\n Nearest Hospitals Under Emergency Category.\n Under Medicalpedia, You Get Know About The Health Mysteries And a Healthy\n Lifestyle.\n You Also Get To Knoiw About Vaccines For Your Body.\n";
cout<<setw(55)<<"PREVENTION IS BETTER THAN CURE!!!\n\n";
cout<<setw(65)<<"*** Please Press Enter After You Have Finished It ***\n";
getch();
}
do
{
system("CLS");;
cout<<"\n";
cout<<setw(44)<<"DR.TECH\n";
cout<<setw(44)<<"~~~~~~~\n";
cout<<"\n\n\n";
cout<<setw(65)<<"==> HUMAN DISEASES:(ENTER - H)           ==> EMERGENCY   :(ENTER - E)\n\n\n";
cout<<setw(68)<<"==> PET DISEASES  :(ENTER - P)           ==> MEDICALPEDIA:(ENTER - M)\n\n\n";
cin>>a;
system("CLS");;
if (a=='H')
{
cout<<setw(45)<<"DR.TECH\n";
cout<<setw(45)<<"~~~~~~~\n";
cout<<setw(40)<<"CHECK FOR THE FOLLOWING SYMPTOMS AND PLEASE ENTER THE RESPECTIVE NUMBERS IN\nASCENDING ORDER:\n\n";
cout<<setw(60)<<" 1.Diarrhea            19.Wheezing            37.Yellowing Skin               \n";
cout<<setw(75)<<" 2.Vomiting            20.Tooth Decay         38.Whitening Eyes               \n";
cout<<setw(75)<<" 3.Abdominal Pain      21.Bleeding Gums       39.Excessive Breathing          \n";
cout<<setw(75)<<" 4.Headache            22.Exposure To Cats    40.Tooth Pain                   \n";
cout<<setw(75)<<" 5.Fever               23.Tiredness           41.Chewing Difficulty           \n";
cout<<setw(75)<<" 6.Running Nose        24.Redness Of Skin     42.Blood In Urine               \n";
cout<<setw(75)<<" 7.Watery Eyes         25.Chills              43.Warm Knee                    \n";
cout<<setw(75)<<" 8.Sore Throat         26.Heart Stooles       44.Swelling In Knee             \n";
cout<<setw(75)<<" 9.Blood In Stool      27.Increased Thirst    45.Vomit After Milk             \n";
cout<<setw(75)<<"10.Chest Pain          28.Dry Mouth           46.Night Sweats                 \n";
cout<<setw(75)<<"11.Cough               29.Weight Loss         47.Rash In Face                 \n";
cout<<setw(75)<<"12.Loss Of Appetite    30.Swallow Difficulty  48.Hair Loss                    \n";
cout<<setw(75)<<"13.Dizziness           31.Elbow Pain          49.Rash Over Body               \n";
cout<<setw(75)<<"14.Hunger              32.Heart Flashes       50.Eye Pain                     \n";
cout<<setw(75)<<"15.Sweating            33.Rise In Temperature 51.Blood In Vomit               \n";
cout<<setw(75)<<"16.Frequent Urination  34.Redness In Gums     52.Swelling Salivary Glands     \n";
cout<<setw(75)<<"17.Joint Pain          35.Racing Heart        53.Whistle sound When Breathing \n";
cout<<setw(75)<<"18.Rashes              36.Muscle Pain         54.Cold                         \n";
cout<<"\n";
cin>>m;
if(m==9)
cout<<"** You Have stomach Ulcer **\n";
else if(m==10)
cout<<"** You Might Have Pneumonia Or Heart attack.Better Consult A Doctor **\n";
else if(m==16)
cout<<"** You Have Urinary Infection **\n";
else if(m==17)
cout<<"** You Have Sprain **\n";
else if(m==18)
cout<<"** You Have Rashes **\n";
else if(m==26)
cout<<"** You Have Constipation **\n";
else if(m==30)
cout<<"** You Have Dysphagia **\n";
else if(m==31)
cout<<"** You Might Have Arthritis.Better Consult A Doctor **\n";
else if(m==33)
cout<<"** You Have Fever **\n";
else if(m==52)
cout<<"** You Have Mumps **\n";
else if(m==51)
cout<<"** You Have Hematemesis **\n";
else if(m)
{
cin>>n;
if(m==8&&n==11)
cout<<"** You Have Cold **\n";
else if(m==20&&n==21)
cout<<"** You Have Bad Breath **\n";
else if(m==27&&n==28)
cout<<"** You Have Dehydration **\n";
else if(m==15&&n==32)
cout<<"** You Are Nearing Menopause **\n";
else if(m==21&&n==34)
cout<<"** You Have Gum inflammation **\n";
else if(m==37&&n==38)
cout<<"** You Might Have Jaundice.Better Consult A Doctor **\n";
else if(m==13&&n==39)
cout<<"** You Have Hyperventilation **\n";
else if(m==40&&n==41)
cout<<"** You Have Jaw Pain **\n";
else if(m==43&&n==44)
cout<<"** You Have Knee Pain **\n";
else if(m==3&&n==45)
cout<<"** You Are Lactose Intollerant **\n";
else if(m==47&&n==48)
cout<<"** You Might Have Lupus.Better Consult A Doctor **\n";
else if(m==5&&n==49)
cout<<"** You Might Have Measles.Better Consult A Doctor **\n";
else if(m==4&&n==50)
cout<<"** You Have Migrane **\n";
else if(m==11&&n==53)
cout<<"** You Have Wheezing **\n";
else if(n)
{
cin>>o;
if(m==1&&n==2&&o==3)
cout<<"** You Have Gastroenteritis **\n";
else if(m==4&&n==5&&o==6)
cout<<"** You Have Acute Sinusitis **\n";
else if(m==1&&n==2&&o==12)
cout<<"** You Have Food Poisoning **\n";
else if(m==6&&n==7&&o==8)
cout<<"** You Have Some Allergy.Better Consult A Doctor **\n";
else if(m==13&&n==14&&o==15)
cout<<"** You Have Low B.P **\n";
else if(m==10&&n==11&&o==19)
cout<<"** You Might Have Asthma.Better Consult A Doctor **\n";
else if(m==18&&n==22&&o==23)
cout<<"** You Might Have Cat Fever.Better Consult A Doctor **\n";
else if(m==5&&n==24&&o==25)
cout<<"** You Have Cellulitis **\n";
else if(m==4&&n==5&&o==17)
cout<<"** You Might Have Dengue.Better Consult A Doctor **\n";
else if(m==14&&n==27&&o==29)
cout<<"** You Might Have Diabetes.Better Consult A Doctor **\n";
else if(m==5&&n==12&&o==18)
cout<<"** You Might Have Hand,Foot,and Mouth Diseases.Better Consult A Doctor **\n";
else if(m==13&&n==23&&o==35)
cout<<"** You Might Have Heart Attack.Better Consult A Doctor **\n";
else if(m==5&&n==12&&o==36)
cout<<"** You Might Have Hepatitis-C.Better Consult A Doctor **\n";
else if(m==3&&n==15&&o==42)
cout<<"** You Might Have Kidney Stone.Better Consult A Doctor **\n";
else if(m==5&&n==29&&o==46)
cout<<"** You Might Have Leukemia.Better Consult A Doctor **\n";
else if(m==4&&n==5&&o==54)
cout<<"** You Might Have Malaria.Better Consult A Doctor **\n";
else
cout<<"OOPS!!! Can't Be Diagonised. Better Consult A Doctor.\n";
}
}
cout<<"\n";
cout<<"To Know The Cure For Your Disease: (ENTER - T)\n";
cin>>b;
system("CLS");
if(b=='T')
{
cout<<setw(45)<<"DR.TECH\n";
cout<<setw(45)<<"~~~~~~~\n";
cout<<"\n";
cout<<"     Please Select Your Illness And Enter Your Respective Number:\n\n";
cout<<setw(73)<<" 1.Gastroenteritis        2.Acute Sinusitis        3.Stomach Ulcer\n";
cout<<setw(78)<<" 4.Cold                   5.Food Poisoning         6.Low Blood Pressure\n";
cout<<setw(74)<<" 7.Urinary Infection      8.Sprain                 9.Skin Infection\n";
cout<<setw(70)<<"10.Asthma                11.Bad Breath            12.Cellulitis\n";
cout<<setw(65)<<"13.Constipation          14.Dehydration           15.Fever\n";
cout<<setw(78)<<"16.Kidney Stone          17.Knee Pain             18.Lactose Intolerant\n";
cout<<setw(65)<<"19.Measles               20.Migraine              21.Mumps\n";
cout<<setw(67)<<"22.Hematemesis           23.Wheezing              24.Malaria\n";
cout<<"\n";
cout<<"If Your Illness Does Not Match With Any Of The Above Categories,\nThen Please Consult A Doctor!!!\n\n";
cin>>c;
cout<<"If You Want An Ayurvedic Home Remedy For Your Disease:(ENTER - h)\nOr If You Want Medicines And Tablets For Your Disease:(ENTER - t)\n\n";
cin>>f;
if (c==1&&f=='h')
cout<<"Mix Some Carom Seeds With Paste Of Garlic And Ginger\nAlong With Some Lemon Juice And Eat It 3 Times A Day.\n";
else if(c==2&&f=='h')
cout<<"Take Fruits Like Pomegranate, Orange, Papaya, Apple\nAnd Avoid Milk, Sugar, Coffee And Sweets.\n";
else if(c==3&&f=='h')
cout<<"Drink Cabbage Juice And Avoid Spicy, Fatty Foods And Stop Consumption Of Milk.\n";
else if(c==4&&f=='h')
cout<<"Drink Warm Milk With Turmeric Powder And Black Pepper Powder\n For Immediate Relief.\n";
else if(c==5&&f=='h')
cout<<"Increase Intake Of Water And Fresh Fruit Juices Along With Some Honey.\n";
else if(c==6&&f=='h')
cout<<"Have Drinks Like Salt Water And Coffee And\n Eat Soaked Raisins Everyday In The Morning.\n";
else if(c==7&&f=='h')
cout<<"Wash The Genital Area And Drink Atleast 8 Glasses Of Hot Water A Day.\n";
else if(c==8&&f=='h')
cout<<"Clove Oil Is Effective In Treating Sprains.\n Rubbing Ginger Also Acts As A Painkiller.\n";
else if(c==9&&f=='h')
cout<<"Rub Garlic Juice On The Area To Prevent Any FUngal Infection.\n Turmeric Paste With Basil Leaves Also Shows Good Results.\n";
else if(c==10&&f=='h')
cout<<"Yoga Has In Depth Potential In Preventing Attacks.\n To Strengthen Lungs Mix Cloves With Honey And Drink It.\n";
else if(c==11&&f=='h')
cout<<"Scrape Your Tongue To Remove Bacteria. Drink Plenty Of Water.\n";
else if(c==12&&f=='h')
cout<<"Pycnogeal Is A Herb Extracted From Bark Of Pine Trees And\n Acts As A Cure For Cellulitis.\n";
else if(c==13&&f=='h')
cout<<"Coffee Can Help Speed Up The Process Of Elimination.\n";
else if(c==14&&f=='h')
cout<<"Drink Electrolyte Containg Drinks And\n Sip Small Amounts Of Water Throughout The Day.\n";
else if(c==15&&f=='h')
cout<<"Sponge Out Some Cool Water On The Body To Reduce The Temperature.\n";
else if(c==16&&f=='h')
cout<<"Lemon Juice, Olive Oil And Apple Cider Vinegar Show Good Result.\n";
else if(c==17&&f=='h')
cout<<"Turmeric And Ginger Tea Provides Relief From Knee Pain.\n";
else if(c==18&&f=='h')
cout<<"Lemon Juice, Fennel Seeds And Apple Cider Vinegar Helps Cure It.\n";
else if(c==19&&f=='h')
cout<<"Licorice Powder Along With Honey And Lukewarm Water Treats Measles Effectively.\n";
else if(c==20&&f=='h')
cout<<"Apple Cider Vinegar Helps Reduce Migraine. Ice Pack Also Works Well.\n";
else if(c==21&&f=='h')
cout<<"Apply Warm Or Cold Compress To Swollen Glands. Drink A Lot Of Water.\n";
else if(c==22&&f=='h')
cout<<"Marshmellow Tea Or Honey Helps Cure Hematemesis.Better Consult A Doctor.\n";
else if(c==23&&f=='h')
cout<<"Add One Teaspoon Of Ground Ginger Into A Cup Of Water And Have It.\n";
else if(c==24&&f=='h')
cout<<"Cinnamon Provides Relief From Many Allied Symptoms Of Malaria.\n";
else if(c==1&&f=='t')
cout<<"Take Ondansetron Tablet Or Zofran Tablet.\n";
else if(c==2&&f=='t')
cout<<"Take Amoxicillin Or Azithromycin Dose Pack. Not For Children Below 6 Months.\n";
else if(c==3&&f=='t')
cout<<"Take Pantaprazole Or Protonix Or Zantac 150mg. NOT FOR CHILDREN.\n";
else if(c==4&&f=='t')
cout<<"Take Benadryl Or Vicks Nyquil For cold.\n";
else if(c==5&&f=='t')
cout<<"Take Erythromycin. But Bewarned It Contains A Little Bit Of Alcohol.\n";
else if(c==6&&f=='t')
cout<<"Take Glucagon Or Glucagel. But It Is Better To Consult A Doctor.\n";
else if(c==7&&f=='t')
cout<<"Take Oxybutynin. But Bewarned It Contains A Little Bit Of Alcohol.\n";
else if(c==8&&f=='t')
cout<<"Take Ibuprofen Or Naproxen Tablet.\n";
else if(c==9&&f=='t')
cout<<"Take Amoxil Or Clindamycin Tablet.\n";
else if(c==10&&f=='t')
cout<<"Take Singulair Or Albuterol. Better Consult A Doctor.\n";
else if(c==11&&f=='t')
cout<<"Use Green or Black Tea Mouthwash. No Tablets Required For This.\n";
else if(c==12&&f=='t')
cout<<"Take Bactrim. But Bewarned It Contains Alcohol.NOT FOR PREGNANT WOMEN.\n";
else if(c==13&&f=='t')
cout<<"Take Lactulose Or Miralax.NOT FOR PREGNANT WOMEN.\n";
else if(c==14&&f=='t')
cout<<"IVP Solution Can Be Taken. No specified medicine required for this.\n NOT FOR PREGNANT WOMEN.\n";
else if(c==15&&f=='t')
cout<<"Paracetamol Or Aspirin Can Be Taken. Both Contains A Little Amounts Of Alcohol.\n";
else if(c==16&&f=='t')
cout<<"Potassium Citrate Or Urocit K Can Be Taken.NOT FOR CHILDREN.\n";
else if(c==17&&f=='t')
cout<<"Health Viva Joint or Amway Nutrilite Bone Can Be Used. Better Consult A Doctor.\n";
else if(c==18&&f=='t')
cout<<"Lactaid Or Lactase Can Be Taken.\n";
else if(c==19&&f=='t')
cout<<"Immune Globule Intramuscular Can Be Used. Better Consult A Doctor.\n";
else if(c==20&&f=='t')
cout<<"Sumatriptan Or Replax Can Be Taken.\n";
else if(c==21&&f=='t')
cout<<"They Are Of Different Types. Better Consult A Doctor.\n";
else if(c==22&&f=='t')
cout<<"No Specified Medicine. Better consult a doctor.\n";
else if(c==23&&f=='t')
cout<<"Take Montelukast Or Singulair.\n";
else if(c==24&&f=='t')
cout<<"Take Coartem Or Artemether.\n";
else
cout<<"Please Check What You Have Entered.\n";
}
}

if(a=='P')
{
cout<<setw(44)<<"DR.TECH\n";
cout<<setw(44)<<"~~~~~~~\n";
cout<<"   \n Top 8 Most Dangerous Deadly Disease in Dogs:\n";
cout<<"                  1.Canine Distemper\n";
cout<<"                  2.Canine Parvovirus\n";
cout<<"                  3.Heart Worm\n";
cout<<"                  4.Rabies\n";
cout<<"                  5.Lyme Disease\n";
cout<<"                  6.Kennel Cough\n";
cout<<"                  7.Leptospirosis\n";
cout<<"                  8.Kidney Disease\n";
cout<<" \n SELECT THE DISEASE AND ENTER THE RESPECTIVE NUMBER.\n";
cin>>s;
system("CLS");
cout<<setw(44)<<"DR.TECH\n";
cout<<setw(44)<<"~~~~~~~\n";
if(s==1)
{
cout<<"CANINE DISTEMPER  \n                                     \n";
cout<<"Symptoms: runny eyes, fever, coughing, vomiting, paralysis.\n\n";
cout<<"Canine Distemper ,sometimes called 'Hardpad Disease' because it hardens dog's\n noses and footpads.\n";
cout<<"It is an extremely contagious viral disease that’s transmitted through\n airborne exposure or contact like shared food bowls.\n";
cout<<"While all dogs are at risk of contracting canine distemper, it predominantly\n affects puppies and dogs\n that are especially prone to airborne viruses.\n";
cout<<"If you think your dog has distemper, take her to the vet.\n Although vets try their best to treat dogs with distemper by providing\n supportive care and preventing secondary infection by making sure they have\n plenty of rest and fluids,it is often fatal.\n";
cout<<"The best way to prevent your dog from getting it is by vaccinating her and\n keeping her from sick pups.\n";
}
else if(s==2)
{
cout<<"CANINE PARVOVIRUS(PARVO)                                        \n";
cout<<"Symptoms: fever, lethargy, vomiting, diarrhea, dehydration, weight loss.\n\n";
cout<<"Parvo is another highly contagious virus that infects dogs that come in\n contact with the fecal matter of a sick dog.\n";
cout<<"And, sadly, parvo’s like gossip — easy to spread but hard to kill — once it\n attacks a dog’s internal organs.\n";
cout<<"Vets treat dogs with parvo by providing plenty of fluids, electrolytes, and\n secondary infection prevention, but it’s often fatal.\n";
cout<<"The best way to keep your dog safe is by getting him vaccinated and keeping\n him away from all feces,\n especially infected feces.\n";
}
else if(s==3)
{
cout<<"HEART WORM                                             \n";
cout<<"Symptoms: lethargy, coughing, respiratory problems, heart disease, weight loss.\n\n";
cout<<"Heartworms are disgusting little foot-long worms (parasites) that live in\n your dog’s heart, wreaking havoc on his heart,\n blood vessels, and lungs\n if he gets infected.\n";
cout<<"Heartworm is spread by mosquitos and has been reported in all fifty states,\n not just places with dry climates.\n";
cout<<"Buying preventative medication (like heartworm or flea and tick) is\n comparable to buying insurance — while you may not want to spend money on it\n now, it’s better than not being able to afford a crisis later./n";
cout<<"If your dog has heartworm, expect a rigorous regimen of steroids,\n antibiotics, and an organic arsenic injection.\n";
cout<<"The easiest (and cheapest) way to prevent her from contracting it is by\n taking preventative measures with annual blood tests and regular pills,\n topicals, or shots.\n";
}
else if(s==4)
{
cout<<"RABIES                                                        \n";
cout<<"Symptoms: fever, pain, tingling or burning at the wound, hyperactivity.\n\n";
cout<<"It is the disease that took Old Yeller. (Well, a gun took Old Yeller,but\n his owner Travis had to shoot him because he contracted rabies.)\n";
cout<<"It is caused by the rabies virus, spread by a bite or saliva from an infected\n animal,and fatal once an animal gets it and starts showing symptoms.\n";
cout<<"Due to its severity and that it’s easily spread to humans, many cities,\n states, parks, and groomers require dogs to have the vaccine.\n";
cout<<"There is no treatment for dogs once they contract rabies, and it is fatal.\n";
cout<<"The best way to prevent it is getting her vaccinated and keeping her from\n rabid wildlife.\n";
}
else if(s==5)
{
cout<<"LYME DISEASE                                 \n";
cout<<"Symptoms: pain, loss of appetite, fever, limping.\n\n";
cout<<"This disease is caused by a bacterium that comes from tick bites (most\n commonly deer ticks) and once it’s in the blood stream,it spreads to the\n joints and causes pain for your pup.\nAnd if left untreated, lyme disease can\n be fatal.\n";
cout<<"Lyme disease can be treated with antibiotics and prevented by getting him\n vaccinated and checking his body for ticks after outdoor exposure.\n";
}
else if(s==6)
{
cout<<"KENNEL COUGH                               \n";
cout<<"Symptoms: heavy coughing, gagging, lethargy.\n\n";
cout<<"This disease is a highly contagious respiratory infection that causes\n inflammation and irritation of the airways.\n";
cout<<"It is called kennel cough because it’s a disease that can spread rapidly\n through animals in close proximity – like shelters,dog parks,\nboarding kennels, and doggy day cares – by direct contact with an infected\n animal, coughing, or sharing of\ ncontaminated bowls or blankets.\n";
cout<<"While all dogs are at risk, puppies, unvaccinated, and older dogs are more\n likely to get kennel cough due to their weaker immune systems.\n";
cout<<"If your dog has kennel cough, your vet will prescribe antibiotics, cough\n suppressants, and plenty of rest.\n But when she’s home, keep a watchful eye\n on her — if she becomes listless or lethargic, take her back to the vet to\n make sure she doesn't have pneumonia.\n You can help keep her from contracting kennel cough by getting her vaccinated\n (especially after you rescue her from a shelter)and keeping her away from\n sick dogs.\n";
}
else if(s==7)
{
cout<<"LEPTOSPIROSIS                                    /n";
cout<<"Symptoms: fever, muscle tenderness, lethargy, dehydration, vomiting, jaundice.\n\n";
cout<<"This disease is caused by contact – either directly or through a sick dog –\n with Leptospira bacteria,\n which can be found in soil and natural water like\n streams, lakes, or rivers.\n";
cout<<"The American Veterinary Medical Foundation (AVMA) says dogs can also come in\n contact with the bacteria\n in infected urine, urine-contaminated food or\n bedding, a bite from a sick animal, and even the mother’s placenta.\n";
cout<<"Although vets can treat leptospirosis by providing antibiotics and supportive\n care, it’s easier to prevent by simply getting your dog vaccinated.\n";
cout<<"If your dog ever comes in contact with the outside world, you should consider\n it.\n";
}
else if(s==8)
{
cout<<"KIDNEY DISEASE                                  \n";
cout<<"Symptoms: weight loss, increased urination and thirst, loss of appetite, vomiting.\n\n";
cout<<"Dr. Roberta Relford, Chief Medical Officer of IDEXX Laboratories, says one in\n ten dogs will develop \nkidney disease: 'Normally, healthy kidneys are able\n to eliminate protein wastes, balance body water, salts and acids to produce\n high quality urine'.\n";
cout<<"However, as dogs age, kidney disease can compromise these activities.'\nAnd although kidney disease is more often \nseen in older dogs and cannot be\n reversed or cured, its progression and debilitation can be slowed as soon as\n it is found and treated'.\n";
cout<<"If your dog has kidney disease, your vet will prescribe medications and\n kidney-friendly diets,\n but the best way to prevent it is by catching it\n early.\n";
cout<<"Regular vet checkups and appointments keep your dog’s health on track;\n vets can measure levels of creatinine\n in the blood and SDMA tests can be\n administered so irregularities can be more easily identified.\n";
cout<<"Dr. Relford says, 'The SDMA test is available to all veterinarians in\n the U.S.and Canada and picks up kidney disease \nmonths or even years earlier\n than traditional tests and is not impacted by a pet’s muscle mass.'\n" ;
}
else
cout<<"Sorry,your Choice doesn't match our Options!!!";
}
if(a=='M')
{
cout<<setw(45)<<"DR.TECH\n";
cout<<setw(45)<<"~~~~~~~\n";
cout<<"\n\n";
cout<<"         MEDICALPEDIA\n";
cout<<"                      * Human vaccines:(ENTER - V)\n";
cout<<"                      * Pet Vaccines  :(ENTER - v)\n";
cout<<"                      * Facts         :(ENTER - F)\n";
cin>>g;
system("CLS");
if(g=='V')
{
cout<<setw(45)<<"DR.TECH\n";
cout<<setw(45)<<"~~~~~~~\n";
cout<<"\n";
cout<<"HUMAN VACCINES:\n\n";
cout<<" 1.HEPATITIS B :1st Dose Can Be Taken In 12 Hours After Birth. 2nd Dose In \n                1-2 Months\n";
cout<<" 2.ROTAVIRUS :1st Dose Can Be Taken In 6 Weeks After Birth. 2nd Dose In\n              2-4 Months\n";
cout<<" 3.DTaP :5 Doses Can Be Taken At Ages 2,4,6,15 And 18 Months After Birth.\n";
cout<<" 4.HAEMOPHILUS INFLUENZEA B :3-4 Doses In 12-15 Months After Birth.\n";
cout<<" 5.PNEUMOCOCCAL :4 Doses At Ages 2,4,6 Months And At 12 Years Of Age.\n";
cout<<" 6.INACTIVATED POLIOVIRUS :4 Doses At 2,4,6 Months And At 4 Years Of Age.\n";
cout<<" 7.INFLUENZA :1st Dose At 6 Months And 2nd Dose After 4 Weeks.\n";
cout<<" 8.MMR :1st Dose At 12 Months And 2nd At 4 Years.\n";
cout<<" 9.VARICELLA :1st Dose At 12 Months And 2nd At 4 Years.\n";
cout<<"10.HEPATITIS A :2 Doses At 12 Months And 2nd At 6-18 Months After The 1st One.\n";
cout<<"11.MENINGOCOCCAL :Several Types Can Be Taken. Please Consult A Doctor.\n";
cout<<"12.Tdap :1st Dose At 11 Years During Adoloscense.\n";
}
else if(g=='v')
{
cout<<setw(45)<<"DR.TECH\n";
cout<<setw(45)<<"~~~~~~~\n";
cout<<"\n\n";
cout<<setw(20)<<"VACCINES FOR DOGS:\n\n";
cout<<"1.CANINE DISTEMPER :Vaccine Should Be Given After 1 Year Of Birth.\n";
cout<<"2.MEASLES :Vaccine Can Be Given From 4-10 Weeks Of Age.\n";
cout<<"3.PARVOVIRUS :Vaccine Should Be Given At 5 Weeks After Birth.\n";
cout<<"4.HEPATITIS :Length Of Immunity Lasts For Just 1 Year.\n";
cout<<"5.RABIES :Vaccine Should Be Given At 12 Weeks After Birth.\n\n";
cout<<setw(20)<<"VACCINES FOR CATS:\n\n";
cout<<"1.PANLEUKOPENIA :Length Of Immunity Lasts For Just 1 Year.\n";
cout<<"2.RHINOTRACHEITIS :Can Be Given To Cats Seen Sneezing.\n";
cout<<"3.CALICIVIRUS :Can Be Given To Cats Seen Sneezing.\n";
cout<<"4.RABIES :Vaccine Should Be Given At 12 Weeks After Birth.\n";
cout<<"5.FELINE LEUKEMIA :Revaccinate Annually For Cats Exposed To Outside.\n";
}
else if(g=='F')
{
cout<<setw(45)<<"DR.TECH\n";
cout<<setw(45)<<"~~~~~~~\n";
cout<<"\n\n";
cout<<"Select Any Number Between 1-20.\n";
cin>>r1;
cout<<"\n";
if (r1==1)
cout<<"Laughing 100 Times Is Equivalent To Exercising 15 Min In A Bicycle!!!\n";
else if(r1==2)
cout<<"Sleeping Less Than 7 hours A Day Reduces Your Lifetime On Longrun!!!\n";
else if(r1==3)
cout<<"Exercise Like Walking Reduces Breast Cancer Risk By 25%!!!\n";
else if(r1==4)
cout<<"Severe Depression Can Increase The Aging Process In Cells!!!\n";
else if(r1==5)
cout<<"Bill Gates Foundation Spends More Money On Global Health Than WHO!!!\n";
else if(r1==6)
cout<<"To Have The Best Health You Have To Shower Only Once Or Twice A Week!!!\n";
else if(r1==7)
cout<<"Working Past Age 65 Is Said To Give A Longer Life!!!\n";
else if(r1==8)
cout<<"People Who Read Books Live Longer Than Who Do Not Read At All!!!\n";
else if(r1==9)
cout<<"You Can Burn More Fat On Exercising In Morning In An Empty Stomach!!!\n";
else if(r1==10)
cout<<"Measles Was Officially Eliminated In America, The First Region To Do It!!!\n";
else if(r1==11)
cout<<"A Child Dies Every 8 Seconds Due To Water contamination!!!\n";
else if(r1==12)
cout<<"Tongue Prints Are As Unique As Finger Prints.\n";
else if(r1==13)
cout<<"Dont Hold Your Breath While Exercising Except Swimmimg.\n";
else if(r1==14)
cout<<"A Human Body Has More Than 650 Muscles.\n";
else if(r1==15)
cout<<"The Human Body Has Up to 45 Miles Of Nerves.\n";
else if(r1==16)
cout<<"Your Brain Recieves 100 million Nerve Impulses Each Second From Your Senses.\n";
else if(r1==17)
cout<<"A Father's Diet before Conception plays a crucial role in a Child's Health.\n";
else if(r1==18)
cout<<"On Average ,People who complain live Longer.\nReleasing the Tension increases Immunity and Boosts their Health.\n";
else if(r1==19)
cout<<"Sitting for more than Three hours a day can cut Two Years Off a Person's\n Life Expectancy.\n";
else if(r1==20)
cout<<"Eating too much Meat can Accelerate your Body's Biological Age.\n";
else
cout<<"Please Enter A Number Only Between 1 And 20.\n";
}
}
if(a=='E')
{
cout<<setw(45)<<"DR.TECH\n";
cout<<setw(45)<<"~~~~~~~\n";
cout<<"\n\n";
cout<<"          EMERGENCY:\n";
cout<<"                   1.Hospitals For Humans.\n\n";
cout<<"                   2.Veterinary Hospitals.\n\n";
cout<<"                 ENTER THE RESPECTIVE NUMBER!!!\n";
cin>>j;
system("CLS");
{
if(j==1)
{
cout<<setw(45)<<"DR.TECH\n";
cout<<setw(45)<<"~~~~~~~\n";
cout<<"\n\n";
cout<<setw(25)<<"HOSPITALS:\n\n";
cout<<setw(67)<<"1.Adyar          8.Egmore       15.Teynapet.       \n";
cout<<setw(67)<<"2.Aminjikarai    9.Guindy       16.Triplicane.     \n";
cout<<setw(67)<<"3.Anna Nagar    10.Kilpauk      17.Thiruvanmiyur.  \n";
cout<<setw(67)<<"4.Arumbakkam    11.Kodambakkam  18.Vadapalani.     \n";
cout<<setw(67)<<"5.Ayanavaram    12.Perambur     19.Velachery.      \n";
cout<<setw(67)<<"6.Besant Nagar  13.Royapettah   20.Washermanpet.   \n";
cout<<setw(67)<<"7.Chetput       14.Saidapet     21.West Mambalam. \n\n";
cout<<setw(65)<<"SELECT YOUR LOCATION & ENTER THE RESPECTIVE NUMBER.\n";
cin>>z;
system("CLS");
cout<<setw(45)<<"DR.TECH\n";
cout<<setw(45)<<"~~~~~~~\n";
switch(z)
{
case 1:cout<<"\n";
       cout<<"ADYAR:\n";
       cout<<"1.Cancer Institute: 1,East Canal Bank Road,Gandhi Nagar,Adyar.\n";
       cout<<"2.City Hospital: 26,Sardarate Road,Adyar.\n";
       cout<<"3.Menagundy Hospital: 19/1,1st Avenue,Sastri Nagar, Adyar.\n";
       cout<<"4.Lakshimi Maternity: 3rd Avenue,Indira Nagar, Adyar.\n";
       cout<<"5.Fortis Malar Hospitals: 52,1st Main Road,Gandhi Nagar ,Adyar.\n";
       cout<<"6.DR.Jacinth: 37,1st Main Road,Gandhi Nagar,Adyar.\n";
       cout<<"7.Vasan Eye Care: SMS building,LB Road,Adyar.\n";
       break;
case 2:cout<<"\n"<<"AMINJIKARAI: \n";
       cout<<"1.M.R.Hospital: 20,Govindan street,Ayyaavoo colony,Aminjikarai.\n";
       cout<<"2.AK.Hospital: 632,Poonamammale High Road,Nelson Manickam Road,Aminjikarai.\n";
       cout<<"3.Billroth Hospital: 43,Lakshmi Talkies Road,Shenoy nagar,Aminjikarai.\n";
       cout<<"4.Dr Balaji Diabetes Care Centre: 729,Poonammalle High Road,Aminjikarai.\n";
       cout<<"5.Admert Hospital: 9/4,Railway Colony,1st Street,near Sony World,Nelson manickam road,Aminjikarai.\n";
       cout<<"6.Sri Kanchi Maha Swamy Eye clinic: 67,Nelson Manickam Road,Aminjikarai.\n";
       cout<<"7.Gremaltes Hospital: 92,Gajapathy street,Shenoy Nagar,Aminjikarai.\n";
       break;
case 3:cout<<"\n"<<"ANNA NAGAR:\n";
       cout<<"1.Firm Hospitals (MATERNITY CENTRE): 65,R.Block,12th Street,Anna Nagar.\n";
       cout<<"2.I.K.Hospital: 1911,15th Main Road,Thirumngalm Junction,Anna Nagar.\n";
       cout<<"3.KHM.Hospital: 18,2nd Avenue,AB-Block,Anna Naga.\n";
       cout<<"4.Divya Hospital: 81A,VV Koil Street,Anna Nagar.\n";
       cout<<"5.Aashaina Hospital: 1201,6th Avenue,Anna Nagar.\n";
       cout<<"6.VCare Eye Hospital: A-13,2nd Avenue,Anna nagar.\n";
       cout<<"7.Chinthamani Hospital: C-64,C Block,1st Main Road,Anna Nagar East.\n";
       cout<<"8.Scarf Hospital: R/7a,North Main Road,Anna Nagar West.\n";
       break;
case 4:cout<<"\n"<<"ARUMBAKKAM.\n";
       cout<<"1.Appasamy Eye Hospital: 23,Friends Avenue,Arumbakkam\n";
       cout<<"2.Prime Indian Speciality Hospital: 1051,Poonammale High Road,Amaravathi Nagar,\nArumbakkam.\n";
       cout<<"3.Speed Medical Centre: 527,Poonamelle High Road,Arumbakkam.";
       cout<<"4.Chennai Heritage Hospital: 2A,Babu Jagan Street,Kannan Bala Nagar,Arumbakkam.\n";
       cout<<"5.VR.Hospital: 3,D-Block,Pandiyan Street,MMDA COlony Main Road,Arumbakkam.\n";
       break;
case 5:cout<<"\n"<<"AYANAVARAM:\n";
       cout<<"1.AC Hospital: 8,United Indian Nagar,3rd Main road,Ayanavaram.\n";
       cout<<"2.Trust Hospital: 122,Medavakkam Tank Road,Ayanavaram.\n";
       cout<<"3.Sri Ganeshans Hospital: 13,Thiru-VI-Kastreet,Ayanavaram.\n";
       cout<<"4.Shreyas Health Care: 35,Somasundaram 6th Street,Ayanavaram.\n";
       cout<<"5.24 Hours Hospital: 305,Ayanavaram Road,Ayanavarm.\n";
       break;
case 6:cout<<"\n"<<"BESANT NAGAR:\n";
       cout<<"1.Elite Asian Hospital: 5,E-147,2nd Avenue,Besant Nagar.\n";
       cout<<"2.MN.Eye Hospital: 33,2nd Avenue,Mahathma Gandhi Road,Besant Nagar.\n";
       cout<<"3.Shiva Sundar Hospital: 28,Behind Adyar Depot,1st Cross Street,Besant Nagar.\n";
       cout<<"4.Veritas Childrens Clinic: M 68/1,Anna Velankanni Road,Besant Nagar.\n";
       cout<<"5.Santhosh Super Speciality Hospital: 1,7th Avenue,Ashtalakshimi Garden,\nBesant Nagar.\n";
       break;
case 7:cout<<"\n"<<"CHETPUT:\n";
       cout<<"1.DR.Mehta's Hospitals: 2,McNichols Road,3rd Lane,Chetput.\n";
       cout<<"2.VS.Hospitals: 13,East Spurtank Road,Chetput.\n";
       cout<<"3.Psymed Hospital: 49/2,Harrington Road,Chetput.\n";
       cout<<"4.TB Research Centre: 1,Mayor Sathiyamoorthy Road,Santhosham Salai,Chetput.\n";
       cout<<"5.Joseph Nursing Home: 10A, DR.Guruswami Road,Chetput.\n";
       break;
case 8:cout<<"\n"<<"EGMORE:\n";
       cout<<"1.Santhosh Chest Hospital: 55,Egmore High Road,Egmore.\n";
       cout<<"2.Mercury Hospital: 36,Patheon Road,Egmore.\n";
       cout<<"3.Dr.Agarwal's Eye Hospital: 479,Patheon Street,Egmore.\n";
       cout<<"4.Day Care Hospital: 50,Montieth Road,Egmore.\n";
       cout<<"5.ARC Fertility Hospital: 1,Commander in Chief Road,Ethirajsamy Salai,Egmor.\n";
       break;
case 9:cout<<"\n";
       cout<<"GUINDY:\n";
       cout<<"1.Dr.A.Ramachandran's Diabetes Hospitals: 110,Anna Salai Guindy.\n";
       cout<<"2.Sri Balaji Hospital: 1,Lawyer Jaganathan Street,Guindy.\n";
       cout<<"3.CGHS Hosital: 6/1-5,BCG Staff Quarters,Guindy.\n";
       cout<<"4.St.Thomas Hospital: 5/105,Defence Colony Road,Guindy.\n";
       cout<<"5.Military Hospital: Defence Colony 1st Avenue,Guindy.\n";
       break;
case 10:cout<<"\n"<<"KILPAUk:\n";
	cout<<"1.Kumaran Hospital: 214,EVR Periyar Salai,Poonamalle High Road,Kilpauk.\n";
	cout<<"2.The Guest Hospital: 372,Poonamalle High Road,Kilpauk.\n";
	cout<<"3.KS Hospital: 747,Poonamalle High Road,Kilpauk.\n";
	cout<<"4.Aysha Hospitals: 91-A,Millers Road,Kilpauk.\n";
	cout<<"5.Rex Hospitals: 37,Millers Road,Kilpauk.\n";
	cout<<"6.Satish Eye Hospital: 57,Ormes Road,Kilpauk.\n";
	cout<<"7.Be Well Hospitals: 15,Bank Street,Kilpauk.\n";
	cout<<"8.New Hope Medical Hospital: 814,Poonamalle High Road,Kilpauk.\n";
	cout<<"9.Tosh Hospital: 72,Ormes Road,Kilpauk.\n";
	cout<<"10.MN Eye Hosital: 10,Big Street,Kilpauk.\n";
	break;
case 11:cout<<"\n"<<"KODAMBAKKAM:\n";
	cout<<"1.JV Hospital: 31,Railway Border Road,Kodambakkam.\n";
	cout<<"2.The Best Hospital: 9,Vellala Street, Kodambakkam.\n";
	cout<<"3.Medway Hospital: 22/8,4th Cross Street,Trustpuram,Kodambakkam.\n";
	cout<<"4.SPOT Hospital: 36,Ambedkar Road,Kodambakkam.\n";
	cout<<"5.GSC Health Care: 4,6th Cross Street,United India Colony,Kodambakkam.\n";
	cout<<"6.Santham Health Care: 27,Ambedkar Street,Kodambakkam.\n";
	break;
case 12:cout<<"\n"<<"PERAMBEUR\n";
	cout<<"1.Srinivas Priya Hospital: 106,Patel Road,Perambur.\n";
	cout<<"2.GK Hospital: 18/18,Neels Garden,2nd Street,Perambur.\n";
	cout<<"3.Apple Hospital: 43/1&2,Madhavaram High Road,Perambur.\n";
	cout<<"4.Lakeveiw Hospital: 100A,Perambur High Road,Perambur.\n";
	cout<<"5.Vasan Eye Care: 149,Perambur Mills Road,Perambur.\n";
	cout<<"6.JS Hospital: 10/77/Ramamurthy Colony,TVK Nagar,Perambur.\n";
	break;
case 13:cout<<"\n"<<"ROYAPETTAH:\n";
	cout<<"1.Seethapathy Hospital: 128,Royapettah High Road,Royapettah.\n";
	cout<<"2.Orthomed Hospital: 83,Royapettah High Road,Royapetah.\n";
	cout<<"3.The Cresant Hospital: 91,Besant Road,Royapettah.\n";
	cout<<"4.Govt.Hospital: Westcott Road,Ryapettah.\n";
	cout<<"5.SKS Herbal Medical Hospital: 136,Jani Jhan Khan Road,Royapettah.\n";
	break;
case 14:cout<<"\n"<<"SAIDAPET:\n";
	cout<<"1.Poornima Hospital: 45/2,Mosque Street,Saidapet.\n";
	cout<<"2.Vasan Eye Care: 383,Anna Salai,Sadapet.\n";
	cout<<"3.RG Stone Urology & Laproscopy Hospital: 391-92,Anna Salai,Saidapet.\n";
	cout<<"4.Liya Clinic: 24,Seshachalem Street,Saidapet.\n";
	cout<<"5.Bora Hospital: 99/39,Subramani Mudali Street,Saidapet.\n";
	break;
case 15:cout<<"\n"<<"TEYNAMPET:\n";
	cout<<"1.Aswene Soundra Hospital: 24,Kasthuri Rangam Road,Teynampet.\n";
	cout<<"2.Dr.Rai Medical Centre: 562,Century Plaza,Anna Salai,Teynampet.\n";
	cout<<"3.Apollo Cancer Hospital: 6,Cenotaph Road,Teynampet.\n";
	cout<<"4.Balaji Dental And Cranioacial Hospital: 30,Kavignar Bharath Road,Teynapet.\n";
	cout<<"5.Srinivas Dr B: 15/8,Bharathidasan Street,Teynampet.\n";
	break;
case 16:cout<<"\n"<<"TRIPLICANE:\n";
	cout<<"1.Shakthi Hospital: 175,Big Street,Triplicane.";
	cout<<"2.Govt.Kasturba Hospital: Victoria Hospital Road,Triplicane.\n";
	cout<<"3.Vasantha Hospital: Lloyds Road,Triplicane.\n";
	cout<<"4.Shifa Hospital: 93/55,Triplicane High Road,Triplicane.\n";
	cout<<"5.SVR Diagostics: 66/70,cnk Road Tripicane.\n";
	break;
case 17:cout<<"\n"<<"THIRUVANMIYUR:";
	cout<<"1.RM Hospital: A1,Srinivasa Puram,Thiruvanmiyur.\n";
	cout<<"2.Dhruv Clinics: 11,2nd East Street,Kamraj Nagar,Thiruvanmyur.\n";
	cout<<"3.The Arc Veterinary Clinic: 43-A/26,2nd Main Road,Kaaraj Nagar,Thiruvanmiyur.\n";
	break;
case 18:cout<<"\n"<<"VADAPALANI:";
	cout<<"1.SIMS Hospital: 1,Jawaharlal Nehru Salai,100 ft Road,Vadapalani.\n";
	cout<<"2.Akash Hospital: 10,100 ft Road,Vadapalani.\n";
	cout<<"3.Vijaya Hospital: 434,NSK Salai,Vadapalani.\n";
	cout<<"4.24 Hours Emergency Care Clinic: 57A,Jawaharlal Nehru Road,Vadapalani.\n";
	cout<<"5.Aparna Hospital: 5,AP Koil Street,Vadapalani.\n";
	break;
case 19:cout<<"\n"<<"VELACHERY:\n";
	cout<<"1.KS Hospital: 14,10th Cross Street,AGS Colony,Velachery.\n";
	cout<<"2.XCellent Care Hospital: 7th Cross Street,Rajalakshimi Nagar,100 ft Velachery\nByPass Road,Velachery.\n";
	cout<<"3.Denaturas Hospital: MIG 974,TNHB,1st Main Road,Velachery.\n";
	cout<<"4.Rajan Eye Care Hospital: 9,4th Cross Street,Dhandeeswaram Nagar,Velachery.\n";
	cout<<"5.Athipati Hospital: 1,Velachery ByPass Road, Velachery.\n";
	cout<<"6.Dermicure-Skin & Cosmetic Clinic: 2,3rd Cross Street,3rd Main Road,\nJaganathapuram,Velachery.\n";
	break;
case 20:cout<<"\n"<<"WASHERANET:\n";
	cout<<"1.Kumaran Childcare Hospital:40,Padalai Road,Washermanpet.\n";
	cout<<"2.MN Eye Hospital: 781,TH Road,Washermanpet.\n";
	cout<<"3.Rahavendra Hospital: 605,Thiruvatiyur High Road,Washermanpet.\n";
	cout<<"4.Angel Hospital: 26/21,Telugu Street,Washermanpet.\n";
	cout<<"5.Thangamani Dental Hospital: 40149,JP Koil Street,Washermmanpet.\n";
	break;
case 21:cout<<"\n"<<"WEST MAMBALAM:\n";
	cout<<"1.Public Health Centre: 174,Lake Veiw Road,West Mambalam.\n";
	cout<<"2.Vasanthram Hospital: 7,Varadappan Street,Vivekanandhapuram,West Mambalam.\n";
	cout<<"3.Ezhil Hospital: 5,Govindan Road,West Mambalam.\n";
	cout<<"4.Apollo Pharmacy: 102,Kodambakkam Road Mettupalayam Market,West Mambalam.\n";
	break;
default:cout<<"Sorry,Your choice doesn't match!!!";
}
}
else
{
cout<<setw(45)<<"DR.TECH\n";
cout<<setw(45)<<"~~~~~~~\n";
cout<<"\n\n";
cout<<setw(25)<<"    VETERINARY HOSPITALS:\n\n";
cout<<setw(60)<<" 1.Anna nagar               6.Adyar     \n";
cout<<setw(60)<<" 2.Velachery                7.Saidpet   \n";
cout<<setw(60)<<" 3.Madhavaram               8.Avadi     \n";
cout<<setw(60)<<" 4.Royapettah               9.Mylapur   \n";
cout<<setw(60)<<" 5.Ambattur                10.Vepery    \n";
cout<<"\n";
cout<<"           SELECT YOUR LOCATION & ENTER THE RESPECTIVE NUMBER.\n";
cin>>q;
switch(q)
{
case 6:cout<<"No.7,23rd cross street,\nIndira nagar,Adyar,\nChennai 600 020";
       break;
case 10:cout<<"No.110,\nVepery high road,\nNear vepery police station,\nChennai 600 007\n";
	break;
case 1:cout<<"Apollo clinic,\nNo.28,5th street,\nThendral colony,\nAnna nagar,\nChennai 600 040\n";
       break;
case 3:cout<<"Madhavaram milk colony,Chennai 600 051";
       break;
case 4:cout<<"Dr.Dolittle Pet Clinic,\nGarden street,\nChennai\n";
       break;
case 7:cout<<"Jenis st,Anna nagar,\nWest saidapet,\nChennai 600 015\n";
       break;
case 8:cout<<"Govt veterinary hospital,\nARundhatipalaiyam,\nAvadi,Chennai 600 109\n";
       break;
case 2:cout<<"Blue cross of India,\nNo.72,Velachery main road,\nChennai 600 032\n";
       break;
case 9:cout<<"Ballo Pet clinic,\nNo.26,CIT colony,\n2nd main road, near chettiar hall,\nChennai 600 004/n";
       break;
case 5:cout<<"Tamil Nadu animal husbandry dpt and veterinary hospital,\nAgasthiar st,padmanapan st,varadharajapuram,\nAmbattur,\nChennai 600 053\n";
       break;
default:cout<<"Sorry,Your choice doesn't match!!!";
}
}
}
}
cout<<"\n\n*** If You Want To Use It Again, Please Enter 'S' Otherwise 'N' ***\n";
cin>>w;
}while(w=='S');
getch();
}


