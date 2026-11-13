
void FUN_00da3004(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cTest_04954d88) {
    uVar1 = 0;
  }
  else if (((((*pcVar2 != 'c') || (pcVar2[1] != 'T')) || (pcVar2[2] != 'e')) ||
           ((pcVar2[3] != 's' || (pcVar2[4] != 't')))) ||
          (uVar1 = (uint)(byte)pcVar2[5], pcVar2[5] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == &DAT_04954d90) ||
       (((*pcVar2 == 'c' && (pcVar2[1] == 'B')) &&
        ((pcVar2[2] == 'a' && ((pcVar2[3] == 'g' && (pcVar2[4] == '\0')))))))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == s_cRestore_04954d97) ||
         ((((((*pcVar2 == 'c' && (pcVar2[1] == 'R')) && (pcVar2[2] == 'e')) &&
            ((pcVar2[3] == 's' && (pcVar2[4] == 't')))) &&
           ((pcVar2[5] == 'o' && ((pcVar2[6] == 'r' && (pcVar2[7] == 'e')))))) &&
          (pcVar2[8] == '\0')))) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if (pcVar2 != s_cFlagClear_04954da2) {
          if (*pcVar2 != 'c') {
            return;
          }
          if (pcVar2[1] != 'F') {
            return;
          }
          if (pcVar2[2] != 'l') {
            return;
          }
          if (pcVar2[3] != 'a') {
            return;
          }
          if (pcVar2[4] != 'g') {
            return;
          }
          if (pcVar2[5] != 'C') {
            return;
          }
          if (pcVar2[6] != 'l') {
            return;
          }
          if (pcVar2[7] != 'e') {
            return;
          }
          if (pcVar2[8] != 'a') {
            return;
          }
          if (pcVar2[9] != 'r') {
            return;
          }
          if (pcVar2[10] != '\0') {
            return;
          }
        }
        uVar1 = 3;
      }
    }
  }
  *param_1 = uVar1;
  return;
}

