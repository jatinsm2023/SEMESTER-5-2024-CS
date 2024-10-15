 if($2=='^'){
                    printf("\tR[%d] = pwr(",reglocation);
                    // if ARG is ID
                    if($3->whattype == 0){
                        printf("R[%d],", $3->regidx);
                    }
                    // if ARG is NUM
                    else if($3->whattype == 1){
                        printf("%d,", $3->value);
                    }
                    // if ARG is EXPR
                    else if($3->whattype == 2){
                        printf("R[%d],", $3->regidx);
                    }
                    // if ARG is ID
                    if($4->whattype == 0){
                        printf("R[%d]);\n", $4->regidx);
                    }
                    else if($4->whattype == 1){
                        printf("%d);\n", $4->value);
                    }
                    else if($4->whattype == 2){
                        printf("R[%d]);\n", $4->regidx);
                    }
                } else{
                    printf("\tR[%d] = ", reglocation);
                    // if ARG is ID
                    if($3->whattype == 0){
                        printf("R[%d] %c ", $3->regidx, $2);
                    }
                    // if ARG is NUM
                    else if($3->whattype == 1){
                        printf("%d %c ", $3->value, $2);
                    }
                    // if ARG is EXPR
                    else if($3->whattype == 2){
                        printf("R[%d] %c ", $3->regidx, $2);
                    }
                    // if ARG is ID
                    if($4->whattype == 0){
                        printf("R[%d];\n", $4->regidx);
                    }
                    // if ARG is NUM
                    else if($4->whattype == 1){
                        printf("%d;\n", $4->value);
                    }
                    // if ARG is EXPR
                    else if($4->whattype == 2){
                        printf("R[%d];\n", $4->regidx);
                    }
                }
                if($3->whattype==2 && $4->whattype==2){
                    $$ = reglocation;
                    reglocation++;
                }
                else{
                    $$ = reglocation;
                }