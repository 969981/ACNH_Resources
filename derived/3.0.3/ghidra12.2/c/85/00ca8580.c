
undefined8 FUN_00ca8580(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cDefault_04bb79f0;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cDefault_04bb79f0) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'c') || (pcVar3[1] != 'D')) || (pcVar3[2] != 'e')) ||
          ((((pcVar3[3] != 'f' || (pcVar3[4] != 'a')) ||
            ((pcVar3[5] != 'u' || ((pcVar3[6] != 'l' || (pcVar3[7] != 't')))))) ||
           (uVar2 = (uint)(byte)pcVar3[8], pcVar3[8] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xb) ||
       (((((*pcVar3 == 'c' && (pcVar3[1] == 'C')) && (pcVar3[2] == 'a')) &&
         ((pcVar3[3] == 'm' && (pcVar3[4] == 'e')))) &&
        ((pcVar3[5] == 'r' && ((pcVar3[6] == 'a' && (pcVar3[7] == '\0')))))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x15) ||
         ((((*pcVar3 == 'c' && (pcVar3[1] == 'R')) && (pcVar3[2] == 'c')) &&
          ((pcVar3[3] == 'o' && (pcVar3[4] == '\0')))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x1c) ||
           ((((*pcVar3 == 'c' && (pcVar3[1] == 'G')) &&
             ((pcVar3[2] == 'u' &&
              (((pcVar3[3] == 'e' && (pcVar3[4] == 's')) && (pcVar3[5] == 't')))))) &&
            ((pcVar3[6] == '1' && (pcVar3[7] == '\0')))))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 == puVar1 + 0x26) ||
             ((((*pcVar3 == 'c' && (pcVar3[1] == 'G')) &&
               ((pcVar3[2] == 'u' &&
                (((pcVar3[3] == 'e' && (pcVar3[4] == 's')) && (pcVar3[5] == 't')))))) &&
              ((pcVar3[6] == '2' && (pcVar3[7] == '\0')))))) {
            uVar2 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar3 = (char *)param_2[1];
            if ((pcVar3 == puVar1 + 0x30) ||
               (((((*pcVar3 == 'c' && (pcVar3[1] == 'M')) &&
                  ((pcVar3[2] == 'a' &&
                   (((((pcVar3[3] == 'i' && (pcVar3[4] == 'n')) && (pcVar3[5] == 'P')) &&
                     ((pcVar3[6] == 'l' && (pcVar3[7] == 'a')))) && (pcVar3[8] == 'y')))))) &&
                 ((pcVar3[9] == 'e' && (pcVar3[10] == 'r')))) && (pcVar3[0xb] == '\0')))) {
              uVar2 = 5;
            }
            else {
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar3 = (char *)param_2[1];
              if ((pcVar3 != puVar1 + 0x3e) &&
                 ((((((*pcVar3 != 'c' || (pcVar3[1] != 'F')) || (pcVar3[2] != 'a')) ||
                    (((pcVar3[3] != 'c' || (pcVar3[4] != 'i')) ||
                     ((pcVar3[5] != 'l' || ((pcVar3[6] != 'i' || (pcVar3[7] != 't')))))))) ||
                   ((pcVar3[8] != 'a' ||
                    (((pcVar3[9] != 't' || (pcVar3[10] != 'o')) || (pcVar3[0xb] != 'r')))))) ||
                  (pcVar3[0xc] != '\0')))) {
                return 0;
              }
              uVar2 = 6;
            }
          }
        }
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

