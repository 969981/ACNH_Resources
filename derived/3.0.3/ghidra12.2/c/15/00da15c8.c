
undefined8 FUN_00da15c8(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_Invalid_04bb8780;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_Invalid_04bb8780) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'I') || (pcVar3[1] != 'n')) || (pcVar3[2] != 'v')) ||
          (((pcVar3[3] != 'a' || (pcVar3[4] != 'l')) ||
           ((pcVar3[5] != 'i' ||
            ((pcVar3[6] != 'd' || (uVar2 = (uint)(byte)pcVar3[7], pcVar3[7] != 0)))))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 8) ||
       ((((*pcVar3 == 'R' && (pcVar3[1] == 'e')) && (pcVar3[2] == 'd')) && (pcVar3[3] == '\0')))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0xc) ||
         (((*pcVar3 == 'P' && (pcVar3[1] == 'i')) &&
          ((pcVar3[2] == 'n' && ((pcVar3[3] == 'k' && (pcVar3[4] == '\0')))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x11) ||
           (((((*pcVar3 == 'Y' && (pcVar3[1] == 'e')) && (pcVar3[2] == 'l')) &&
             ((pcVar3[3] == 'l' && (pcVar3[4] == 'o')))) &&
            ((pcVar3[5] == 'w' && (pcVar3[6] == '\0')))))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 == puVar1 + 0x18) ||
             ((((*pcVar3 == 'P' && (pcVar3[1] == 'u')) &&
               ((pcVar3[2] == 'r' &&
                (((pcVar3[3] == 'p' && (pcVar3[4] == 'l')) && (pcVar3[5] == 'e')))))) &&
              (pcVar3[6] == '\0')))) {
            uVar2 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar3 = (char *)param_2[1];
            if ((pcVar3 == puVar1 + 0x1f) ||
               (((*pcVar3 == 'G' && (pcVar3[1] == 'r')) &&
                (((pcVar3[2] == 'e' && ((pcVar3[3] == 'e' && (pcVar3[4] == 'n')))) &&
                 (pcVar3[5] == '\0')))))) {
              uVar2 = 5;
            }
            else {
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar3 = (char *)param_2[1];
              if ((pcVar3 == puVar1 + 0x25) ||
                 ((((*pcVar3 == 'B' && (pcVar3[1] == 'l')) && (pcVar3[2] == 'u')) &&
                  ((pcVar3[3] == 'e' && (pcVar3[4] == '\0')))))) {
                uVar2 = 6;
              }
              else {
                (**(code **)(*param_2 + 0x18))(param_2);
                pcVar3 = (char *)param_2[1];
                if ((pcVar3 == puVar1 + 0x2a) ||
                   ((((*pcVar3 == 'L' && (pcVar3[1] == 'i')) &&
                     ((pcVar3[2] == 'g' &&
                      (((((pcVar3[3] == 'h' && (pcVar3[4] == 't')) && (pcVar3[5] == 'B')) &&
                        ((pcVar3[6] == 'l' && (pcVar3[7] == 'u')))) && (pcVar3[8] == 'e')))))) &&
                    (pcVar3[9] == '\0')))) {
                  uVar2 = 7;
                }
                else {
                  (**(code **)(*param_2 + 0x18))(param_2);
                  pcVar3 = (char *)param_2[1];
                  if ((pcVar3 != puVar1 + 0x34) &&
                     (((*pcVar3 != 'B' || (pcVar3[1] != 'l')) ||
                      ((pcVar3[2] != 'a' ||
                       (((pcVar3[3] != 'c' || (pcVar3[4] != 'k')) || (pcVar3[5] != '\0')))))))) {
                    return 0;
                  }
                  uVar2 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

