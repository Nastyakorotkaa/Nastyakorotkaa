class Help {  
void helpon ( int what )  
sw itch ( what ) {  
case '1' :  
System . out . println ( " Инcтpyкция if: \ n " ) ;  
System.out . println ( " i f ( ycлoвиe) инструкция ; " );  
System . out . println ( " e l se инструкция ;") ;  
brea k;  
case '2' :  
System.out . print l n ( " Инcтpyкция switch : \n " ) ;  
System . ou t . println ("switch ( выpaжe ниe ) {") ;  
System . out . println (" case константа : " );  
System . out . println (" п оследов ательность инструкций " );  
System . out . print ln (" brea k ; " ) ;  
System . ou t . print ln (" // ... " ) ;  
System . out . println (")") ;  
brea k;  
case '3' :  
System . out . print ln ( " Ци кл f or:\ n" ) ;  
System . out . print ("fo r ( инициaлизaция ; условие ; итерация ) " );  
System . out . println (" инструкция ;") ;  
brea k;  
case ' 4 ' :  
System . out . println ( " Ци кл whi l e:\ n " ) ;  
System.ou t . println ( " while ( ycлoвиe ) инструкция ;") ;  
break;  
case '5' :  
System.ou t . println ( " Ци кл do-while : \n " ) ;  
System . out . print ln ( " do {") ;  
System . out . println (" инструкция ;") ;  
System . out . print ln(") while ( условие ; " ) ;  
break;  
case '6' :  
System . out . println ( "Ин cтpyкция break : \ n " ) ;  
System . out . print ln ( "break; или break метка ; " ) ;  
break;  
case '7' :  
System . out . print l n ( " Инcтpyкция cont inue : \n " ) ;  
System . out . print ln ("cont i nue ; или cont inue ме тка ; " ) ;  
break;  
System.out . print l n ( ) ;  
void showmenu () {  
System . out . print l n ( " Cпpaв кa : " ) ;  
System . out . print l n (" 1. i f " ) ;  
System . out . print l n (" 2. switch" );  
System . out . println (" 3. for" );  
System . out . println (" 4. whi le" );  
System . out . print l n (" 5. do-while " ) ;  
System . out . print l n (" 6. break" );  
System . out . print l n (" 7. cont inue\n" );  
System . out . print ( " Bыбepитe (q - выход ) : " ) ;  
boolean i svalid ( int ch ) {  
i f ( ch < '1' 1 ch > ' 7' & ch != ' q ' ) return fal se;  
else return t rue ;
}
}
