
void FUN_00c756b0(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cCliff_049441b8) {
    uVar1 = 0;
  }
  else if ((((*pcVar2 != 'c') || (pcVar2[1] != 'C')) || (pcVar2[2] != 'l')) ||
          (((pcVar2[3] != 'i' || (pcVar2[4] != 'f')) ||
           ((pcVar2[5] != 'f' || (uVar1 = (uint)(byte)pcVar2[6], pcVar2[6] != 0)))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cRiver_049441c1) ||
       ((((*pcVar2 == 'c' && (pcVar2[1] == 'R')) &&
         ((pcVar2[2] == 'i' && (((pcVar2[3] == 'v' && (pcVar2[4] == 'e')) && (pcVar2[5] == 'r'))))))
        && (pcVar2[6] == '\0')))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == s_cGround_049441ca) ||
         (((((*pcVar2 == 'c' && (pcVar2[1] == 'G')) &&
            ((pcVar2[2] == 'r' && ((pcVar2[3] == 'o' && (pcVar2[4] == 'u')))))) &&
           (pcVar2[5] == 'n')) && ((pcVar2[6] == 'd' && (pcVar2[7] == '\0')))))) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if ((pcVar2 == &DAT_049441d4) ||
           ((((*pcVar2 == 'c' && (pcVar2[1] == 'O')) && (pcVar2[2] == 'n')) && (pcVar2[3] == '\0')))
           ) {
          uVar1 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar2 = (char *)param_2[1];
          if (pcVar2 != &DAT_049441da) {
            if (*pcVar2 != 'c') {
              return;
            }
            if (pcVar2[1] != 'O') {
              return;
            }
            if (pcVar2[2] != 'f') {
              return;
            }
            if (pcVar2[3] != 'f') {
              return;
            }
            if (pcVar2[4] != '\0') {
              return;
            }
          }
          uVar1 = 4;
        }
      }
    }
  }
  *param_1 = uVar1;
  return;
}

