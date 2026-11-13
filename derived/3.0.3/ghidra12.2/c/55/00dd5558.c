
undefined8 FUN_00dd5558(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cNone_04bb8ac8;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cNone_04bb8ac8) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'c') || (pcVar3[1] != 'N')) || (pcVar3[2] != 'o')) ||
          (((pcVar3[3] != 'n' || (pcVar3[4] != 'e')) ||
           (uVar2 = (uint)(byte)pcVar3[5], pcVar3[5] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 8) ||
       (((*pcVar3 == 'c' && (pcVar3[1] == 'A')) &&
        (((((pcVar3[2] == 'm' &&
            ((((pcVar3[3] == 'i' && (pcVar3[4] == 'i')) && (pcVar3[5] == 'b')) &&
             ((pcVar3[6] == 'o' && (pcVar3[7] == 'P')))))) && (pcVar3[8] == 'r')) &&
          ((pcVar3[9] == 'i' && (pcVar3[10] == 'n')))) &&
         ((pcVar3[0xb] == 't' && (pcVar3[0xc] == '\0')))))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x17) ||
         (((((*pcVar3 == 'c' && (pcVar3[1] == 'C')) && (pcVar3[2] == 'h')) &&
           (((pcVar3[3] == 'y' && (pcVar3[4] == 'I')) &&
            ((pcVar3[5] == 'n' && ((pcVar3[6] == 's' && (pcVar3[7] == 'e')))))))) &&
          ((pcVar3[8] == 'c' && ((pcVar3[9] == 't' && (pcVar3[10] == '\0')))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x24) ||
           (((((*pcVar3 == 'c' && (pcVar3[1] == 'B')) && (pcVar3[2] == 'e')) &&
             (((pcVar3[3] == 'y' && (pcVar3[4] == 'F')) &&
              ((pcVar3[5] == 'i' && ((pcVar3[6] == 's' && (pcVar3[7] == 'h')))))))) &&
            (pcVar3[8] == '\0')))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 == puVar1 + 0x2f) ||
             ((((((*pcVar3 == 'c' && (pcVar3[1] == 'C')) && (pcVar3[2] == 'a')) &&
                ((pcVar3[3] == 't' && (pcVar3[4] == 'a')))) && (pcVar3[5] == 'l')) &&
              (((pcVar3[6] == 'o' && (pcVar3[7] == 'g')) &&
               (((pcVar3[8] == 'G' &&
                 (((pcVar3[9] == 'i' && (pcVar3[10] == 'f')) && (pcVar3[0xb] == 't')))) &&
                (pcVar3[0xc] == '\0')))))))) {
            uVar2 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar3 = (char *)param_2[1];
            if ((pcVar3 == puVar1 + 0x3e) ||
               ((((((*pcVar3 == 'c' && (pcVar3[1] == 'R')) &&
                   ((pcVar3[2] == 'a' && ((pcVar3[3] == 'd' && (pcVar3[4] == 'i')))))) &&
                  (pcVar3[5] == 'o')) &&
                 (((pcVar3[6] == 'G' && (pcVar3[7] == 'y')) && (pcVar3[8] == 'm')))) &&
                ((((pcVar3[9] == 'n' && (pcVar3[10] == 'a')) &&
                  (((pcVar3[0xb] == 's' && ((pcVar3[0xc] == 't' && (pcVar3[0xd] == 'i')))) &&
                   (pcVar3[0xe] == 'c')))) && ((pcVar3[0xf] == 's' && (pcVar3[0x10] == '\0'))))))))
            {
              uVar2 = 5;
            }
            else {
              (**(code **)(*param_2 + 0x18))(param_2);
              pcVar3 = (char *)param_2[1];
              if ((pcVar3 != puVar1 + 0x51) &&
                 ((((((*pcVar3 != 'c' || (pcVar3[1] != 'M')) || (pcVar3[2] != 'u')) ||
                    ((pcVar3[3] != 's' || (pcVar3[4] != 'e')))) ||
                   ((pcVar3[5] != 'u' || ((pcVar3[6] != 'm' || (pcVar3[7] != 'P')))))) ||
                  ((pcVar3[8] != 'o' ||
                   ((((pcVar3[9] != 's' || (pcVar3[10] != 't')) || (pcVar3[0xb] != 'e')) ||
                    ((pcVar3[0xc] != 'r' || (pcVar3[0xd] != '\0')))))))))) {
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

