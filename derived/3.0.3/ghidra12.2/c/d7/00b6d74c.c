
void FUN_00b6d74c(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cNpcBirthdayPresent_0493a068) {
    uVar1 = 0;
  }
  else if ((((((*pcVar2 != 'c') || (pcVar2[1] != 'N')) || (pcVar2[2] != 'p')) ||
            (((pcVar2[3] != 'c' || (pcVar2[4] != 'B')) ||
             ((pcVar2[5] != 'i' || ((pcVar2[6] != 'r' || (pcVar2[7] != 't')))))))) ||
           (pcVar2[8] != 'h')) ||
          ((((((pcVar2[9] != 'd' || (pcVar2[10] != 'a')) || (pcVar2[0xb] != 'y')) ||
             ((pcVar2[0xc] != 'P' || (pcVar2[0xd] != 'r')))) || (pcVar2[0xe] != 'e')) ||
           (((pcVar2[0xf] != 's' || (pcVar2[0x10] != 'e')) ||
            ((pcVar2[0x11] != 'n' ||
             ((pcVar2[0x12] != 't' || (uVar1 = (uint)(byte)pcVar2[0x13], pcVar2[0x13] != 0))))))))))
  {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cVisitPStart_0493a07e) ||
       (((((*pcVar2 == 'c' && (pcVar2[1] == 'V')) && (pcVar2[2] == 'i')) &&
         (((pcVar2[3] == 's' && (pcVar2[4] == 'i')) &&
          ((pcVar2[5] == 't' && ((pcVar2[6] == 'P' && (pcVar2[7] == 'S')))))))) &&
        ((pcVar2[8] == 't' &&
         ((((pcVar2[9] == 'a' && (pcVar2[10] == 'r')) && (pcVar2[0xb] == 't')) &&
          (pcVar2[0xc] == '\0')))))))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == s_cVisitPResult_0493a08d) ||
         (((*pcVar2 == 'c' && (pcVar2[1] == 'V')) &&
          ((((pcVar2[2] == 'i' && ((pcVar2[3] == 's' && (pcVar2[4] == 'i')))) && (pcVar2[5] == 't'))
           && (((((pcVar2[6] == 'P' && (pcVar2[7] == 'R')) && (pcVar2[8] == 'e')) &&
                ((pcVar2[9] == 's' && (pcVar2[10] == 'u')))) &&
               ((pcVar2[0xb] == 'l' && ((pcVar2[0xc] == 't' && (pcVar2[0xd] == '\0')))))))))))) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if ((pcVar2 == s_cVisitNPCStart_0493a09d) ||
           ((((*pcVar2 == 'c' && (pcVar2[1] == 'V')) && (pcVar2[2] == 'i')) &&
            (((((pcVar2[3] == 's' && (pcVar2[4] == 'i')) &&
               ((pcVar2[5] == 't' && ((pcVar2[6] == 'N' && (pcVar2[7] == 'P')))))) &&
              ((pcVar2[8] == 'C' &&
               (((pcVar2[9] == 'S' && (pcVar2[10] == 't')) && (pcVar2[0xb] == 'a')))))) &&
             (((pcVar2[0xc] == 'r' && (pcVar2[0xd] == 't')) && (pcVar2[0xe] == '\0')))))))) {
          uVar1 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar2 = (char *)param_2[1];
          if (pcVar2 != s_cVisitNPCResult_0493a0ae) {
            if (*pcVar2 != 'c') {
              return;
            }
            if (pcVar2[1] != 'V') {
              return;
            }
            if (pcVar2[2] != 'i') {
              return;
            }
            if (pcVar2[3] != 's') {
              return;
            }
            if (pcVar2[4] != 'i') {
              return;
            }
            if (pcVar2[5] != 't') {
              return;
            }
            if (pcVar2[6] != 'N') {
              return;
            }
            if (pcVar2[7] != 'P') {
              return;
            }
            if (pcVar2[8] != 'C') {
              return;
            }
            if (pcVar2[9] != 'R') {
              return;
            }
            if (pcVar2[10] != 'e') {
              return;
            }
            if (pcVar2[0xb] != 's') {
              return;
            }
            if (pcVar2[0xc] != 'u') {
              return;
            }
            if (pcVar2[0xd] != 'l') {
              return;
            }
            if (pcVar2[0xe] != 't') {
              return;
            }
            if (pcVar2[0xf] != '\0') {
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

