
void FUN_00c4a084(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cKeepFtr_04942900) {
    uVar1 = 0;
  }
  else if ((((*pcVar2 != 'c') || (pcVar2[1] != 'K')) || (pcVar2[2] != 'e')) ||
          ((((pcVar2[3] != 'e' || (pcVar2[4] != 'p')) ||
            ((pcVar2[5] != 'F' || ((pcVar2[6] != 't' || (pcVar2[7] != 'r')))))) ||
           (uVar1 = (uint)(byte)pcVar2[8], pcVar2[8] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cClearFtr_0494290b) ||
       (((((((*pcVar2 == 'c' && (pcVar2[1] == 'C')) && (pcVar2[2] == 'l')) &&
           ((pcVar2[3] == 'e' && (pcVar2[4] == 'a')))) &&
          ((pcVar2[5] == 'r' && ((pcVar2[6] == 'F' && (pcVar2[7] == 't')))))) && (pcVar2[8] == 'r'))
        && (pcVar2[9] == '\0')))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == s_cExtension_04942917) ||
         ((((((*pcVar2 == 'c' && (pcVar2[1] == 'E')) && (pcVar2[2] == 'x')) &&
            ((pcVar2[3] == 't' && (pcVar2[4] == 'e')))) && (pcVar2[5] == 'n')) &&
          (((pcVar2[6] == 's' && (pcVar2[7] == 'i')) &&
           ((pcVar2[8] == 'o' && ((pcVar2[9] == 'n' && (pcVar2[10] == '\0')))))))))) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if ((pcVar2 == s_cClearGarden_04942924) ||
           ((((((*pcVar2 == 'c' && (pcVar2[1] == 'C')) && (pcVar2[2] == 'l')) &&
              (((pcVar2[3] == 'e' && (pcVar2[4] == 'a')) &&
               (((pcVar2[5] == 'r' && ((pcVar2[6] == 'G' && (pcVar2[7] == 'a')))) &&
                (pcVar2[8] == 'r')))))) &&
             (((pcVar2[9] == 'd' && (pcVar2[10] == 'e')) && (pcVar2[0xb] == 'n')))) &&
            (pcVar2[0xc] == '\0')))) {
          uVar1 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar2 = (char *)param_2[1];
          if ((pcVar2 == s_cRebuild_04942933) ||
             ((((*pcVar2 == 'c' && (pcVar2[1] == 'R')) &&
               ((pcVar2[2] == 'e' && ((pcVar2[3] == 'b' && (pcVar2[4] == 'u')))))) &&
              ((pcVar2[5] == 'i' &&
               (((pcVar2[6] == 'l' && (pcVar2[7] == 'd')) && (pcVar2[8] == '\0')))))))) {
            uVar1 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar2 = (char *)param_2[1];
            if (pcVar2 != s_cChangeRoomSize_0494293e) {
              if (*pcVar2 != 'c') {
                return;
              }
              if (pcVar2[1] != 'C') {
                return;
              }
              if (pcVar2[2] != 'h') {
                return;
              }
              if (pcVar2[3] != 'a') {
                return;
              }
              if (pcVar2[4] != 'n') {
                return;
              }
              if (pcVar2[5] != 'g') {
                return;
              }
              if (pcVar2[6] != 'e') {
                return;
              }
              if (pcVar2[7] != 'R') {
                return;
              }
              if (pcVar2[8] != 'o') {
                return;
              }
              if (pcVar2[9] != 'o') {
                return;
              }
              if (pcVar2[10] != 'm') {
                return;
              }
              if (pcVar2[0xb] != 'S') {
                return;
              }
              if (pcVar2[0xc] != 'i') {
                return;
              }
              if (pcVar2[0xd] != 'z') {
                return;
              }
              if (pcVar2[0xe] != 'e') {
                return;
              }
              if (pcVar2[0xf] != '\0') {
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

