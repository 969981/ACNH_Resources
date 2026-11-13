
void FUN_00d879a8(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cStartSave_04953728) {
    uVar1 = 0;
  }
  else if ((((((*pcVar2 != 'c') || (pcVar2[1] != 'S')) || (pcVar2[2] != 't')) ||
            ((pcVar2[3] != 'a' || (pcVar2[4] != 'r')))) || (pcVar2[5] != 't')) ||
          (((pcVar2[6] != 'S' || (pcVar2[7] != 'a')) ||
           ((pcVar2[8] != 'v' ||
            ((pcVar2[9] != 'e' || (uVar1 = (uint)(byte)pcVar2[10], pcVar2[10] != 0)))))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cEndSave_04953735) ||
       (((((*pcVar2 == 'c' && (pcVar2[1] == 'E')) && (pcVar2[2] == 'n')) &&
         ((pcVar2[3] == 'd' && (pcVar2[4] == 'S')))) &&
        (((pcVar2[5] == 'a' && ((pcVar2[6] == 'v' && (pcVar2[7] == 'e')))) && (pcVar2[8] == '\0'))))
       )) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == s_cVisitorArrive_04953740) ||
         (((((*pcVar2 == 'c' && (pcVar2[1] == 'V')) && (pcVar2[2] == 'i')) &&
           ((((pcVar2[3] == 's' && (pcVar2[4] == 'i')) &&
             ((pcVar2[5] == 't' && ((pcVar2[6] == 'o' && (pcVar2[7] == 'r')))))) &&
            (pcVar2[8] == 'A')))) &&
          (((((pcVar2[9] == 'r' && (pcVar2[10] == 'r')) && (pcVar2[0xb] == 'i')) &&
            ((pcVar2[0xc] == 'v' && (pcVar2[0xd] == 'e')))) && (pcVar2[0xe] == '\0')))))) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if ((pcVar2 == s_cEnterDream_04953751) ||
           ((((*pcVar2 == 'c' && (pcVar2[1] == 'E')) &&
             ((((pcVar2[2] == 'n' &&
                (((pcVar2[3] == 't' && (pcVar2[4] == 'e')) && (pcVar2[5] == 'r')))) &&
               (((pcVar2[6] == 'D' && (pcVar2[7] == 'r')) && (pcVar2[8] == 'e')))) &&
              ((pcVar2[9] == 'a' && (pcVar2[10] == 'm')))))) && (pcVar2[0xb] == '\0')))) {
          uVar1 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar2 = (char *)param_2[1];
          if ((pcVar2 == s_cExitDream_0495375f) ||
             ((((*pcVar2 == 'c' && (pcVar2[1] == 'E')) && (pcVar2[2] == 'x')) &&
              (((pcVar2[3] == 'i' && (pcVar2[4] == 't')) &&
               (((pcVar2[5] == 'D' && ((pcVar2[6] == 'r' && (pcVar2[7] == 'e')))) &&
                ((pcVar2[8] == 'a' && ((pcVar2[9] == 'm' && (pcVar2[10] == '\0')))))))))))) {
            uVar1 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar2 = (char *)param_2[1];
            if (pcVar2 != s_cStartGym_0495376c) {
              if (*pcVar2 != 'c') {
                return;
              }
              if (pcVar2[1] != 'S') {
                return;
              }
              if (pcVar2[2] != 't') {
                return;
              }
              if (pcVar2[3] != 'a') {
                return;
              }
              if (pcVar2[4] != 'r') {
                return;
              }
              if (pcVar2[5] != 't') {
                return;
              }
              if (pcVar2[6] != 'G') {
                return;
              }
              if (pcVar2[7] != 'y') {
                return;
              }
              if (pcVar2[8] != 'm') {
                return;
              }
              if (pcVar2[9] != '\0') {
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

