
void FUN_00c07e90(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cNone_0493fbd0) {
    uVar1 = 0;
  }
  else if ((((*pcVar2 != 'c') || (pcVar2[1] != 'N')) || (pcVar2[2] != 'o')) ||
          (((pcVar2[3] != 'n' || (pcVar2[4] != 'e')) ||
           (uVar1 = (uint)(byte)pcVar2[5], pcVar2[5] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cDive_0493fbd8) ||
       (((*pcVar2 == 'c' && (pcVar2[1] == 'D')) &&
        ((pcVar2[2] == 'i' && (((pcVar2[3] == 'v' && (pcVar2[4] == 'e')) && (pcVar2[5] == '\0'))))))
       )) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if (pcVar2 != s_cSurface_0493fbe0) {
        if (*pcVar2 != 'c') {
          return;
        }
        if (pcVar2[1] != 'S') {
          return;
        }
        if (pcVar2[2] != 'u') {
          return;
        }
        if (pcVar2[3] != 'r') {
          return;
        }
        if (pcVar2[4] != 'f') {
          return;
        }
        if (pcVar2[5] != 'a') {
          return;
        }
        if (pcVar2[6] != 'c') {
          return;
        }
        if (pcVar2[7] != 'e') {
          return;
        }
        if (pcVar2[8] != '\0') {
          return;
        }
      }
      uVar1 = 2;
    }
  }
  *param_1 = uVar1;
  return;
}

