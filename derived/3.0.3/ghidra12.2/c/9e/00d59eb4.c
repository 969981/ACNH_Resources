
void FUN_00d59eb4(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cDegit_0494fea8) {
    uVar1 = 0;
  }
  else if (((((*pcVar2 != 'c') || (pcVar2[1] != 'D')) || (pcVar2[2] != 'e')) ||
           ((pcVar2[3] != 'g' || (pcVar2[4] != 'i')))) ||
          ((pcVar2[5] != 't' || (uVar1 = (uint)(byte)pcVar2[6], pcVar2[6] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cMoney_0494feb0) ||
       ((((*pcVar2 == 'c' && (pcVar2[1] == 'M')) &&
         ((pcVar2[2] == 'o' && (((pcVar2[3] == 'n' && (pcVar2[4] == 'e')) && (pcVar2[5] == 'y'))))))
        && (pcVar2[6] == '\0')))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == s_cHour_0494feb8) ||
         ((((*pcVar2 == 'c' && (pcVar2[1] == 'H')) &&
           ((pcVar2[2] == 'o' && ((pcVar2[3] == 'u' && (pcVar2[4] == 'r')))))) &&
          (pcVar2[5] == '\0')))) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if (pcVar2 != s_cMinute_0494febf) {
          if (*pcVar2 != 'c') {
            return;
          }
          if (pcVar2[1] != 'M') {
            return;
          }
          if (pcVar2[2] != 'i') {
            return;
          }
          if (pcVar2[3] != 'n') {
            return;
          }
          if (pcVar2[4] != 'u') {
            return;
          }
          if (pcVar2[5] != 't') {
            return;
          }
          if (pcVar2[6] != 'e') {
            return;
          }
          if (pcVar2[7] != '\0') {
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

