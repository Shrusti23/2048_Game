/*
 * kindOfCalligraphy.cpp
 *
 *  Created on: Dec 13, 2018
 *      Author: Vishal
 */
char small_digits[][5][3] = {    {1,1,1,    //0
                                   1,0,1,
                                   1,0,1,
                                   1,0,1,
                                   1,1,1},

                                  {0,1,0,   //1
                                   1,1,0,
                                   0,1,0,
                                   0,1,0,
                                   1,1,1},

                                  {1,1,0,    //2
                                   0,0,1,
                                   0,1,0,
                                   1,0,0,
                                   1,1,1},

                                  {1,1,1,    //3
                                   0,0,1,
                                   0,1,0,
                                   0,0,1,
                                   1,1,0},

                                  {0,0,1,    //4
                                   0,1,1,
                                   1,0,1,
                                   1,1,1,
                                   0,0,1},

                                  {1,1,1,    //5
                                   1,0,0,
                                   1,1,0,
                                   0,0,1,
                                   1,1,1},

                                  {0,1,1,    //6
                                   1,0,0,
                                   1,1,1,
                                   1,0,1,
                                   0,1,1},

                                  {1,1,1,    //7
                                   0,0,1,
                                   0,1,0,
                                   1,0,0,
                                   1,0,0},

                                  {0,1,0,    //8
                                   1,0,1,
                                   1,1,1,
                                   1,0,1,
                                   0,1,0},

                                  {1,1,0,    //9
                                   1,0,1,
                                   1,1,1,
                                   0,0,1,
                                   1,1,0}};

char big_letters[][7][5] = { {0,1,1,1,0,    //A
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,1,1,1,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1},

                         {1,1,1,1,0,   //B
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,1,1,1,0,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,1,1,1,0},

                         {0,1,1,1,0,    //C
                          1,0,0,0,1,
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,0,0,0,1,
                          0,1,1,1,0},

                         {1,1,1,1,0,    //D
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,1,1,1,0},

                         {1,1,1,1,1,    //E
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,1,1,1,1,
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,1,1,1,1},

                         {1,1,1,1,1,    //F
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,1,1,1,0,
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,0,0,0,0},

                         {0,1,1,1,0,    //G
                          1,0,0,0,1,
                          1,0,0,0,0,
                          1,0,0,1,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          0,1,1,1,1},

                         {1,0,0,0,1,    //H
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,1,1,1,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1},

                         {1,1,1,1,1,    //I
                          0,0,1,0,0,
                          0,0,1,0,0,
                          0,0,1,0,0,
                          0,0,1,0,0,
                          0,0,1,0,0,
                          1,1,1,1,1},

                         {1,1,1,1,1,    //J
                          0,0,0,0,1,
                          0,0,0,0,1,
                          0,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          0,1,1,1,0},

                         {1,0,0,0,1,    //K
                          1,0,0,1,0,
                          1,0,1,0,0,
                          1,1,0,0,0,
                          1,0,1,0,0,
                          1,0,0,1,0,
                          1,0,0,0,1},

                         {1,0,0,0,0,   //L
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,1,1,1,1},

                         {1,0,0,0,1,    //M
                          1,1,0,1,1,
                          1,0,1,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1},

                         {1,0,0,0,1,    //N
                          1,0,0,0,1,
                          1,1,0,0,1,
                          1,0,1,0,1,
                          1,0,0,1,1,
                          1,0,0,0,1,
                          1,0,0,0,1},

                         {0,1,1,1,0,    //O
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          0,1,1,1,0},

                         {1,1,1,1,0,    //P
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,1,1,1,0,
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,0,0,0,0},

                         {0,1,1,0,0,    //Q
                          1,0,0,1,0,
                          1,0,0,1,0,
                          1,0,0,1,0,
                          1,0,1,1,0,
                          1,0,0,1,0,
                          0,1,1,0,1},

                         {1,1,1,1,0,    //R
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,1,1,1,0,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1},

                         {0,1,1,1,0,    //S
                          1,0,0,0,1,
                          1,0,0,0,0,
                          0,1,1,1,0,
                          0,0,0,0,1,
                          1,0,0,0,1,
                          0,1,1,1,0},

                         {1,1,1,1,1,    //T
                          0,0,1,0,0,
                          0,0,1,0,0,
                          0,0,1,0,0,
                          0,0,1,0,0,
                          0,0,1,0,0,
                          0,0,1,0,0},

                         {1,0,0,0,1,    //U
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          0,1,1,1,0},

                         {1,0,0,0,1,   //V
                          1,0,0,0,1,
                          1,0,0,0,1,
                          0,1,0,1,0,
                          0,1,0,1,0,
                          0,1,0,1,0,
                          0,0,1,0,0},

                         {1,0,0,0,1,    //W
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,0,0,1,
                          1,0,1,0,1,
                          1,1,0,1,1,
                          1,0,0,0,1},

                         {1,0,0,0,1,    //X
                          1,0,0,0,1,
                          0,1,0,1,0,
                          0,0,1,0,0,
                          0,1,0,1,0,
                          1,0,0,0,1,
                          1,0,0,0,1},

                         {1,1,1,1,1,    //Y
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,1,1,1,1,
                          1,0,0,0,0,
                          1,0,0,0,0,
                          1,1,1,1,1},

                         {1,1,1,1,1,    //Z
                          0,0,0,0,1,
                          0,0,0,1,0,
                          0,0,1,0,0,
                          0,1,0,0,0,
                          1,0,0,0,0,
                          1,1,1,1,1}};


char big_digits[][7][5] = { {0,1,1,1,0,   //0
                             1,0,0,0,1,
                             1,0,0,1,1,
                             1,0,1,0,1,
                             1,1,0,0,1,
                             1,0,0,0,1,
                             0,1,1,1,0},

                            {0,0,1,0,0,   //1
                             0,1,1,0,0,
                             0,0,1,0,0,
                             0,0,1,0,0,
                             0,0,1,0,0,
                             0,0,1,0,0,
                             1,1,1,1,1},

                            {0,1,1,1,0,    //2
                             1,0,0,0,1,
                             0,0,0,0,1,
                             0,1,1,1,0,
                             1,0,0,0,0,
                             1,0,0,0,0,
                             1,1,1,1,1},

                            {0,1,1,1,0,    //3
                             1,0,0,0,1,
                             0,0,0,0,1,
                             0,0,1,1,0,
                             0,0,0,0,1,
                             1,0,0,0,1,
                             0,1,1,1,0},

                            {0,0,0,1,0,    //4
                             0,0,1,1,0,
                             0,1,0,1,0,
                             1,0,0,1,0,
                             1,1,1,1,1,
                             0,0,0,1,0,
                             0,0,0,1,0},

                            {1,1,1,1,1,    //5
                             1,0,0,0,0,
                             1,0,0,0,0,
                             0,1,1,1,0,
                             0,0,0,0,1,
                             1,0,0,0,1,
                             0,1,1,1,0},

                            {0,1,1,1,0,    //6
                             1,0,0,0,1,
                             1,0,0,0,0,
                             1,1,1,1,0,
                             1,0,0,0,1,
                             1,0,0,0,1,
                             0,1,1,1,0},

                            {1,1,1,1,1,    //7
                             0,0,0,0,1,
                             0,0,0,1,0,
                             0,0,1,0,0,
                             0,1,0,0,0,
                             1,0,0,0,0,
                             1,0,0,0,0},

                            {0,1,1,1,0,    //8
                             1,0,0,0,1,
                             1,0,0,0,1,
                             0,1,1,1,0,
                             1,0,0,0,1,
                             1,0,0,0,1,
                             0,1,1,1,0},

                            {0,1,1,1,0,    //9
                             1,0,0,0,1,
                             1,0,0,0,1,
                             0,1,1,1,1,
                             0,0,0,0,1,
                             1,0,0,0,1,
                             0,1,1,1,0}};
