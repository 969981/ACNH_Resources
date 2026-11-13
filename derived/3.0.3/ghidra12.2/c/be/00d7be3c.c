
void FUN_00d7be3c(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cMyself_04952ed8) {
    uVar1 = 0;
  }
  else if ((((((*pcVar2 != 'c') || (pcVar2[1] != 'M')) || (pcVar2[2] != 'y')) ||
            ((pcVar2[3] != 's' || (pcVar2[4] != 'e')))) || (pcVar2[5] != 'l')) ||
          ((pcVar2[6] != 'f' || (uVar1 = (uint)(byte)pcVar2[7], pcVar2[7] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cUserID_04952ee2) ||
       ((((*pcVar2 == 'c' && (pcVar2[1] == 'U')) && (pcVar2[2] == 's')) &&
        (((pcVar2[3] == 'e' && (pcVar2[4] == 'r')) &&
         ((pcVar2[5] == 'I' && ((pcVar2[6] == 'D' && (pcVar2[7] == '\0')))))))))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 == s_cDesignID_04952eec) ||
         (((((*pcVar2 == 'c' && (pcVar2[1] == 'D')) && (pcVar2[2] == 'e')) &&
           (((pcVar2[3] == 's' && (pcVar2[4] == 'i')) &&
            (((pcVar2[5] == 'g' && ((pcVar2[6] == 'n' && (pcVar2[7] == 'I')))) && (pcVar2[8] == 'D')
             ))))) && (pcVar2[9] == '\0')))) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar2 = (char *)param_2[1];
        if ((pcVar2 == s_cMyIDList_04952ef8) ||
           ((((((*pcVar2 == 'c' && (pcVar2[1] == 'M')) && (pcVar2[2] == 'y')) &&
              ((pcVar2[3] == 'I' && (pcVar2[4] == 'D')))) &&
             ((pcVar2[5] == 'L' && ((pcVar2[6] == 'i' && (pcVar2[7] == 's')))))) &&
            ((pcVar2[8] == 't' && (pcVar2[9] == '\0')))))) {
          uVar1 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar2 = (char *)param_2[1];
          if ((pcVar2 == s_cInDream_04952f04) ||
             (((((*pcVar2 == 'c' && (pcVar2[1] == 'I')) && (pcVar2[2] == 'n')) &&
               (((pcVar2[3] == 'D' && (pcVar2[4] == 'r')) &&
                ((pcVar2[5] == 'e' && ((pcVar2[6] == 'a' && (pcVar2[7] == 'm')))))))) &&
              (pcVar2[8] == '\0')))) {
            uVar1 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar2 = (char *)param_2[1];
            if ((pcVar2 == s_cFilter_04952f0f) ||
               ((((*pcVar2 == 'c' && (pcVar2[1] == 'F')) && (pcVar2[2] == 'i')) &&
                (((pcVar2[3] == 'l' && (pcVar2[4] == 't')) &&
                 ((pcVar2[5] == 'e' && ((pcVar2[6] == 'r' && (pcVar2[7] == '\0')))))))))) {
              uVar1 = 5;
            }
            else {
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar2 = (char *)param_2[1];
              if (pcVar2 != s_cWherearenAuthor_04952f19) {
                if (*pcVar2 != 'c') {
                  return;
                }
                if (pcVar2[1] != 'W') {
                  return;
                }
                if (pcVar2[2] != 'h') {
                  return;
                }
                if (pcVar2[3] != 'e') {
                  return;
                }
                if (pcVar2[4] != 'r') {
                  return;
                }
                if (pcVar2[5] != 'e') {
                  return;
                }
                if (pcVar2[6] != 'a') {
                  return;
                }
                if (pcVar2[7] != 'r') {
                  return;
                }
                if (pcVar2[8] != 'e') {
                  return;
                }
                if (pcVar2[9] != 'n') {
                  return;
                }
                if (pcVar2[10] != 'A') {
                  return;
                }
                if (pcVar2[0xb] != 'u') {
                  return;
                }
                if (pcVar2[0xc] != 't') {
                  return;
                }
                if (pcVar2[0xd] != 'h') {
                  return;
                }
                if (pcVar2[0xe] != 'o') {
                  return;
                }
                if (pcVar2[0xf] != 'r') {
                  return;
                }
                if (pcVar2[0x10] != '\0') {
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

