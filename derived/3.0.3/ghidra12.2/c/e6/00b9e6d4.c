
void FUN_00b9e6d4(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cNormal_04bb4a40;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cNormal_04bb4a40) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'c') || (pcVar3[1] != 'N')) || (pcVar3[2] != 'o')) ||
          (((pcVar3[3] != 'r' || (pcVar3[4] != 'm')) ||
           ((pcVar3[5] != 'a' ||
            ((pcVar3[6] != 'l' || (uVar2 = (uint)(byte)pcVar3[7], pcVar3[7] != 0)))))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 9) ||
       (((((*pcVar3 == 'c' && (pcVar3[1] == 'H')) && (pcVar3[2] == 'a')) &&
         ((pcVar3[3] == 'p' && (pcVar3[4] == 'p')))) && ((pcVar3[5] == 'y' && (pcVar3[6] == '\0'))))
       )) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x11) ||
         (((*pcVar3 == 'c' && (pcVar3[1] == 'A')) &&
          (((pcVar3[2] == 'n' && (((pcVar3[3] == 'g' && (pcVar3[4] == 'e')) && (pcVar3[5] == 'r'))))
           && (pcVar3[6] == '\0')))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x19) ||
           (((*pcVar3 == 'c' && (pcVar3[1] == 'S')) &&
            ((pcVar3[2] == 'a' && ((pcVar3[3] == 'd' && (pcVar3[4] == '\0')))))))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 == puVar1 + 0x1f) ||
             (((((*pcVar3 == 'c' && (pcVar3[1] == 'W')) && (pcVar3[2] == 'o')) &&
               ((pcVar3[3] == 'r' && (pcVar3[4] == 'r')))) &&
              ((pcVar3[5] == 'y' && (pcVar3[6] == '\0')))))) {
            uVar2 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar3 = (char *)param_2[1];
            if ((pcVar3 == puVar1 + 0x27) ||
               ((((*pcVar3 == 'c' && (pcVar3[1] == 'P')) &&
                 ((pcVar3[2] == 'a' &&
                  ((((pcVar3[3] == 's' && (pcVar3[4] == 's')) && (pcVar3[5] == 'i')) &&
                   ((pcVar3[6] == 'v' && (pcVar3[7] == 'e')))))))) && (pcVar3[8] == '\0')))) {
              uVar2 = 5;
            }
            else {
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar3 = (char *)param_2[1];
              if (pcVar3 != puVar1 + 0x31) {
                if (*pcVar3 != 'c') {
                  return;
                }
                if (pcVar3[1] != 'S') {
                  return;
                }
                if (pcVar3[2] != 'i') {
                  return;
                }
                if (pcVar3[3] != 'c') {
                  return;
                }
                if (pcVar3[4] != 'k') {
                  return;
                }
                if (pcVar3[5] != '\0') {
                  return;
                }
              }
              uVar2 = 6;
            }
          }
        }
      }
    }
  }
  *param_1 = uVar2;
  return;
}

