#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
#include<iostream.h>
#include<stdlib.h>
void funct(int);
void funct2(int);
void name(char);
int aa;char fa;
void main()
{
	clrscr();
     textcolor(YELLOW);delay(650);/*delay-displays text after sometime */
       cprintf("********  ********  *******    ******  *****   *******   ******  ******* \r\n");
       cprintf("***  ***  **        **  ***      **    *****   *     *     **    *       \r\n");
       cprintf("***  ***  **        **  ***      **    *   *   *     *     **    *       \r\n");
       cprintf("********  *****     *******      **    *   *   *     *     **    *       \r\n");
       cprintf("**        *****     ** **        **    *   *   *     *     **    *       \r\n");
       cprintf("**        **        **   **      **    *****   *     *     **    *       \r\n");
       cprintf("**        *******   **     **  ******  *****   *******   ******  ******* \r\n");
       printf("\r\n                                                                          \r\n");
	textcolor(GREEN);delay(900);/*GREEN+10 is used to give resultant reddish color */
       cprintf("                               ******  *******   *******   **      ******* \r\n");
       cprintf("                                 **    **   **   **  ***   **      **      \r\n");
       cprintf("                                 **    **   **   **  ***   **      **      \r\n");
       cprintf("                                 **    *******   ******    **      ****   \r\n");
       cprintf("                                 **    **   **   **  **    **      ****   \r\n");
       cprintf("                                 **    **   **   **  ***   **      **      \r\n");
       cprintf("                                 **    **   **   *******   ******* ******* \r\n");
       printf("                                                                        \r\n");

       textcolor(CYAN);delay(950);
       cprintf("\n                     1.CLICK TO VIEW PERIODIC TABLE       \n");
       cprintf("\r\n                     2.TO VIEW THE INFORMATION ABOUT ELEMENTS                               \r\n");
       cprintf("                     3.TO GET ALL THE ELEMENT NAMES STARTING WITH YOUR INITIALS                 \r\n");
       cprintf("                     4.EXIT                              ");
       textcolor(18+104);delay(970);
       getch();
       cprintf("                                                     ENTER CHOICE                       ");
	      clrscr();
		int p,e,s,choice;
		cout<<"				ENTER YOUR CHOICE"<<endl;
		cin>>choice;
       do
       {
		if(choice==1)
		{
			cout<<"periodic table"<<endl;/*source code of periodic table*/
			clrscr();
			textcolor(45+BLINK);/*while loop for H*/
	int a=1;
	cprintf("*");
	while(a<2)
	{
	cprintf("|_H_|");
	a++;
	}
	textcolor(59);/*for He*/
	int b=1;
	cprintf("                                                                    ");
	while(b<2)
	{
	cprintf("|_He_|");
	b++;
	}//lines were here
	textcolor(GREEN);/*for Li*/
	int c=1;
	cprintf(" ");
	while(c<2)
	{	cprintf("\r\n |_Li_|");
	c++;
	}
	textcolor(WHITE);/*for Be*/
	int d=1;
	cprintf("");
	while(d<2)
	{	cprintf("|_Be_|");
	d++;
	}
	textcolor(YELLOW);/*for B*/
	int o=1;
	cprintf("");
	while(o<2)
	{	cprintf("                                    |_B_|");
	o++;
	}
	textcolor(RED);/*forC,N,O*/
	int n=1;
	cprintf("");
	while(n<2)
	{	cprintf("|_C_||_N_||_O_|");
	n++;
	}
	textcolor(73);/*for F*/
	int m=1;
	cprintf("");
	while(m<2)
	{	cprintf("|_F_|");
	m++;
	}
	textcolor(59);/*for Ne*/
	int e=1;
	cprintf("");
	while(e<2)
	{	cprintf("|_Ne_|");
	e++;
	}
	textcolor(GREEN);/*for Na*/
	int u=1;
	cprintf("");
	while(u<2)
	{	cprintf("                                                                                 |_Na_|");
	u++;
	}
	textcolor(WHITE);/*for Mg*/
	int t=1;
	cprintf("");
	while(t<2)
	{	cprintf("|_Mg_|");
	t++;
	}
	textcolor(CYAN);/*for Al*/
	int s=1;
	cprintf("");
	while(s<2)
	{	cprintf("                                   |_Al_|");
	s++;
	}
	textcolor(YELLOW);/*for Si*/
	int r=1;
	cprintf("");
	while(r<2)
	{	cprintf("|_Si_|");
	r++;
	}
	textcolor(RED);/*for P,S*/
		cprintf("|_P_|_S_|");
	textcolor(73);/*for Cl*/
	int p=1;
	cprintf("");
	while(p<2)
	{	cprintf("|_Cl|");
	p++;
	}
	textcolor(59);/*for Ar*/
	int f=1;
	cprintf("");
	while(f<2)
	{	cprintf("|_Ar_|");
	f++;
	}
	textcolor(GREEN);
	int K=1;
	cprintf("");
	while(K<2)
	{	cprintf("\r\n |_K__|");
	K++;
	}
	textcolor(WHITE);/*for Ca only cout*/
	cprintf("|_Ca_|");
	textcolor(10);
	int many=1;
	cprintf("");
	while(many<2)
	{	cprintf("|_Sc|Ti|V_|Cr_|Mn_|Fe|Co_|Ni|Cu|Zn|");
	many++;
	}
	textcolor(CYAN);
	int Ga=1;
	cprintf("");
	while(Ga<2)
	{	cprintf("|_Ga_|");
	Ga++;
	}
	textcolor(YELLOW);
	int AsGe=1;
	cprintf("");
	while(AsGe<2)
	{	cprintf("|_Ge||As_|");
	AsGe++;
	}
	textcolor(RED);/*for Se*/
	int Se=1;
	cprintf("");
	while(Se<2)
	{	cprintf("|_Se|");
	Se++;
	}
	textcolor(73);/*for Br*/
	int Br=1;
	cprintf("");
	while(Br<2)
	{	cprintf("|_Br|");
	Br++;
	}
	textcolor(59);/*for Kr*/
	int g=1;
	cprintf("");
	while(g<2)
	{	cprintf("|_Kr_|");
	g++;
	}
	textcolor(GREEN);/*for Rb*/
	int Rb=1;
	cprintf("");
	while(Rb<2)
	{	cprintf("\r\n |_Rb_|");
	Rb++;
	}
	textcolor(WHITE);/*forSr, only cout*/
	cprintf("|_Sr_|");
	textcolor(10);
	int many2=1;
	cprintf("");
	while(many2<2)
	{	cprintf("|_Y_|Zr|Nb_|Mo|Tc_|Ru|Rh_|Pd|Ag|Cd|");
	many2++;
	}
	textcolor(CYAN);/*for In,Sn*/
	int InSn=1;
	cprintf("");
	while(InSn<2)
	{	cprintf("|In_||Sn|");
	InSn++;
	}
	textcolor(YELLOW);
	cprintf("|_Sb_||_Te_|");/*only cout for Sb and Te*/
	textcolor (73);/*for I*/
	cprintf("|_I_|");
       /*only cout for I*/
	textcolor(59);/*for Xe*/
	int Xe=1;
	cprintf("");
	while(Xe<2)
	{	cprintf("|_Xe_|");
	Xe++;
	}
	textcolor(GREEN);/*for Cs*/
	int Cs=1;
	cprintf("");
	while(Cs<2)
	{	cprintf("\r\n |_Cs_|");
	Cs++;
	}
	textcolor(WHITE);/*for Ba, only cout*/
	cprintf("|_Ba_|");
	textcolor(10);/*for group 6*/
	int many3=1;
	cprintf("");
	while(many3<2)
	{	cprintf("|_La_|Hf|Ta|W|Re|Os_|Ir|Pt|Au_|Hg_|");
	many3++;
	}
	textcolor(CYAN);/*for Tl,Pb,Bi*/
	int TlPbBi=1;
	cprintf("");
	while(TlPbBi<2)
	{	cprintf("|Tl_||Pb||Bi_|");
	TlPbBi++;
	}
	textcolor(YELLOW);
	cprintf("|_Po_|");/*only cout for Po*/
	textcolor(73);/*for At*/
	cprintf("|_At_|");
	/*only cout for At*/
	textcolor(59);/*for Rn*/
	cprintf("|_Rn_|");
	textcolor(GREEN);/*for Fr*/
	int j=1;
	cprintf("                                                                          ");
	while(j<2)
	{	cprintf("\r\n |_Fr_|");
	j++;
	}
	textcolor(WHITE);/*for Ra only cout*/
	cprintf("|_Ra_|");
	textcolor(10);/*group 7*/
	int many4=1;
	cprintf("");
	while(many4<2)
	{	cprintf("|_Rf_|Db_|Sg|Bh_|Hs|Mt|Ds_|Rg_|Cn_|");
	many4++;
	}
	textcolor(CYAN);/*for Uut,Fl,Uup,Lv*/
	int UFuL=1;
	cprintf("");
	while(UFuL<2)
	{	cprintf("|Uut_||Fl||Uup||Lv_|");
	UFuL++;
	}
	textcolor(73);
	cprintf("|_Uus|");/*only cout for Uus;*/
	textcolor(59);/*for Uuo*/
	int k=1;
	cprintf("");
	while(k<2)
	{	cprintf("|_Uuo|");
	k++;
	}
	textcolor(76);
	cprintf("\r\n      ***Lanthanides and Actinides aren't included in this periodic table**\r\n");
	textcolor(45);
	cprintf("\r\n\r\n\r\nH-shows anomalous behaviour");textcolor(10);cprintf("           Transition metals");textcolor(RED);cprintf("            Nonmetals");
	textcolor(GREEN);
	cprintf("\r\n\r\nAlkali metals");                textcolor(CYAN);cprintf("                         Other metals");textcolor(73);cprintf("                 Halogens");
	textcolor(WHITE);
	cprintf("\r\n\r\nAlkaline-earth metals");      textcolor(YELLOW);cprintf("                 Semimetallics");textcolor(59);cprintf("                Noble Gases");




getch();
main();
		}
		else if(choice==2)
		{
			
			cout<<"\n\n		ENTER THE ATOMIC NUMBER OF THE ELEMENT 	\n\n"<<endl;
			cin>>aa;
			funct(aa);
			funct2(aa);
			getch();
                        main();
		}
		else if(choice==3)
		{
			cout<<"	            ENTER YOUR INITIALS *small letters only*"<<endl;
			cin>>fa;
			name(fa);
			getch();
                        main();
		}
	
		else if(choice==4);
		{
			cout<<"			You have decided to exit the program";
			cout<<"\n\n				Press any key to exit";
			getch();
			exit(0);
			main();
		}
	}
		
	while(choice!=4);
		getch();
}//end of main function

void funct(int an)
  {
		if(an==1)
		{
			cout<<"Hydrogen";
			cout<<"          Hydrogen is a chemical element with chemical symbol H and atomic number 1.";
			cout<<"  	With an atomic weight of 1.00794 u, hydrogen is the lightest element on the periodic table.";
			cout<<"	        Electron configuration: 1s1";
		}
		else if(an==2)
		{
			cout<<"Helium";
			cout<<         "Helium is a chemical element with symbol He and atomic number 2.";
			cout<<         "With an atomic weight of 4.002602 u.It is a colorless, odorless, tasteless, non-toxic, inert, monatomic gas";
			cout<<	       "Its boiling point is the lowest among all the elements";
			cout<<	       "Electron configuration:1s2"<<endl;
		}
	       else if(an==3)
		{
			cout<<"Lithium";
			cout<<"Lithium is a chemical element with the symbol Li and atomic number 3.";
			cout<<"With an atomic weight of 6.941 u.It is a soft, silver-white metal belonging to the alkali metal group of chemical elements.";
			cout<<"Electron configuration:2s1"<<endl;
		}
	       else if(an==4)
		{
			cout<<"Beryllium";
			cout<<"Beryllium is a chemical element with symbol Be and atomic number 4.";
			cout<<"With an atomic weight of  9.012182 u .It is a relatively rare element in the universe, usually occurring as a product of the spallation of larger atomic nuclei that have collided with cosmic rays.";
			cout<<"Electron configuration:2s2"<<endl;
		}
		else if(an==5)
		{
			cout<<"Boron";
			cout<<"Boron is a chemical element with symbol B and atomic number 5. Produced entirely by cosmic ray spallation.";
			cout<<"With an atomic weight of 10.811 u.It is a low-abundance element in the Solar system and in the Earth's crust.";
			cout<<"Electron configuration:2s2 2p1"<<endl;
		}
		else if(an==6)
		{
			cout<<"Carbon:";
			cout<<"Carbon is a chemical element with symbol C and atomic number 6.";
			cout<<"With an atomic weight of 12.0107 u.";
			cout<<"It is nonmetallic and tetravalent\97making four electrons available to form covalent chemical bonds.  ";
			cout<<"Electron configuration:[He] 2s2 2p2                                                                  ";
		}
		else if(an==7)
		{
			cout<<"Nitrogen:  ";
			cout<<"Nitrogen is a chemical element with symbol N and atomic number 7.";
			cout<<"With an atomic weight of 14.0067 u.";
			cout<<"It was first discovered and isolated by Scottish physician Daniel Rutherford in 1772.";
			cout<<"Electron configuration:1s2 2s2 2p3.";
		}
		else if(an==8)
		{
			cout<<"oxygen:";
			cout<<"Oxygen is a chemical element with symbol O and atomic number 8.";
			cout<<"With an atomic weight of 15.9994 u.";
			cout<<"It is a member of the chalcogen group on the periodic table and is a highly reactive nonmetal and oxidizing agent that readily forms oxides  with most elements as well as other compounds. ";
			cout<<"Electron configuration:[He] 2s2 2p4";
		}
		else if(an==9)
		{
			cout<<"Fluorine:";
			cout<<"Fluorine is a chemical element with symbol F and atomic number 9.";
			cout<<"With an atomic weight of 18.998403 u. ";
			cout<<"It is the lightest halogen and exists as a highly toxic pale yellow diatomic gas at standard conditions. ";
			cout<<"Electron configuration:[He] 2s2 2p5. ";
		}
		else if(an==10)
		{
			cout<<"Neon:";
			cout<<"Neon is a chemical element with symbol Ne and atomic number 10.";
			cout<<"With an atomic weight of 20.1797 u.";
			cout<<"It is in group 18 of the periodic table. Neon is a colorless, odorless, inert monatomic gas under standard conditions, with about two-thirds the density of air.";
			cout<<"Electron configuration:[He] 2s2 2p6";
		}
		else if(an==11)
		{
			cout<<"Sodium:";
			cout<<"Sodium is a chemical element with symbol Na and atomic number 11. It is a soft, silvery-white, highly reactive metal.";
			cout<<"With an atomic weight of 22.989769 u";
			cout<<"Electron configuration:[Ne] 3s1";
		}
		else if(an==12)
		{
			cout<<"Magnesium:";
			cout<<"Magnesium is a chemical element with symbol Mg and atomic number 12. ";
			cout<<"With an atomic weight of 24.305 u";
			cout<<"It is a shiny gray solid which bears a close physical resemblance to the other five elements in the second column of the periodic table.";
			cout<<"Electron configuration:[Ne]3s2 ";
		}
		else if(an==13)
		{
			cout<<"Aluminium:";
			cout<<"Aluminium or aluminum is a chemical element in the boron group with symbol Al and atomic number 13.";
			cout<<"With an atomic weight of  26.981539 u .";
			cout<<"It is a silvery-white, soft, nonmagnetic, ductile metal. ";
			cout<<"Electron configuration:[Ne] 3s2 3p1";
		}
		else if(an==14)
		{
			cout<<"Silicon:";
			cout<<"Silicon is a chemical element with symbol Si and atomic number 14.";
			cout<<"With an atomic weight of 28.0855 u.";
			cout<<"A hard and brittle crystalline solid with a blue-gray metallic luster, it is a tetravalent metalloid. ";
			cout<<"Electron configuration:[Ne]3s2 3p2.";
		}
		else if(an==15)
		{
			cout<<"Phosphorous:";
			cout<<"Phosphorus is a chemical element with symbol P and atomic number 15.";
			cout<<"With an atomic weight of 30.973762 u ";
			cout<<"As an element phosphorus exists in two major forms\97white phosphorus and red phosphorus\97but because it is highly reactive, phosphorus is never found as a free element on Earth. ";
			cout<<"Electron configuration:[Ne]3s2 3p3";
		}
		else if(an==16)
		{
			cout<<"Sulfur:";
			cout<<"Sulfur or sulphur is a chemical element with symbol S and atomic number 16.It is abundant, multivalent, and nonmetalic.";
			cout<<"With an atomic weight of 32.065 u";
			cout<<"Electron configuration:[Ne] 3s 3p4";
		}
		else if(an==17)
		{
			cout<<"Chlorine";
			cout<<"Chlorine is a chemical element with symbol Cl and atomic number 17.";
			cout<<"It's the second-lightest of the halogens, it appears between fluorine and bromine in the periodic table and its properties are mostly intermediate between them.";
			cout<<"With an atomic weight of 35.453 u";
			cout<<"Electron configuration:[Ne] 3s2 3p5";
		}
		else if(an==18)
		{
			cout<<"Argon:";
			cout<<"Argon is a chemical element with symbol Ar and atomic number 18. It is in group 18 of the periodic table and is a noble gas.";
			cout<<"With an atomic weight of 39.948 u";
			cout<<"Electron configuration:[Ne]3s2 3p6";
		}
		else if(an==19)
		{
			cout<<"Potassium:";
			cout<<"Potassium is a chemical element with symbol K and atomic number 19.";
			cout<<"It was first isolated from potash, the ashes of plants, from which its name derives. In the periodic table, potassium is one of the alkali metals.";
			cout<<"With an atomic weight of 39.0983 u.";
			cout<<"Electron configuration:[Ar] 4s1.";
		}
		else if(an==20)
		{
			cout<<"Calcium:";
			cout<<"Calcium is a chemical element with symbol Ca and atomic number 20.";
			cout<<"Calcium is a soft gray Group 2 alkaline earth metal, fifth-most-abundant element by mass in the Earth's crust.";
			cout<<"With an atomic weight of 40.078 u.";
			cout<<"Electron configuration:[Ar] 4s2.";
		}
		else if(an==21)
		{
			cout<<"Scandium:";
			cout<<"Scandium is a chemical element with symbol Sc and atomic number 21.";
			cout<<"A silvery-white metallic d-block element, it has historically been sometimes classified as a rare earth element, together with yttrium and the lanthanides.";
			cout<<"With an atomic weight of 44.955912 u.";
			cout<<"Electron configuration:[Ar]3d1 4s2";
		}
		else if(an==22)
		{
			cout<<"Titanium:";
			cout<<"Titanium is a chemical element with symbol Ti and atomic number 22.";
			cout<<"It is a lustrous transition metal with a silver color, low density, and high strength. It is resistant to corrosion in sea water, aqua regia, and chlorine.";
			cout<<"With an atomic weight of 47.867 u.";
			cout<<"Electron configuration:[Ar]3d2 4s2.";
		}
		else if(an==23)
		{
			cout<<"Vanadium:";
			cout<<"Vanadium is a chemical element with symbol V and atomic number 23.";
			cout<<"It is a hard, silvery grey, ductile, and malleable transition metal.";
			cout<<"With an atomic weight of 50.9415 u.";
			cout<<"Electron configuration:[Ar]3d3 4s2.";
		}
		else if(an==24)
		{	cout<<"Chromium:";
			cout<<"Chromium is a chemical element with symbol Cr and atomic number 24. It is the first element in Group 6.";
			cout<<"It is a steely-grey, lustrous, hard and brittle metal which takes a high polish, resists tarnishing, and has a high melting point.";
			cout<<"With an atomic weight of 51.9961 u.";
			cout<<"Electron configuration:[Ar]3d5 4s1.";
		}
		else if(an==25)
		{
			cout<<"Manganese:";
			cout<<"Manganese is a chemical element with symbol Mn and atomic number 25.";
			cout<<"It is not found as a free element in nature; it is often found in minerals in combination with iron.";
			cout<<"With an atomic weight of 54.938045 u.";
			cout<<"Electron configuration:[Ar]3d5 4s2.";
		}
		else if(an==26)
		{
			cout<<"Iron:";
			cout<<"Iron is a chemical element with symbol Fe and atomic number 26.";
			cout<<"It is a metal in the first transition series. It is by mass the most common element on Earth, forming much of Earth's outer and inner core.";
			cout<<"With an atomic weight of 55.845u.";
			cout<<"Electron configuration:[Ar]3d6 4s2. ";
		}
		else if(an==27)
		{
			cout<<"Cobalt:";
			cout<<"Cobalt is a chemical element with symbol Co and atomic number 27.";
			cout<<"Like nickel, cobalt is found in the Earth's crust only in chemically combined form, save for small deposits found in alloys of natural meteoric iron.";
			cout<<"With an atomic weight of  58.933195 u.";
			cout<<"Electron configuration:[Ar]3d7 4s2.";
		}
		else if(an==28)
		{
			cout<<"Nickel:";
			cout<<"Nickel is a chemical element with symbol Ni and atomic number 28.";
			cout<<"It is a silvery-white lustrous metal with a slight golden tinge. Nickel belongs to the transition metals and is hard and ductile.";
			cout<<"With an atomic weight of 58.6934 u.";
			cout<<"Electron configuration:[Ar]3d8 4s2.";
		}
		else if(an==29)
		{
			cout<<"Copper:";
			cout<<"Copper is a chemical element with symbol Cu and atomic number 29.";
			cout<<"It is a soft, malleable, and ductile metal with very high thermal and electrical conductivity.";
			cout<<"With an atomic weight of 63.546 u.";
			cout<<"Electron configuration:[Ar]3d10 4s1.";
		}
		else if(an==30)
		{
			cout<<"Zinc:";
			cout<<"Zinc is a chemical element with the symbol Zn and atomic number 30.";
			cout<<"It is the first element in group 12 of the periodic table.";
			cout<<"With an atomic weight of 65.38u.";
			cout<<"Electron configuration:[Ar]3d10 4s2.";
		}
		else if(an==31)
		{
			cout<<"Gallium:";
			cout<<"Gallium is a chemical element with symbol Ga and atomic number 31.";
			cout<<"It is in group 13 of the periodic table, and thus has similarities to the other metals of the group, aluminium, indium, and thallium.";
			cout<<"With an atomic weight of 69.723 u.";
			cout<<"Electron configuration:[Ar]3d10 4s2 4p1.";
		}
		else if(an==32)
		{
			cout<<"Germanium:";
			cout<<"Germanium is a chemical element with symbol Ge and atomic number 32.";
			cout<<"It is a lustrous, hard, grayish-white metalloid in the carbon group, chemically similar to its group neighbors tin and silicon.";
			cout<<"With an atomic weight of 72.64 u.";
			cout<<"Electron configuration:[Ar]3d10 4s2 4p2.";
		}
		else if(an==33)
		{
			cout<<"Arsenic:";
			cout<<"Arsenic is a chemical element with symbol As and atomic number 33.";
			cout<<"Arsenic occurs in many minerals, usually in combination with sulfur and metals, but also as a pure elemental crystal. Arsenic is a metalloid.";
			cout<<"With an atomic weight of 74.9216u.";
			cout<<"Electron configuration:[Ar]3d10 4s2 4p3.";
		}
		else if(an==34)
		{
			cout<<"Selenium:";
			cout<<"Selenium is a chemical element with symbol Se and atomic number 34.";
			cout<<"It is a nonmetal with properties that are intermediate between the elements above and below in the periodic table, sulfur and tellurium.";
			cout<<"With an atomic weight of 78.96 u.";
			cout<<"Electron configuration:[Ar]3d10 4s2 4p4.";
		}
		else if(an==35)
		{
			cout<<"Bromine:";
			cout<<"Bromine is a chemical element with symbol Br and atomic number 35.";
			cout<<"It is the third-lightest halogen, and is a fuming red-brown liquid at room temperature that evaporates readily to form a similarly coloured gas.";
			cout<<"With an atomic weight of 79.904 u.";
			cout<<"Electron configuration:[Ar]3d10 4s2 4p5.";
		}
		else if(an==36)
		{
			cout<<"Krypton:";
			cout<<"Krypton is a chemical element with symbol Kr and atomic number 36. It is a member of group 18 elements.";
			cout<<"With an atomic weight of 83.798u.";
			cout<<"Electron configuration:[Ar]3d10 4s2 4p6";
		}
		else if(an==37)
		{
			cout<<"Rubidium:";
			cout<<"Rubidium is a chemical element with symbol Rb and atomic number 37.";
			cout<<"Rubidium is a soft, silvery-white metallic element of the alkali metal group.";
			cout<<"With an atomic weight of 85.4678u.";
			cout<<"Electron configuration:[Kr]5s1.";
		}
		else if(an==38)
		{
			cout<<"Strontium:";
			cout<<"Strontium is a chemical element with symbol Sr and atomic number 38.";
			cout<<"An alkaline earth metal, strontium is a soft silver-white or yellowish metallic element that is highly reactive chemically.";
			cout<<"With an atomic weight of 87.62u.";
			cout<<"Electron configuration:[Kr]5s2.";
		}
		else if(an==39)
		{
			cout<<"Yttrium:";
			cout<<"Yttrium is a chemical element with symbol Y and atomic number 39.";
			cout<<"It is a silvery-metallic transition metal chemically similar to the lanthanides and has often been classified as a 'rare earth element'.";
			cout<<"With an atomic weight of 88.90585 u.";
			cout<<"Electron configuration:[Kr]4d1 5s2.";
		}
		else if(an==40)
		{
			cout<<"Zirconium:";
			cout<<"Zirconium is a chemical element with symbol Zr and atomic number 40.";
			cout<<"The name of zirconium is taken from the name of the mineral zircon, the most important source of zirconium.";
			cout<<"With an atomic weight of 91.224 u.";
			cout<<"Electron configuration:[Kr]4d2 5s2.";
		}
		else if(an==41)
		{
			cout<<"Niobium:";
			cout<<"Niobium, formerly columbium, is a chemical element with symbol Nb and atomic number 41.";
			cout<<"It is a soft, grey, ductile transition metal.";
			cout<<"With an atomic weight of 92.90638 u.";
			cout<<"Electron configuration:[Kr]4d4 5s1.";
		}
		else if(an==42)
		{
			cout<<"Molybdenum:";
			cout<<"Molybdenum is a chemical element with symbol Mo and atomic number 42.";
			cout<<"The name is from Neo-Latin molybdaenum, from Ancient Greek molybdos, meaning lead, since its ores were confused with lead ores.";
			cout<<"With an atomic weight of 95.94u.";
			cout<<"Electron configuration:[Kr]4d5 5s1.";
		}
		else if(an==43)
		{
			cout<<"Technetium:";
			cout<<"Technetium is a chemical element with symbol Tc and atomic number 43.";
			cout<<"It is the lightest element of which all isotopes are radioactive; none are stable.";
			cout<<"With an atomic weight of 98u.";
			cout<<"Electron configuration:[Kr]4d5 5s2.";
		}
		else if(an==44)
		{
			cout<<"Ruthenium: ";
			cout<<"Ruthenium is a chemical element with symbol Ru and atomic number 44.";
			cout<<"It is a rare transition metal belonging to the platinum group of the periodic table.";
			cout<<"Like the other metals of the platinum group, ruthenium is inert to most other chemicals.";
			cout<<"With an atomic weight of 101.07 u.";
			cout<<"Electron configuration:[Kr]4d7 5s1.";
		}
		else if(an==45)
		{
			cout<<"Rhodium:";
			cout<<"Rhodium is a chemical element with symbol Rh and atomic number 45.";
			cout<<"It is a rare, silvery-white, hard, and chemically inert transition metal. It is a member of the platinum group.";
			cout<<"With an atomic weight of 102.9055 u.";
			cout<<"Electron configuration:[Kr]4d8 5s1.";
		}
		else if(an==46)
		{
			cout<<"Palladium:";
			cout<<"Palladium is a chemical element with symbol Pd and atomic number 46.";
			cout<<"It is a rare and lustrous silvery-white metal discovered in 1803 by William Hyde Wollaston.";
			cout<<"With an atomic weight of 106.42u.";
			cout<<"Electron configuration:[Kr]4d10.";
		}
		else if(an==47)
		{
			cout<<"Silver:";
			cout<<"Silver is the metallic element with the atomic number 47.";
			cout<<"Its symbol is Ag, from the Latin argentum, derived from the Greek and ultimately from a Proto-Indo-European language root reconstructed as 'grey' or 'shining'.";
			cout<<"With an atomic weight of 107.8682u.";
			cout<<"Electron configuration:[Kr]4d10 5s1.";
		}
		else if(an==48)
		{
			cout<<"Cadmium:";
			cout<<"Cadmium is a chemical element with symbol Cd and atomic number 48.";
			cout<<"This soft, bluish-white metal is chemically similar to the two other stable metals in group 12, zinc and mercury.";
			cout<<"With an atomic weight of 112.411 u.";
			cout<<"Electron configuration:[Kr]4d10 5s2.";
		}
		else if(an==49)
		{
			cout<<"Indium:";
			cout<<"Indium is a chemical element with symbol In and atomic number 49.";
			cout<<"It is a post-transition metal that makes up 0.21 parts per million of the Earth's crust.";
			cout<<"With an atomic weight of 114.818u.";
			cout<<"Electron configuration:[Kr]4d10 5s2 5p1.";
		}
		else if(an==50)
		{
			cout<<"Tin:";
			cout<<"Tin is a chemical element with the symbol Sn and atomic number 50.";
			cout<<"It's a post-transition metal in group 14 of the periodic table. It is obtained chiefly from the mineral cassiterite, which contains tin dioxide.";
			cout<<"With an atomic weight of 118.71u.";
			cout<<"Electron configuration:[Kr]4d10 5s2 5p2.";
		}
		else if(an==51)
		{
			cout<<"Antimony:";
			cout<<"Antimony is a chemical element with symbol Sb and atomic number 51.";
			cout<<"A lustrous gray metalloid, it is found in nature mainly as the sulfide mineral stibnite.";
			cout<<"With an atomic weight of 121.76 u.";
			cout<<"Electron configuration:[Kr]4d10 5s2 5p3.";
		}
		else if(an==52)
		{
			cout<<"Tellurium:";
			cout<<"Tellurium is a chemical element with symbol Te and atomic number 52.";
			cout<<"It is a brittle, mildly toxic, rare, silver-white metalloid.";
			cout<<"It is chemically related to selenium and sulfur. It is occasionally found in native form as elemental crystals.";
			cout<<"With an atomic weight of 127.6u.";
			cout<<"Electron configuration:[Kr]4d10 5s2 5p4.";
		}
		else if(an==53)
		{
			cout<<"Iodine:";
			cout<<"Iodine is a chemical element with symbol I and atomic number 53.";
			cout<<"The heaviest of the stable halogens, it exists as a lustrous, purple-black metallic solid at a standard conditions that sublimes readily to form a violet gas.";
			cout<<"With an atomic weight of 126.90447 u.";
			cout<<"Electron configuration:[Kr]4d10 5s2 5p5.";
		}
		else if(an==54)
		{
			cout<<"Xenon:";
			cout<<"Xenon is a chemical element with symbol Xe and atomic number 54.";
			cout<<"It is a colorless, dense, odorless noble gas found in the Earth's atmosphere in trace amounts.";
			cout<<"With an atomic weight of 131.293u.";
			cout<<"Electron configuration:[Kr]4d10 5s2 5p6.";
		}
		else if(an==55)
		{
			cout<<"Caesium:";
			cout<<"Caesium or cesium is a chemical element with symbol Cs and atomic number 55.";
			cout<<"It is a soft, silvery-gold alkali metal.";
			cout<<"With an atomic weight of 132.90545u.";
			cout<<"Electron configuration:[Xe] 6s1.";
		}
		else if(an==56)
		{
			cout<<"Barium:";
			cout<<"Barium is a chemical element with symbol Ba and atomic number 56.";
			cout<<"It is the fifth element in Group 2, a soft silvery metallic alkaline earth metal.";
			cout<<"Because of its high chemical reactivity, barium is never found in nature as a free element.";
			cout<<"With an atomic weight of 137.327 u.";
			cout<<"Electron configuration:[Xe]6s2.";
		}
		else if(an==57)
		{
			cout<<"Lanthanum:";
			cout<<"Lanthanum is a soft, ductile, silvery-white metallic chemical element with symbol La and atomic number 57.";
			cout<<"It tarnishes rapidly when exposed to air and is soft enough to be cut with a knife.";
			cout<<"It is the eponym of the lanthanide series, a group of 15 similar elements between lanthanum and lutetium in the periodic table, of which lanthanum is the first and the prototype.";
			cout<<"It is also sometimes considered the first element of the 6th-period transition metals and is traditionally counted among the rare earth elements.";
			cout<<"With an atomic weight of 138.90547 u.";
			cout<<"Electron configuration:[Xe]5d1 6s2.";
		}
		else if(an==58)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==59)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==60)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}

}
void funct2(int an)
{
			if(an==61)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==62)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==63)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==64)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==65)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==66)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==67)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==68)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==69)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==70)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==71)
			{
				cout<<"The Atomic Number that you've entered lies in Lanthanum Series";
			}
		else if(an==72)
		{
			cout<<"Hafnium:";
			cout<<"Hafnium is a chemical element with symbol Hf and atomic number 72.";
			cout<<"A lustrous, silvery gray, tetravalent transition metal, hafnium chemically resembles zirconium and is found in zirconium minerals.";
			cout<<"With an atomic weight of 178.49 u.";
			cout<<"Electron configuration:[Xe]4f14 5d2 6s2.";
		}
		else if(an==73)
		{
			cout<<"Tantalum:";
			cout<<"Tantalum is a chemical element with symbol Ta and atomic number 73.";
			cout<<"Previously known as tantalium, its name comes from Tantalus, a villain from Greek mythology.";
			cout<<"With an atomic weight of 180.94788 u.";
			cout<<"Electron configuration:[Xe]4f14 5d3 6s2.";
		}
		else if(an==74)
		{
			cout<<"Tungsten:";
			cout<<"Tungsten, also known as wolfram, is a chemical element with symbol W and atomic number 74.";
			cout<<"The word tungsten comes from the Swedish language tung sten, which directly translates to heavy stone.";
			cout<<"With an atomic weight of 183.84 u.";
			cout<<"Electron configuration:[Xe]4f14 5d4 6s2.";
		}
		else if(an==75)
		{
			cout<<"Rhenium:";
			cout<<"Rhenium is a chemical element with symbol Re and atomic number 75.";
			cout<<"It is a silvery-white, heavy, third-row transition metal in group 7 of the periodic table.";
			cout<<"With an atomic weight of 186.207 u.";
			cout<<"Electron configuration:[Xe]4f14 5d5 6s2.";
		}
		else if(an==76)
		{
			cout<<"Osmium:";
			cout<<"Osmium is a chemical element with symbol Os and atomic number 76.";
			cout<<"It is a hard, brittle, bluish-white transition metal in the platinum group that is found as a trace element in alloys, mostly in platinum ores.";
			cout<<"With an atomic weight of 190.23 u.";
			cout<<"Electron configuration:[Xe]4f14 5d6 6s2.";
		}
		else if(an==77)
		{
			cout<<"Iridium:";
			cout<<"Iridium is a chemical element with symbol Ir and atomic number 77.";
			cout<<"A very hard, brittle, silvery-white transition metal of the platinum group, iridium is generally credited with being the second densest element.";
			cout<<"With an atomic weight of 192.217 u.";
			cout<<"Electron configuration:[Xe]4f14 5d7 6s2.";
		}
		else if(an==78)
		{
			cout<<"Platinum:";
			cout<<"Platinum is a chemical element with symbol Pt and atomic number 78.";
			cout<<"It is dense, malleable, ductile, highly unreactive, precious, gray-white transition metal.";
			cout<<"Its name is derived from the Spanish term platina, translated long into 'little silver'.";
			cout<<"With an atomic weight of  195.084 u.";
			cout<<"Electron configuration:[Xe]4f14 5d9 6s1.";
		}
		else if(an==79)
		{
			cout<<"Gold:";
			cout<<"Gold is a chemical element with the symbol Au and the atomic number 79.";
			cout<<"In its purest form, it is a bright, slightly reddish yellow, dense, soft, malleable, and ductile metal.";
			cout<<"Chemically, gold is a transition metal and a group 11 element.";
			cout<<"With an atomic weight of 196.96657 u.";
			cout<<"Electron configuration:[Xe]4f14 5d10 6s1.";
		}
		else if(an==80)
		{
			cout<<"Mercury:";
			cout<<"Mercury is a chemical element with symbol Hg and atomic number 80.";
			cout<<"It is commonly known as quicksilver and was formerly named hydrargyrum.";
			cout<<"With an atomic weight of 200.59 u.";
			cout<<"Electron configuration:[Xe]4f14 5d10 6s2.";
		}
		else if(an==81)
		{
			cout<<"Thallium:";
			cout<<"Thallium is a chemical element with symbol Tl and atomic number 81.";
			cout<<"This soft gray post-transition metal is not found free in nature.";
			cout<<"When isolated, it resembles tin, but discolors when exposed to air.";
			cout<<"With an atomic weight of 204.3833 u.";
			cout<<"Electron configuration:[Xe]4f14 5d10 6s2 6p1.";
		}
		else if(an==82)
		{
			cout<<"Lead:";
			cout<<"Lead is a chemical element with atomic number 82 and symbol Pb.";
			cout<<"It is a soft, malleable, and heavy metal.";
			cout<<"With an atomic weight of 207.2 u.";
			cout<<"Electron configuration:[Xe]4f14 5d10 6s2 6p2.";
		}
		else if(an==83)
		{
			cout<<"Bismuth:";
			cout<<"Bismuth is a chemical element with the symbol Bi and the atomic number 83.";
			cout<<"Bismuth, a pentavalent post-transition metal and one of the pnictogens, chemically resembles its lighter homologs arsenic and antimony.";
			cout<<"With an atomic weight of 208.9804 u";
			cout<<"Electron configuration:[Xe]4f14 5d10 6s2 6p3.";
		}
		else if(an==84)
		{
			cout<<"Polonium:";
			cout<<"Polonium is a chemical element with symbol Po and atomic number 84";
			cout<<"With an atomic weight of 209 u.";
			cout<<"Electron configuration:[Xe]6s2 4f14 5d10 6p4.";
		}
		else if(an==85)
		{
			cout<<"Astatine:";
			cout<<"Astatine is a radioactive chemical element with the chemical symbol At and atomic number 85.";
			cout<<"It's the rarest naturally occurring element on the Earth's crust. It occurs on Earth as the decay product of various heavier elements.";
			cout<<"With an atomic weight of 210 u.";
			cout<<"Electron configuration:[Xe]4f14 5d10 6s2 6p5.";
		}
		else if(an==86)
		{
			cout<<"Radon:";
			cout<<"Radon is a chemical element with symbol Rn and atomic number 86.";
			cout<<"It is a radioactive, colorless, odorless, tasteless noble gas.";
			cout<<"With an atomic weight of 222 u.";
			cout<<"Electron configuration:[Xe]4f14 5d10 6s2 6p6.";
		}
		else if(an==87)
		{
			cout<<"Francium:";
			cout<<"Francium is a chemical element with symbol Fr and atomic number 87.";
			cout<<"It used to be known as eka-caesium and actinium K.";
			cout<<"It is the second-least electronegative element, behind only caesium, and is the second rarest naturally occurring element.";
			cout<<"With an atomic weight of 223 u.";
			cout<<"Electron configuration:[Rn]7s1.";
		}
		else if(an==88)
		{
			cout<<"Radium:";
			cout<<"Radium is a chemical element with symbol Ra and atomic number 88.";
			cout<<"It is the sixth element in group 2 of the periodic table, also known as the alkaline earth metals.";
			cout<<"With an atomic weight of 226 u.";
			cout<<"Electron configuration:[Rn]7s2.";
		}
		else if(an==89)
		{
			cout<<"Actinium:";
			cout<<"Actinium is a radioactive chemical element with symbol Ac and atomic number 89.";
			cout<<"It was discovered in 1899 and it was the first non-primordial radioactive element to be isolated.";
			cout<<"With an atomic weight of 227.02774 u.";
			cout<<"Electron configuration:[Rn]6d1 7s2.";
		}
		else if(an==90)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==91)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==92)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==93)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==94)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==95)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==96)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==97)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==90)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==98)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==99)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==100)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==101)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==90)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==102)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==103)
			{
				cout<<"The Atomic Number that you've entered lies in Actinum Series";
			}
		else if(an==104)
		{
			cout<<"Rutherfordium:";
			cout<<"Rutherfordium is a chemical element with symbol Rf and atomic number 104.";
			cout<<"It's named in honor of physicist Ernest Rutherford. It is a synthetic element and radioactive.";
			cout<<"With an atomic weight of 261 u.";
			cout<<"Electron configuration:[Rn]5f14 6d2 7s2.";
		}
		else if(an==105)
		{
			cout<<"Dubnium:";	
			cout<<"Dubnium is a chemical element with symbol Db and atomic number 105";
			cout<<"A transactinide element, dubnium is highly radioactive:the most stable known isotope, dubnium-268, has a half-life of just above a day.";
			cout<<"With an atomic weight of 262 u.";
			cout<<"Electron configuration:[Rn]5f14 6d3 7s2.";
		}
		else if(an==106)
		{
			cout<<"Seaborgium:";
			cout<<"Seaborgium is a chemical element with symbol Sg and atomic number 106.";
			cout<<"It is named after the American nuclear chemist Glenn T. Seaborg.";
			cout<<"It is one of only two elements named after a living person at the time of naming, the other being oganesson.";
			cout<<"With an atomic weight of 266 u.";
			cout<<"Electron configuration:[Rn][Rn] 5f14 6d4 7s2.";
		}
		else if(an==107)
		{
			cout<<"Bohrium:";	
			cout<<"Bohrium is a chemical element with symbol Bh and atomic number 107.";
			cout<<"It is named after Danish physicist Niels Bohr. It is a synthetic element and radioactive.";
			cout<<"With an atomic weight of 264 u.";
			cout<<"Electron configuration:[Rn] 5f14 6d5 7s2.";
		}
		else if(an==108)
		{
			cout<<"Hassium:";
			cout<<"Hassium is a chemical element with symbol Hs and atomic number 108, named after the German state of Hesse.";
			cout<<"With an atomic weight of 277 u.";
			cout<<"Electron configuration:[Rn]5f14 6d6 7s2.";
		}
		else if(an==109)
		{
			cout<<"Meitnerium:";	
			cout<<"Meitnerium is a chemical element with symbol Mt and atomic number 109.";
			cout<<"It is an extremely radioactive synthetic element.The most stable known isotope, meitnerium-278, has a half-life of 7.6 seconds.";
			cout<<"With an atomic weight of 268";
			cout<<"Electron configuration:[Rn]5f14 6d7 7s2.";
		}
		else if(an==110)
		{
			cout<<"Darmstadtium:";
			cout<<"Darmstadtium is a chemical element with symbol Ds and atomic number 110.";
			cout<<"It is an extremely radioactive synthetic element.The most stable known isotope, darmstadtium-281, has a half-life of approximately 10 seconds.";
			cout<<"With an atomic weight of 281 u.";
			cout<<"Electron configuration:[Rn] 5f14 6d8 7s2.";

		}
		else if(an==111)
		{
			cout<<"Roentgenium:";
			cout<<"Roentgenium is a chemical element with symbol Rg and atomic number 111.";
			cout<<"It is an extremely radioactive synthetic element,the most stable known isotope, roentgenium-282, has a half-life of 2.1 minutes.";
			cout<<"With an atomic weight of 272 u.";
			cout<<"Electron configuration:[Rn] 5f14 6d9 7s2.";
		}
		else if(an==112)
		{
			cout<<"Copernicum:";
			cout<<"Copernicium is a chemical element with symbol Cn and atomic number 112.";
			cout<<"It is an extremely radioactive, synthetic element that can only be created in a laboratory.";
			cout<<"With an atomic weight of 285 u.";
			cout<<"Electron configuration:[Rn]5f14 6d10 7s2.";
		}
		else if(an==113)
		{
			cout<<"Nihonium:";
			cout<<"Nihonium is a chemical element with atomic number 113.";
			cout<<"It is a synthetic element and is extremely radioactive; its most stable known isotope, nihonium-286, has a half-life of 20 seconds.";
			cout<<"With an atomic weight of 284 u.";
			cout<<"Electron configuration:[Rn]5f14 6d10 7s2 7p1.";
		}
		else if(an==114)
		{
			cout<<"Flerovium:";
			cout<<"Flerovium is a superheavy artificial chemical element with symbol Fl and atomic number 114,earlier(Uut)";
			cout<<"It is an extremely radioactive synthetic element.";
			cout<<"With an atomic weight of 289 u.";
			cout<<"Electron configuration:[Rn]5f14 6d10 7s2 7p2";
		}
		else if(an==115)
		{
			cout<<"Moscovium:";
			cout<<"It a superheavy synthetic element with atomic number 115,earlier(Uup).";
			cout<<"It was first synthesized in 2003";
			cout<<"With an atomic weight of 288 u.";
			cout<<"Electron configuration:[Rn]5f14 6d10 7s2 7p3.";
		}
		else if(an==116)
		{
			cout<<"Livermorium:";
			cout<<"Livermorium is a synthetic superheavy element with symbol Lv and atomic number 116.";
			cout<<"It is an extremely radioactive element that has only been created in the laboratory and has not been observed in nature.";
			cout<<"With an atomic weight of 292 u.";
			cout<<"Electron configuration:[Rn]5f14 6d10 7s2 7p3.";
		}
		else if(an==117)
		{
			cout<<"Tennessine:";
			cout<<"Tennessine is a superheavy artificial chemical element with an atomic number of 117 and a symbol of Ts,earlier (Uus).";
			cout<<"It is the second-heaviest known element and penultimate element of the 7th period of the periodic table.";
			cout<<"With an atomic weight of 294 u.";
			cout<<"Electron configuration:[Rn] 5f14 6d10 7s2 7p5 (presumed)";

		}
		else if(an==118)
		{
			cout<<"Oganesson:";
			cout<<"Oganesson is a transactinide chemical element with the atomic number 118 and a symbol of Og,earlier(Uuo).";
			cout<<"It was first synthesized in 2002.";
			cout<<"With an atomic weight of 294 u.";
			cout<<"Electron configuration:[Rn]5f14 6d10 7s2 7p6 (presumed)";
		}
}

void name(char fl)
{
	clrscr();
	cout<<"\n\n		ALL THE ELEMENTS STARTING WITH YOUR INITIALS ARE-----		\n\n"<<endl;
	if(fl=='a')
	{
		cout<<"ALUMINIUM"<<endl;
		cout<<"ARGON"<<endl;
		cout<<"ARSENIC"<<endl;
		cout<<"ANTIMONY"<<endl;
		cout<<"ASTATINE"<<endl;
		cout<<"ACTINIUM"<<endl;
		cout<<"AMERICIUM"<<endl;
	}
	else if(fl=='b')
	{
		cout<<"BERYLLIUM"<<endl;
		cout<<"BORON"<<endl;
		cout<<"BROMINE"<<endl;
		cout<<"BARIUM"<<endl;
		cout<<"BISMUTH"<<endl;
		cout<<"BERKELIUM"<<endl;
		cout<<"BOHRIUM"<<endl;
	}
	else if(fl=='c')
	{
		cout<<"CARBON"<<endl;
		cout<<"CHLORINE"<<endl;
		cout<<"CALCIUM"<<endl;
		cout<<"CHROMIUM"<<endl;
		cout<<"COBALT"<<endl;
		cout<<"COPPER"<<endl;
		cout<<"CADMIUM"<<endl;
		cout<<"CAESIUM"<<endl;
		cout<<"CERIUM"<<endl;
		cout<<"CURIUM"<<endl;
		cout<<"CALIFORNIUM"<<endl;
		cout<<"COPERNICUM"<<endl;
	}
	else if(fl=='d')
	{
		cout<<"DYSPROSIUM"<<endl;
		cout<<"DUBNIUM"<<endl;
		cout<<"DARMSTADTIUM"<<endl;
	}
	else if(fl=='e')
	{
		cout<<"EUROPIUM"<<endl;
		cout<<"ERBIUM"<<endl;
		cout<<"EINSTEINIUM"<<endl;
	}
	else if(fl=='f')
	{
		cout<<"FLUORINE"<<endl;
		cout<<"FRANCIUM"<<endl;
		cout<<"FERMIUM"<<endl;
		cout<<"FLEROVIUM"<<endl;
	}
	else if(fl=='g')
	{
		cout<<"GALLIUM"<<endl;
		cout<<"GERMANIUM"<<endl;
		cout<<"GADOLINIUM"<<endl;
		cout<<"GOLD"<<endl;
	}
	else if(fl=='h')
	{
		cout<<"HYDROGEN"<<endl;
		cout<<"HELIUM"<<endl;
		cout<<"HOLMIUM"<<endl;
		cout<<"HAFNIUM"<<endl;
		cout<<"HASSIUM"<<endl;
	}
	else if(fl=='i')
	{
		cout<<"IRON"<<endl;
		cout<<"INDIUM"<<endl;
		cout<<"IODINE"<<endl;
		cout<<"IRIDIUM"<<endl;
	}
	else if(fl=='j')
	{
		cout<<"SORRY!!!THERE IS NO SUCH ELEMENT STARTING WITH 'J'"<<endl;
	}
	else if(fl=='k')
	{
		cout<<"KRYPTON"<<endl;
	}
	else if(fl=='l')
	{
		cout<<"LITHIUM"<<endl;
		cout<<"LANTHANUM"<<endl;
		cout<<"LUTETIUM"<<endl;
		cout<<"LEAD"<<endl;
		cout<<"LAWRENCIUM"<<endl;
		cout<<"LIVERMORIUM"<<endl;
	}
	else if(fl=='m')
	{
		cout<<"MAGNESIUM"<<endl;
		cout<<"MANGANESE"<<endl;
		cout<<"MOLYBDENUM"<<endl;
		cout<<"MERCURY"<<endl;
		cout<<"MENDELEVIUM"<<endl;
		cout<<"MEITNERIUM"<<endl;
	}
	else if(fl=='n')
	{
		cout<<"NITROGEN"<<endl;
		cout<<"NEON"<<endl;
		cout<<"NICKEL"<<endl;
		cout<<"NIOBIUM"<<endl;
		cout<<"NEODYMIUM"<<endl;
		cout<<"NEPTUNIUM"<<endl;
		cout<<"NOBELIUM"<<endl;
	}
	else if(fl=='o')
	{
		cout<<"OXYGEN"<<endl;
		cout<<"OSMIUM"<<endl;
	}
	else if(fl=='p')
	{
		cout<<"PHOSPHOROUS"<<endl;
		cout<<"POTASSIUM"<<endl;
		cout<<"PALLADIUM"<<endl;
		cout<<"PRASEODYMIUM"<<endl;
		cout<<"PROMETHIUM"<<endl;
		cout<<"PLATINUM"<<endl;
		cout<<"POLONIUM"<<endl;
		cout<<"PROTACTINUM"<<endl;
		cout<<"PLUTONIUM"<<endl;
	}
	else if(fl=='q')
	{
		cout<<"SORRY!!!THERE IS NO ELEMENT STARTING WITH 'Q'"<<endl;
	}
	else if(fl=='r')
	{
		cout<<"RUBIDIUM"<<endl;
		cout<<"RUTHENIUM"<<endl;
		cout<<"RHODIUM"<<endl;
		cout<<"RHENIUM"<<endl;
		cout<<"RADON"<<endl;
		cout<<"RADIUM"<<endl;
		cout<<"RUTHERFODIUM"<<endl;
		cout<<"ROENTGENIUM"<<endl;
	}
	else if(fl=='s')
	{
		cout<<"SODIUM"<<endl;
		cout<<"SILICON"<<endl;
		cout<<"SULFUR"<<endl;
		cout<<"SCANDIUM"<<endl;
		cout<<"SELENIUM"<<endl;
		cout<<"STRONTIUM"<<endl;
		cout<<"SILVER"<<endl;
		cout<<"SAMARIUM"<<endl;
		cout<<"SEABORGIUM"<<endl;
	}
	else if(fl=='t')
	{
		cout<<"TITANIUM"<<endl;
		cout<<"TECHNETIUM"<<endl;
		cout<<"TIN"<<endl;
		cout<<"TELLURIUM"<<endl;
		cout<<"TERBIUM"<<endl;
		cout<<"THULIUM"<<endl;
		cout<<"TANTALUM"<<endl;
		cout<<"TUNGSTEN"<<endl;
		cout<<"THALLIUM"<<endl;
		cout<<"THORIUM"<<endl;
	}
	else if(fl=='u')
	{
		cout<<"URANIUM"<<endl;
		cout<<"UNUNTRIUM"<<endl;
		cout<<"UNUNPENTIUM"<<endl;
		cout<<"UNUNSEPTIUM"<<endl;
		cout<<"UNUNOCTIUM"<<endl;
	}
	else if(fl=='v')
	{
		cout<<"VANADIUM"<<endl;
	}
	else if(fl=='w')
	{
		cout<<"SORRY!!!THERE IS NO ELEMENT STARTING WITH 'W'"<<endl;
	}
	else if(fl=='x')
	{
		cout<<"XENON"<<endl;
	}
	else if(fl=='y')
	{
		cout<<"YTTRIUM"<<endl;
		cout<<"YTTERBIUM"<<endl;
	}
	else if(fl=='z')
	{
		cout<<"ZINC"<<endl;
		cout<<"ZIRCONIUM"<<endl;
	}
	getch();
	main();
}


