class Help {  
	void helpon ( int what )  {
		switch ( what ) {  
			case '1':  
				System.out.println(" Инcтpyкция if:\n ");  
				System.out.println(" i f ( ycлoвиe) инструкция ;");  
				System.out.println("else инструкция;");  
				break;  
			case '2':  
			System.out.println("Инcтpyкция switch : \n " );  
			System.out.println("switch ( выpaжe ниe ) {");  
			System.out.println(" case константа : " );  
			System.out.println(" последовательность инструкций " );  
			System.out.println(" break; ");  
			System.out.println(" // ... " );  
			System.out.println(")");  
			break;  
			case '3' :  
			System.out.println( " Цикл for:\n");  
			System.out.print("for(инициaлизaция ; условие ; итерация ) " );  
			System.out.println(" инструкция ;");  
			break;  
			case '4':  
			System.out.println(" Ци кл whi l e:\n " );  
			System.out.println(" while ( ycлoвиe ) инструкция ;");  
			break;  
			case '5' :  
			System.out.println( " Цикл do-while : \n " ) ;  
			System.out.println( " do {");  
			System.out.println(" инструкция ;");  
			System.out.println(") while ( условие ; ");  
			break;  
			case '6' :  
			System.out.println( "Инcтpyкция break : \n " );  
			System.out.println( "break; или break метка ; " );  
			break;  
			case '7' :  
			System.out.println( " Инcтpyкция cont inue : \n " );  
			System.out.println("cont i nue ; или cont inue ме тка ; ");  
			break;
		}	
			System.out.println();
}	
	void showmenu () {  
		System.out.println(" Cпpaв кa : ");  
		System.out.println(" 1. i f ");  
		System.out.println(" 2. switch");  
		System.out.println(" 3. for");  
		System.out.println(" 4. while");  
		System.out.println(" 5. do-while ");  
		System.out.println(" 6. break" );  
		System.out.println(" 7. cont inue\n" );  
		System.out.print( " Bыбepитe (q - выход ) : " );  
	}
	boolean isvalid ( int ch ) {  
		if(ch < '1' | ch > '7'&ch != 'q') return false;  
		else return true ;
	}
}
