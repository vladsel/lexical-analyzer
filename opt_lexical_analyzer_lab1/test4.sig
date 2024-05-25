PROGRAM lexerTEST4 ; (*error*)
	BEGIN
		LOoP (*error*)
			LOOP
				LOOP
					LOOP
						LOOP 12.5 (*error*)
							CASE FIRST OF
							ENDCASE;
						ENDLOOP
					ENDLOOP;
				endloop; (*error*)
			ENDLOOP;
		ENDLOOP;
	END

PROGRAM LEXERTEST44 ;
    BEGIN
    	CASE 2 OF
		ENDCASE ;
		CASE 3 OF
		ENDCASE ;
		CASE 4 OF
		ENDCASE ;
		(************ ERROR COMMENT ************
		LOOP
    END