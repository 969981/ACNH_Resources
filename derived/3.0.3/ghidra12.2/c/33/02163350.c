
void FUN_02163350(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == &DAT_04a756f0) {
    uVar1 = 0;
  }
  else if ((((*pcVar2 != 'r') || (pcVar2[1] != 'c')) || (pcVar2[2] != 'm')) ||
          (uVar1 = (uint)(byte)pcVar2[3], pcVar2[3] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == &DAT_04a756f4) ||
       (((*pcVar2 == 'r' && (pcVar2[1] == 'c')) && ((pcVar2[2] == 't' && (pcVar2[3] == '\0')))))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == &DAT_04a756f8) ||
         (((*pcVar2 == 's' && (pcVar2[1] == 'k')) && ((pcVar2[2] == 'k' && (pcVar2[3] == '\0'))))))
      {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if ((pcVar2 == &DAT_04a756fc) ||
           ((((*pcVar2 == 'h' && (pcVar2[1] == 'g')) && (pcVar2[2] == 'h')) && (pcVar2[3] == '\0')))
           ) {
          uVar1 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar2 = (char *)param_2[1];
          if ((pcVar2 == &DAT_04a75700) ||
             (((*pcVar2 == 'f' && (pcVar2[1] == 'o')) && ((pcVar2[2] == 'x' && (pcVar2[3] == '\0')))
              ))) {
            uVar1 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar2 = (char *)param_2[1];
            if ((pcVar2 == &DAT_04a75704) ||
               (((*pcVar2 == 'm' && (pcVar2[1] == 'a')) &&
                ((pcVar2[2] == 'n' && (pcVar2[3] == '\0')))))) {
              uVar1 = 5;
            }
            else {
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar2 = (char *)param_2[1];
              if ((pcVar2 == s_TailorNpc_04a75708) ||
                 ((((*pcVar2 == 'T' && (pcVar2[1] == 'a')) && (pcVar2[2] == 'i')) &&
                  (((((pcVar2[3] == 'l' && (pcVar2[4] == 'o')) &&
                     ((pcVar2[5] == 'r' && ((pcVar2[6] == 'N' && (pcVar2[7] == 'p')))))) &&
                    (pcVar2[8] == 'c')) && (pcVar2[9] == '\0')))))) {
                uVar1 = 6;
              }
              else {
                (**(code **)(*param_2 + 0x18))(param_2);
                pcVar2 = (char *)param_2[1];
                if ((pcVar2 == s_CommuneFox_04a75712) ||
                   ((((((*pcVar2 == 'C' && (pcVar2[1] == 'o')) && (pcVar2[2] == 'm')) &&
                      ((pcVar2[3] == 'm' && (pcVar2[4] == 'u')))) &&
                     ((pcVar2[5] == 'n' && ((pcVar2[6] == 'e' && (pcVar2[7] == 'F')))))) &&
                    ((pcVar2[8] == 'o' && ((pcVar2[9] == 'x' && (pcVar2[10] == '\0')))))))) {
                  uVar1 = 7;
                }
                else {
                  (**(code **)(*param_2 + 0x18))(param_2);
                  pcVar2 = (char *)param_2[1];
                  if (pcVar2 != &DAT_04a7571d) {
                    if (*pcVar2 != 'k') {
                      return;
                    }
                    if (pcVar2[1] != 'p') {
                      return;
                    }
                    if (pcVar2[2] != 'g') {
                      return;
                    }
                    if (pcVar2[3] != '\0') {
                      return;
                    }
                  }
                  uVar1 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = uVar1;
  return;
}

