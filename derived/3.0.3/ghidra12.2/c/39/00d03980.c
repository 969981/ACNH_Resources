
void FUN_00d03980(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cNormal_0494b110) {
    uVar1 = 0;
  }
  else if ((((((*pcVar2 != 'c') || (pcVar2[1] != 'N')) || (pcVar2[2] != 'o')) ||
            ((pcVar2[3] != 'r' || (pcVar2[4] != 'm')))) || (pcVar2[5] != 'a')) ||
          ((pcVar2[6] != 'l' || (uVar1 = (uint)(byte)pcVar2[7], pcVar2[7] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cAfterCompleteDemo_0494b11a) ||
       ((((((*pcVar2 == 'c' && (pcVar2[1] == 'A')) && (pcVar2[2] == 'f')) &&
          (((pcVar2[3] == 't' && (pcVar2[4] == 'e')) &&
           ((pcVar2[5] == 'r' && ((pcVar2[6] == 'C' && (pcVar2[7] == 'o')))))))) &&
         (((pcVar2[8] == 'm' &&
           (((pcVar2[9] == 'p' && (pcVar2[10] == 'l')) && (pcVar2[0xb] == 'e')))) &&
          (((pcVar2[0xc] == 't' && (pcVar2[0xd] == 'e')) &&
           ((pcVar2[0xe] == 'D' && ((pcVar2[0xf] == 'e' && (pcVar2[0x10] == 'm')))))))))) &&
        ((pcVar2[0x11] == 'o' && (pcVar2[0x12] == '\0')))))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if (pcVar2 != s_cAfterCompleteDemoMncEvent_0494b12f) {
        if (*pcVar2 != 'c') {
          return;
        }
        if (pcVar2[1] != 'A') {
          return;
        }
        if (pcVar2[2] != 'f') {
          return;
        }
        if (pcVar2[3] != 't') {
          return;
        }
        if (pcVar2[4] != 'e') {
          return;
        }
        if (pcVar2[5] != 'r') {
          return;
        }
        if (pcVar2[6] != 'C') {
          return;
        }
        if (pcVar2[7] != 'o') {
          return;
        }
        if (pcVar2[8] != 'm') {
          return;
        }
        if (pcVar2[9] != 'p') {
          return;
        }
        if (pcVar2[10] != 'l') {
          return;
        }
        if (pcVar2[0xb] != 'e') {
          return;
        }
        if (pcVar2[0xc] != 't') {
          return;
        }
        if (pcVar2[0xd] != 'e') {
          return;
        }
        if (pcVar2[0xe] != 'D') {
          return;
        }
        if (pcVar2[0xf] != 'e') {
          return;
        }
        if (pcVar2[0x10] != 'm') {
          return;
        }
        if (pcVar2[0x11] != 'o') {
          return;
        }
        if (pcVar2[0x12] != 'M') {
          return;
        }
        if (pcVar2[0x13] != 'n') {
          return;
        }
        if (pcVar2[0x14] != 'c') {
          return;
        }
        if (pcVar2[0x15] != 'E') {
          return;
        }
        if (pcVar2[0x16] != 'v') {
          return;
        }
        if (pcVar2[0x17] != 'e') {
          return;
        }
        if (pcVar2[0x18] != 'n') {
          return;
        }
        if (pcVar2[0x19] != 't') {
          return;
        }
        if (pcVar2[0x1a] != '\0') {
          return;
        }
      }
      uVar1 = 2;
    }
  }
  *param_1 = uVar1;
  return;
}

