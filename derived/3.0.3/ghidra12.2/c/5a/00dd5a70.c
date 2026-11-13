
undefined8 FUN_00dd5a70(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cNone_04bb8ad0;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cNone_04bb8ad0) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'c') || (pcVar3[1] != 'N')) || (pcVar3[2] != 'o')) ||
          (((pcVar3[3] != 'n' || (pcVar3[4] != 'e')) ||
           (uVar2 = (uint)(byte)pcVar3[5], pcVar3[5] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 8) ||
       ((((*pcVar3 == 'c' && (pcVar3[1] == 'S')) &&
         ((pcVar3[2] == 'e' && (((pcVar3[3] == 'l' && (pcVar3[4] == 'e')) && (pcVar3[5] == 'c'))))))
        && (((pcVar3[6] == 't' && (pcVar3[7] == 'D')) && ((pcVar3[8] == 'B' && (pcVar3[9] == '\0')))
            ))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x14) ||
         (((*pcVar3 == 'c' && (pcVar3[1] == 'R')) &&
          ((pcVar3[2] == 'e' &&
           ((((pcVar3[3] == 'w' && (pcVar3[4] == 'a')) && (pcVar3[5] == 'r')) &&
            ((pcVar3[6] == 'd' && (pcVar3[7] == '\0')))))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x1e) ||
           (((*pcVar3 == 'c' && (pcVar3[1] == 'F')) &&
            (((pcVar3[2] == 'r' &&
              (((pcVar3[3] == 'o' && (pcVar3[4] == 'm')) && (pcVar3[5] == 'U')))) &&
             ((pcVar3[6] == 'I' && (pcVar3[7] == '\0')))))))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 == puVar1 + 0x28) ||
             ((((((*pcVar3 == 'c' && (pcVar3[1] == 'F')) &&
                 ((pcVar3[2] == 'r' &&
                  (((pcVar3[3] == 'o' && (pcVar3[4] == 'm')) && (pcVar3[5] == 'U')))))) &&
                ((pcVar3[6] == 'I' && (pcVar3[7] == 'B')))) && (pcVar3[8] == 'r')) &&
              (((pcVar3[9] == 'o' && (pcVar3[10] == 'm')) &&
               ((pcVar3[0xb] == 'i' &&
                (((pcVar3[0xc] == 'd' && (pcVar3[0xd] == 'e')) && (pcVar3[0xe] == '\0')))))))))) {
            uVar2 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar3 = (char *)param_2[1];
            if ((pcVar3 != puVar1 + 0x39) &&
               (((*pcVar3 != 'c' || (pcVar3[1] != 'F')) ||
                (((pcVar3[2] != 'r' || ((pcVar3[3] != 'o' || (pcVar3[4] != 'm')))) ||
                 (((pcVar3[5] != 'U' ||
                   ((((((pcVar3[6] != 'I' || (pcVar3[7] != 'C')) || (pcVar3[8] != 'a')) ||
                      ((pcVar3[9] != 't' || (pcVar3[10] != 'a')))) || (pcVar3[0xb] != 'l')) ||
                    (((pcVar3[0xc] != 'o' || (pcVar3[0xd] != 'g')) ||
                     ((pcVar3[0xe] != 'G' ||
                      (((pcVar3[0xf] != 'i' || (pcVar3[0x10] != 'f')) || (pcVar3[0x11] != 't')))))))
                    ))) || (pcVar3[0x12] != '\0')))))))) {
              return 0;
            }
            uVar2 = 5;
          }
        }
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

