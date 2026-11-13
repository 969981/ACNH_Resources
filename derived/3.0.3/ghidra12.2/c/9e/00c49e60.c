
void FUN_00c49e60(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cNormal_049428c0) {
    uVar1 = 0;
  }
  else if ((((*pcVar2 != 'c') || (pcVar2[1] != 'N')) || (pcVar2[2] != 'o')) ||
          (((pcVar2[3] != 'r' || (pcVar2[4] != 'm')) ||
           ((pcVar2[5] != 'a' ||
            ((pcVar2[6] != 'l' || (uVar1 = (uint)(byte)pcVar2[7], pcVar2[7] != 0)))))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cShareHouseEnd_049428ca) ||
       ((((((((*pcVar2 == 'c' && (pcVar2[1] == 'S')) && (pcVar2[2] == 'h')) &&
            ((pcVar2[3] == 'a' && (pcVar2[4] == 'r')))) &&
           ((pcVar2[5] == 'e' && ((pcVar2[6] == 'H' && (pcVar2[7] == 'o')))))) && (pcVar2[8] == 'u')
          ) && (((pcVar2[9] == 's' && (pcVar2[10] == 'e')) && (pcVar2[0xb] == 'E')))) &&
        (((pcVar2[0xc] == 'n' && (pcVar2[0xd] == 'd')) && (pcVar2[0xe] == '\0')))))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if (pcVar2 != s_cApproach_049428db) {
        if (*pcVar2 != 'c') {
          return;
        }
        if (pcVar2[1] != 'A') {
          return;
        }
        if (pcVar2[2] != 'p') {
          return;
        }
        if (pcVar2[3] != 'p') {
          return;
        }
        if (pcVar2[4] != 'r') {
          return;
        }
        if (pcVar2[5] != 'o') {
          return;
        }
        if (pcVar2[6] != 'a') {
          return;
        }
        if (pcVar2[7] != 'c') {
          return;
        }
        if (pcVar2[8] != 'h') {
          return;
        }
        if (pcVar2[9] != '\0') {
          return;
        }
      }
      uVar1 = 2;
    }
  }
  *param_1 = uVar1;
  return;
}

