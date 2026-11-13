
undefined8 FUN_00d12138(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cSchool_04bb7fe0;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cSchool_04bb7fe0) {
    uVar2 = 0;
  }
  else if (((((*pcVar3 != 'c') || (pcVar3[1] != 'S')) || (pcVar3[2] != 'c')) ||
           ((pcVar3[3] != 'h' || (pcVar3[4] != 'o')))) ||
          ((pcVar3[5] != 'o' ||
           ((pcVar3[6] != 'l' || (uVar2 = (uint)(byte)pcVar3[7], pcVar3[7] != 0)))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 10) ||
       (((((*pcVar3 == 'c' && (pcVar3[1] == 'H')) && (pcVar3[2] == 'o')) &&
         (((pcVar3[3] == 's' && (pcVar3[4] == 'p')) &&
          ((pcVar3[5] == 'i' && ((pcVar3[6] == 't' && (pcVar3[7] == 'a')))))))) &&
        ((pcVar3[8] == 'l' && (pcVar3[9] == '\0')))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x16) ||
         (((((*pcVar3 == 'c' && (pcVar3[1] == 'R')) && (pcVar3[2] == 'e')) &&
           ((pcVar3[3] == 's' && (pcVar3[4] == 't')))) &&
          ((((pcVar3[5] == 'a' && ((pcVar3[6] == 'u' && (pcVar3[7] == 'r')))) && (pcVar3[8] == 'a'))
           && (((pcVar3[9] == 'n' && (pcVar3[10] == 't')) && (pcVar3[0xb] == '\0')))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x24) ||
           ((((*pcVar3 == 'c' && (pcVar3[1] == 'C')) &&
             ((pcVar3[2] == 'a' && ((pcVar3[3] == 'f' && (pcVar3[4] == 'e')))))) &&
            (pcVar3[5] == '\0')))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 == puVar1 + 0x2c) ||
             ((((((*pcVar3 == 'c' && (pcVar3[1] == 'T')) && (pcVar3[2] == 'a')) &&
                ((pcVar3[3] == 'i' && (pcVar3[4] == 'l')))) && (pcVar3[5] == 'o')) &&
              ((pcVar3[6] == 'r' && (pcVar3[7] == '\0')))))) {
            uVar2 = 4;
          }
          else {
            (**(code **)(*param_2 + 0x18))(param_2);
            pcVar3 = (char *)param_2[1];
            if ((pcVar3 != puVar1 + 0x36) &&
               ((((*pcVar3 != 'c' || (pcVar3[1] != 'E')) || (pcVar3[2] != 'd')) ||
                ((((pcVar3[3] != 'i' || (pcVar3[4] != 't')) ||
                  ((pcVar3[5] != 'N' || ((pcVar3[6] != 'o' || (pcVar3[7] != 'w')))))) ||
                 (pcVar3[8] != '\0')))))) {
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

