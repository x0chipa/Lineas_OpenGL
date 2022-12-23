#include <GL/glut.h>
float color(float color){
	return color/255;
}
	void inicializa(void){
		glClearColor(color(56),color(86),color(187),0.0); 	
		glMatrixMode(GL_PROJECTION);
		gluOrtho2D(0,400,0,400);
	}
		
void pinta(void){
	int i,j,band,x;
	float r,g,b;
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(15); //GROSOR*******
	
	
	//algoritmo nubes
	i=150,j=300	;
	r=color(225),g=color(225),b=color(225);
	for(;j<375;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+150,j);
	}
	i=175,j=375;
	for(;j<390;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+50,j);
	}
	i=300,j=310;
	for(;j<350;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+10,j);
	}
	i=125,j=285;
	for(;j<350;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+100,j);
	}
	i=0,j=255;
	for(;j<325;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+35,j);
	}
	i=35,j=290;
	for(;j<315;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+25,j);
	}
	glEnd();
	
	//algoritmo patas
	i=120,j=15	;
	r=color(61),g=color(48),b=color(41);
	for(;j<45;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+125,j);
	}
	glEnd();
	
	
	
	//algoritmo pesuñas
	i=125,j=0;
	r=color(61),g=color(48),b=color(41);
	for(;j<15;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+55,j);
	}
	i=190,j=0;
	for(;j<15;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+55,j);
	}
	glEnd();
	
	//Detalles de las patas :v
	i=127,j=4;
	r=color(66),g=color(53),b=color(44);
	for(;j<12;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+16,j);
	}
	i=154,j=4;
	for(;j<12;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+16,j);
	}
	i=194,j=4;
	for(;j<12;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+16,j);
	}
	i=220,j=4;
	for(;j<12;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+16,j);
	}
	glEnd();
	
	//algoritmo rodillas traseras
	i=123,j=17;
	r=color(161),g=color(142),b=color(133);
	i=215,j=16;
	for(;j<49;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+27,j);
	}
	glEnd();
	
	//algoritmo cuerpo
	i=108,j=28,band=0;
	r=color(200),g=color(198),b=color(148);
	for(;j<120;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+61,j);
		if(band==0){
			band=1;
			r=color(190),g=color(160),b=color(138);
		}else{
			r=color(200),g=color(198),b=color(148);
			band=0;
		}
	}
	glEnd();
	
	//algoritmo cuerpo2
	i=169,j=28,band=0;
	r=color(153),g=color(128),b=color(116);
	for(;j<120;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+40,j);
		if(band==0){
			band=1;
			r=color(148),g=color(120),b=color(109);
		}else{
			r=color(153),g=color(128),b=color(116);
			band=0;
		}
	}
	glEnd();
	
	//algoritmo cuerpo3
	i=208,j=28,band=0;
	r=color(148),g=color(120),b=color(109);
	for(;j<115;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+27,j);
		if(band==0){
			band=1;
			r=color(148),g=color(120),b=color(109);
		}else{
			r=color(153),g=color(128),b=color(116);
			band=0;
		}
	}
	glEnd();
	
	
	
	//algoritmo cola
	i=235,j=65,x=0;
	r=color(142),g=color(116),b=color(105);
	for(;j<80;j+=5){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+x,j);
		x+=4;
	}
	for(;j<105;j+=5){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+x,j);
		if(j%2==0){
			x-=4;
		}
		
		
	}
	glEnd();
	
	//algoritmo contorno
	
	r=color(79),g=color(65),b=color(63);
	glBegin(GL_LINE_STRIP);
	glColor3f(r,g,b);
	glVertex2i(210,118);
	glVertex2i(233,118);
	glVertex2i(233,28);
	glVertex2i(210,28);
	glVertex2i(170,28);
	glVertex2i(210,28);
	glVertex2i(210,123);
	glVertex2i(170,123);
	glEnd();
	
	r=color(172),g=color(147),b=color(140);
	glBegin(GL_LINE_LOOP);
	glColor3f(r,g,b);
	glVertex2i(108,28);
	glVertex2i(170,28);
	glVertex2i(170,123);
	glVertex2i(108,123);
	glEnd();
	
	
	//algoritmo orejas
	r=color(223),g=color(200),b=color(185);
	glBegin(GL_LINE_LOOP);
	
	glColor3f(r,g,b);
	glVertex2i(91,137);
	glVertex2i(90+87,137);
	glVertex2i(90+94,129);
	glEnd();
	i=95,j=129;
	r=color(127),g=color(102),b=color(90);
	for(;j<134;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+85,j);
		i-=3;
	}
	glEnd();
	r=color(55),g=color(38),b=color(29);
	glLineWidth(5); //GROSOR*******
	glBegin(GL_LINES);
	glColor3f(r,g,b);
	glVertex2i(160,124);
	glVertex2i(184,124);
	glEnd();
	
	//algoritmo cabeza3 lateral abajo
	i=100 ,band=0;	
	x=40;
	glLineWidth(15); //GROSOR*******
	r=color(165),g=color(151),b=color(116);
	glLineWidth(5); //GROSOR*******
	for(j=50;j<90;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+x,j);
		if(band==0){
			band=1;
			r=color(207),g=color(196),b=color(170);
		}else{
			r=color(142),g=color(131),b=color(105);
			band=0;
		}
		x++;
		i++;
	}
	glEnd();
	//algoritmo cabeza3 laterl arriba
	i=113 ,band=0;	
	x=50;
	r=color(165),g=color(151),b=color(116);
	glLineWidth(5); //GROSOR*******
	for(j=90;j<135;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+x-1,j);
		if(band==0){
			band=1;
			r=color(207),g=color(196),b=color(170);
		}else{
			r=color(142),g=color(131),b=color(105);
			band=0;
		}
		x-=3;
		i+=3;
	}
	//algoritmo cabeza boca
	i=100 ,band=0;
	r=color(165),g=color(151),b=color(116);
	glLineWidth(5); //GROSOR*******
	for(j=50;j<80;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+35,j);
		if(band==0){
			band=1;
			r=color(207),g=color(196),b=color(170);
		}else{
			r=color(142),g=color(131),b=color(105);
			band=0;
		}
		i-=3;
	}
	r=color(16),g=color(11),b=color(11);
	
	glEnd();
	//algoritmo cabeza2 frente
	i=75 ,band=0;
	r=color(165),g=color(151),b=color(116);
	glLineWidth(5); //GROSOR*******
	for(j=80;j<140;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+35,j);
		if(band==0){
			band=1;
			r=color(207),g=color(196),b=color(170);
		}else{
			r=color(142),g=color(131),b=color(105);
			band=0;
		}
		i+=3;
	}
	glEnd();
	
	
	//algoritmo contorno cara
	r=color(117),g=color(94),b=color(80);
	glColor3f(r,g,b);
	x=5;
	
	glBegin(GL_LINE_LOOP);
	i=75, j=79;
	glVertex2i(75,79);
	glVertex2i(100,48);		
	glVertex2i(140,48);		
	glVertex2i(160,90);		
	glVertex2i(160,138);
	glVertex2i(113,138);
	glEnd();
	r=color(206),g=color(184),b=color(166);
	glColor3f(r,g,b);
	glLineWidth(5); //GROSOR*******
	glBegin(GL_LINE_STRIP);
	glVertex2i(157,140);
	glVertex2i(112,82);
	glVertex2i(138,50);
	glEnd();
	
	
	glBegin(GL_LINES);
	
	glVertex2i(75,82);
	glVertex2i(112,82);
	glEnd();
	
	
	//algoritmo barba :v
	i=123,j=12;
	r=color(123),g=color(105),b=color(88);
	for(;j<22;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+20,j);
	}
	glEnd();
	
	
	//algoritmo ojo
	i=137,j=110;
	r=color(225),g=color(225),b=color(225);
	for(;j<120;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+20,j);
		
	}
	i=141,j=113;
	r=color(0),g=color(0),b=color(0);
	for(;j<116;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+10,j);
	}
	glEnd();
	
	//algoritmo cuernos
	i=118,j=140;
	r=color(64),g=color(53),b=color(48);
	for(;j<174;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+13,j);
		
	}
	i=148,j=140;
	for(;j<174;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+13,j);
		
	}
	glEnd();
	
	//algoritmo detalles de los cuernos
	r=color(50),g=color(33),b=color(26);
	glBegin(GL_LINE_STRIP);
	glColor3f(r,g,b);
	glVertex2i(116,135);
	glVertex2i(116,177);
	glVertex2i(134,177);
	glVertex2i(134,139);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(r,g,b);
	glVertex2i(146,137);
	glVertex2i(146,177);
	glVertex2i(164,177);
	glVertex2i(164,135);
	glEnd();
	glPointSize(5);
	glBegin(GL_POINTS);
	
	glVertex2i(115,177);
	glVertex2i(163,177);
	glEnd();
	
	//algoritmo rodillas
	i=109,j=40;
	r=color(125),g=color(142),b=color(133);
	for(;j<50;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+20,j);
	}
	
	i=150,j=16;
	for(;j<22;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+30,j);
	}	
	glEnd();
	
	
	
	//algoritmo ojo
	glLineWidth(15); //GROSOR*******
	i=137,j=110;
	r=color(225),g=color(225),b=color(225);
	for(;j<120;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+20,j);
		
	}
	i=141,j=113;
	r=color(0),g=color(0),b=color(0);
	for(;j<116;j+=4){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+10,j);
	}
	glEnd();
	
	//algoritmo nariz
	i=80,j=79,x=25;
	r=color(47),g=color(34),b=color(28);
	for(;j>70;j-=5){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+x,j);
		i+=5;
	}
	i=95,j=70,x=15;
	for(;j>55;j-=5){
		glBegin(GL_LINES);
		glColor3f(r,g,b);
		glVertex2i(i,j);
		glVertex2i(i+x,j);
		i+=5;
	}
	glEnd();
	glFlush();
}
		
int main (int argc, char **argv) {
	glutInitWindowSize(400,400);
	glutInit (&argc, argv);
	glutCreateWindow("Cabra con lineas");
	inicializa();
	glutDisplayFunc(pinta);
	glutMainLoop();
	return 0;
}
