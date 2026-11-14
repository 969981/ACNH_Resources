
undefined8 FUN_01a8ab48(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bc0220;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_DAT_04bc0220) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'A') || (pcVar3[1] != 'l')) || (pcVar3[2] != 'l')) ||
          (uVar2 = (uint)(byte)pcVar3[3], pcVar3[3] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 4) ||
       ((((*pcVar3 == 'F' && (pcVar3[1] == 'r')) &&
         ((pcVar3[2] == 'o' && ((pcVar3[3] == 'n' && (pcVar3[4] == 't')))))) && (pcVar3[5] == '\0'))
       )) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 10) ||
         ((((*pcVar3 == 'B' && (pcVar3[1] == 'a')) && (pcVar3[2] == 'c')) &&
          ((pcVar3[3] == 'k' && (pcVar3[4] == '\0')))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0xf) ||
           ((((*pcVar3 == 'R' && (pcVar3[1] == 'i')) &&
             ((pcVar3[2] == 'g' &&
              (((pcVar3[3] == 'h' && (pcVar3[4] == 't')) && (pcVar3[5] == 'O')))))) &&
            (((pcVar3[6] == 'f' && (pcVar3[7] == 'A')) &&
             ((pcVar3[8] == 'l' && ((pcVar3[9] == 'l' && (pcVar3[10] == '\0')))))))))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 == puVar1 + 0x1a) ||
             ((((((*pcVar3 == 'L' && (pcVar3[1] == 'e')) && (pcVar3[2] == 'f')) &&
                ((pcVar3[3] == 't' && (pcVar3[4] == 'O')))) && (pcVar3[5] == 'f')) &&
              (((pcVar3[6] == 'A' && (pcVar3[7] == 'l')) &&
               ((pcVar3[8] == 'l' && (pcVar3[9] == '\0')))))))) {
            uVar2 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar3 = (char *)param_2[1];
            if ((pcVar3 == puVar1 + 0x24) ||
               ((((((*pcVar3 == 'R' && (pcVar3[1] == 'i')) && (pcVar3[2] == 'g')) &&
                  ((pcVar3[3] == 'h' && (pcVar3[4] == 't')))) &&
                 (((pcVar3[5] == 'O' && ((pcVar3[6] == 'f' && (pcVar3[7] == 'F')))) &&
                  ((pcVar3[8] == 'r' &&
                   (((pcVar3[9] == 'o' && (pcVar3[10] == 'n')) && (pcVar3[0xb] == 't')))))))) &&
                (pcVar3[0xc] == '\0')))) {
              uVar2 = 5;
            }
            else {
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar3 = (char *)param_2[1];
              if ((pcVar3 == puVar1 + 0x31) ||
                 (((((*pcVar3 == 'L' && (pcVar3[1] == 'e')) &&
                    ((pcVar3[2] == 'f' && ((pcVar3[3] == 't' && (pcVar3[4] == 'O')))))) &&
                   (pcVar3[5] == 'f')) &&
                  (((((pcVar3[6] == 'F' && (pcVar3[7] == 'r')) && (pcVar3[8] == 'o')) &&
                    ((pcVar3[9] == 'n' && (pcVar3[10] == 't')))) && (pcVar3[0xb] == '\0')))))) {
                uVar2 = 6;
              }
              else {
                (**(code **)(*param_2 + 0x18))(param_2);
                pcVar3 = (char *)param_2[1];
                if ((pcVar3 == puVar1 + 0x3d) ||
                   (((*pcVar3 == 'N' && (pcVar3[1] == 'o')) &&
                    (((pcVar3[2] == 't' &&
                      (((pcVar3[3] == 'B' && (pcVar3[4] == 'a')) && (pcVar3[5] == 'c')))) &&
                     ((pcVar3[6] == 'k' && (pcVar3[7] == '\0')))))))) {
                  uVar2 = 7;
                }
                else {
                  (**(code **)(*param_2 + 0x18))(param_2);
                  pcVar3 = (char *)param_2[1];
                  if ((pcVar3 != puVar1 + 0x45) &&
                     (((*pcVar3 != 'E' || (pcVar3[1] != 'd')) ||
                      ((pcVar3[2] != 'g' || ((pcVar3[3] != 'e' || (pcVar3[4] != '\0')))))))) {
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

