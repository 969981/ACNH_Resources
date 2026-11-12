
undefined8 FUN_0095e4b0(undefined8 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  if (*param_2 == 0) {
    return 0;
  }
  bVar1 = false;
  iVar2 = 0;
  do {
    pcVar3 = *(char **)(*(long *)(param_2 + 2) + (long)iVar2 * 0x118 + 8);
    if (*pcVar3 == 'M') {
      if (((((((pcVar3[1] == 'o') && (pcVar3[2] == 'd')) && (pcVar3[3] == 'e')) &&
            (((pcVar3[4] == 'l' && (pcVar3[5] == '/')) &&
             ((pcVar3[6] == 'R' && ((pcVar3[7] == 'o' && (pcVar3[8] == 'o')))))))) &&
           (pcVar3[9] == 'm')) &&
          (((((pcVar3[10] == 'T' && (pcVar3[0xb] == 'e')) && (pcVar3[0xc] == 'x')) &&
            ((pcVar3[0xd] == 'F' && (pcVar3[0xe] == 'l')))) && (pcVar3[0xf] == 'o')))) &&
         ((pcVar3[0x10] == 'o' && (pcVar3[0x11] == 'r')))) {
        bVar1 = true;
      }
      else if (((((pcVar3[1] == 'o') && (pcVar3[2] == 'd')) && (pcVar3[3] == 'e')) &&
               (((pcVar3[4] == 'l' && (pcVar3[5] == '/')) &&
                ((pcVar3[6] == 'R' && ((pcVar3[7] == 'o' && (pcVar3[8] == 'o')))))))) &&
              (((pcVar3[9] == 'm' &&
                ((((pcVar3[10] == 'S' && (pcVar3[0xb] == 'p')) && (pcVar3[0xc] == 'F')) &&
                 ((pcVar3[0xd] == 'l' && (pcVar3[0xe] == 'o')))))) && (pcVar3[0xf] == 'o')))) {
        bVar1 = (bool)(pcVar3[0x10] == 'r' | bVar1);
      }
    }
    iVar2 = iVar2 + 1;
  } while (*param_2 != iVar2);
  if (bVar1) {
    FUN_0095e6c0(param_1,0);
    return 1;
  }
  return 0;
}

