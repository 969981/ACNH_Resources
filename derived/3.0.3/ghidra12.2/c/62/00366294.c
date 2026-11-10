
undefined8 FUN_00366294(char *param_1,char *param_2)

{
  char cVar1;
  char *local_30;
  char *pcStack_28;
  
  FUN_00365e14(&pcStack_28,&local_30);
  cVar1 = *param_1;
  if ((((*pcStack_28 == cVar1) && (pcStack_28[1] == param_1[1])) && (pcStack_28[2] == param_1[2]))
     && (((pcStack_28[3] == param_1[3] && (*local_30 == *param_2)) &&
         ((local_30[1] == param_2[1] && ((local_30[2] == param_2[2] && (local_30[3] == param_2[3])))
          ))))) {
    return 0;
  }
  if (((pcStack_28[4] == cVar1) &&
      ((((pcStack_28[5] == param_1[1] && (pcStack_28[6] == param_1[2])) &&
        (pcStack_28[7] == param_1[3])) && ((local_30[4] == *param_2 && (local_30[5] == param_2[1])))
       ))) && ((local_30[6] == param_2[2] && (local_30[7] == param_2[3])))) {
    return 1;
  }
  if ((((pcStack_28[8] == cVar1) && (pcStack_28[9] == param_1[1])) && (pcStack_28[10] == param_1[2])
      ) && ((((pcStack_28[0xb] == param_1[3] && (local_30[8] == *param_2)) &&
             (local_30[9] == param_2[1])) &&
            ((local_30[10] == param_2[2] && (local_30[0xb] == param_2[3])))))) {
    return 2;
  }
  if ((((pcStack_28[0xc] == cVar1) &&
       ((pcStack_28[0xd] == param_1[1] && (pcStack_28[0xe] == param_1[2])))) &&
      (pcStack_28[0xf] == param_1[3])) &&
     ((((local_30[0xc] == *param_2 && (local_30[0xd] == param_2[1])) &&
       (local_30[0xe] == param_2[2])) && (local_30[0xf] == param_2[3])))) {
    return 3;
  }
  if ((((pcStack_28[0x10] == cVar1) && (pcStack_28[0x11] == param_1[1])) &&
      ((pcStack_28[0x12] == param_1[2] &&
       ((pcStack_28[0x13] == param_1[3] && (local_30[0x10] == *param_2)))))) &&
     ((local_30[0x11] == param_2[1] &&
      ((local_30[0x12] == param_2[2] && (local_30[0x13] == param_2[3])))))) {
    return 4;
  }
  if ((((pcStack_28[0x14] == cVar1) &&
       ((((pcStack_28[0x15] == param_1[1] && (pcStack_28[0x16] == param_1[2])) &&
         (pcStack_28[0x17] == param_1[3])) &&
        ((local_30[0x14] == *param_2 && (local_30[0x15] == param_2[1])))))) &&
      (local_30[0x16] == param_2[2])) && (local_30[0x17] == param_2[3])) {
    return 5;
  }
  return 7;
}

