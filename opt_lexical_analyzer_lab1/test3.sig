PROGRAM LEXERTEST3;
	BEGIN <> 	(*must be error*)
		CASE COUNT OF COUNT + 50::: (*must be error*)
			/
				CASE COUNT1 OF COUNT1 + 25:: 	(*must be error*)
				/
					case COUNT2 OF 222 MOD COUNT2:  		(*must be error*)
					/
						CASE COUNT3 OF ENDCASE;
					\
					ENDCASE;
				\
				ENDCASE;
			\
		ENDCASE;
	END. 	(*must be error*)
