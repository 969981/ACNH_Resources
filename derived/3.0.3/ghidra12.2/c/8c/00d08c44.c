
void FUN_00d08c44(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cCreare_0494b440) {
    uVar1 = 0;
  }
  else if (((((*pcVar2 != 'c') || (pcVar2[1] != 'C')) || (pcVar2[2] != 'r')) ||
           ((pcVar2[3] != 'e' || (pcVar2[4] != 'a')))) ||
          ((pcVar2[5] != 'r' ||
           ((pcVar2[6] != 'e' || (uVar1 = (uint)(byte)pcVar2[7], pcVar2[7] != 0)))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cErase_0494b44a) ||
       ((((*pcVar2 == 'c' && (pcVar2[1] == 'E')) && (pcVar2[2] == 'r')) &&
        (((pcVar2[3] == 'a' && (pcVar2[4] == 's')) && ((pcVar2[5] == 'e' && (pcVar2[6] == '\0'))))))
       )) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == s_cCreateForNpcOrder_0494b453) ||
         (((((*pcVar2 == 'c' && (pcVar2[1] == 'C')) &&
            (((pcVar2[2] == 'r' &&
              (((pcVar2[3] == 'e' && (pcVar2[4] == 'a')) && (pcVar2[5] == 't')))) &&
             (((pcVar2[6] == 'e' && (pcVar2[7] == 'F')) && (pcVar2[8] == 'o')))))) &&
           ((pcVar2[9] == 'r' && (pcVar2[10] == 'N')))) &&
          (((pcVar2[0xb] == 'p' &&
            ((((pcVar2[0xc] == 'c' && (pcVar2[0xd] == 'O')) && (pcVar2[0xe] == 'r')) &&
             ((pcVar2[0xf] == 'd' && (pcVar2[0x10] == 'e')))))) &&
           ((pcVar2[0x11] == 'r' && (pcVar2[0x12] == '\0')))))))) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if ((pcVar2 == s_cEraseForNpcOrder_0494b468) ||
           ((((*pcVar2 == 'c' && (pcVar2[1] == 'E')) &&
             ((((pcVar2[2] == 'r' &&
                (((pcVar2[3] == 'a' && (pcVar2[4] == 's')) && (pcVar2[5] == 'e')))) &&
               (((pcVar2[6] == 'F' && (pcVar2[7] == 'o')) && (pcVar2[8] == 'r')))) &&
              ((pcVar2[9] == 'N' && (pcVar2[10] == 'p')))))) &&
            ((((pcVar2[0xb] == 'c' &&
               (((pcVar2[0xc] == 'O' && (pcVar2[0xd] == 'r')) && (pcVar2[0xe] == 'd')))) &&
              ((pcVar2[0xf] == 'e' && (pcVar2[0x10] == 'r')))) && (pcVar2[0x11] == '\0')))))) {
          uVar1 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar2 = (char *)param_2[1];
          if ((pcVar2 == s_cEraseAmiibo_0494b47c) ||
             (((((*pcVar2 == 'c' && (pcVar2[1] == 'E')) &&
                ((pcVar2[2] == 'r' &&
                 (((((pcVar2[3] == 'a' && (pcVar2[4] == 's')) && (pcVar2[5] == 'e')) &&
                   ((pcVar2[6] == 'A' && (pcVar2[7] == 'm')))) && (pcVar2[8] == 'i')))))) &&
               ((pcVar2[9] == 'i' && (pcVar2[10] == 'b')))) &&
              ((pcVar2[0xb] == 'o' && (pcVar2[0xc] == '\0')))))) {
            uVar1 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar2 = (char *)param_2[1];
            if (pcVar2 != s_cUnregistAmiibo_0494b48b) {
              if (*pcVar2 != 'c') {
                return;
              }
              if (pcVar2[1] != 'U') {
                return;
              }
              if (pcVar2[2] != 'n') {
                return;
              }
              if (pcVar2[3] != 'r') {
                return;
              }
              if (pcVar2[4] != 'e') {
                return;
              }
              if (pcVar2[5] != 'g') {
                return;
              }
              if (pcVar2[6] != 'i') {
                return;
              }
              if (pcVar2[7] != 's') {
                return;
              }
              if (pcVar2[8] != 't') {
                return;
              }
              if (pcVar2[9] != 'A') {
                return;
              }
              if (pcVar2[10] != 'm') {
                return;
              }
              if (pcVar2[0xb] != 'i') {
                return;
              }
              if (pcVar2[0xc] != 'i') {
                return;
              }
              if (pcVar2[0xd] != 'b') {
                return;
              }
              if (pcVar2[0xe] != 'o') {
                return;
              }
              if (pcVar2[0xf] != '\0') {
                return;
              }
            }
            uVar1 = 5;
          }
        }
      }
    }
  }
  *param_1 = uVar1;
  return;
}

