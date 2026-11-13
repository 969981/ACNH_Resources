
void FUN_00d29820(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cNone_0494cc90) {
    uVar1 = 0;
  }
  else if (((((*pcVar2 != 'c') || (pcVar2[1] != 'N')) || (pcVar2[2] != 'o')) ||
           ((pcVar2[3] != 'n' || (pcVar2[4] != 'e')))) ||
          (uVar1 = (uint)(byte)pcVar2[5], pcVar2[5] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cStart_0494cc98) ||
       ((((*pcVar2 == 'c' && (pcVar2[1] == 'S')) &&
         ((pcVar2[2] == 't' && (((pcVar2[3] == 'a' && (pcVar2[4] == 'r')) && (pcVar2[5] == 't'))))))
        && (pcVar2[6] == '\0')))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == s_cPayOption_0494cca1) ||
         ((((*pcVar2 == 'c' && (pcVar2[1] == 'P')) &&
           (((pcVar2[2] == 'a' && ((pcVar2[3] == 'y' && (pcVar2[4] == 'O')))) && (pcVar2[5] == 'p'))
           )) && ((((pcVar2[6] == 't' && (pcVar2[7] == 'i')) && (pcVar2[8] == 'o')) &&
                  ((pcVar2[9] == 'n' && (pcVar2[10] == '\0')))))))) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if ((pcVar2 == s_cCoffeeType_0494ccae) ||
           (((((*pcVar2 == 'c' && (pcVar2[1] == 'C')) &&
              ((pcVar2[2] == 'o' &&
               ((((pcVar2[3] == 'f' && (pcVar2[4] == 'f')) && (pcVar2[5] == 'e')) &&
                ((pcVar2[6] == 'e' && (pcVar2[7] == 'T')))))))) &&
             ((pcVar2[8] == 'y' && ((pcVar2[9] == 'p' && (pcVar2[10] == 'e')))))) &&
            (pcVar2[0xb] == '\0')))) {
          uVar1 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar2 = (char *)param_2[1];
          if ((pcVar2 == s_cCoffeeSet_0494ccbc) ||
             ((((((*pcVar2 == 'c' && (pcVar2[1] == 'C')) && (pcVar2[2] == 'o')) &&
                (((pcVar2[3] == 'f' && (pcVar2[4] == 'f')) &&
                 ((pcVar2[5] == 'e' && ((pcVar2[6] == 'e' && (pcVar2[7] == 'S')))))))) &&
               (pcVar2[8] == 'e')) && ((pcVar2[9] == 't' && (pcVar2[10] == '\0')))))) {
            uVar1 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar2 = (char *)param_2[1];
            if ((pcVar2 == s_cFinish_0494ccc9) ||
               ((((*pcVar2 == 'c' && (pcVar2[1] == 'F')) && (pcVar2[2] == 'i')) &&
                (((pcVar2[3] == 'n' && (pcVar2[4] == 'i')) &&
                 ((pcVar2[5] == 's' && ((pcVar2[6] == 'h' && (pcVar2[7] == '\0')))))))))) {
              uVar1 = 5;
            }
            else {
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar2 = (char *)param_2[1];
              if (pcVar2 != s_cRelease_0494ccd3) {
                if (*pcVar2 != 'c') {
                  return;
                }
                if (pcVar2[1] != 'R') {
                  return;
                }
                if (pcVar2[2] != 'e') {
                  return;
                }
                if (pcVar2[3] != 'l') {
                  return;
                }
                if (pcVar2[4] != 'e') {
                  return;
                }
                if (pcVar2[5] != 'a') {
                  return;
                }
                if (pcVar2[6] != 's') {
                  return;
                }
                if (pcVar2[7] != 'e') {
                  return;
                }
                if (pcVar2[8] != '\0') {
                  return;
                }
              }
              uVar1 = 6;
            }
          }
        }
      }
    }
  }
  *param_1 = uVar1;
  return;
}

