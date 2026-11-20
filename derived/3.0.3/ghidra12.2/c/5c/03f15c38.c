
undefined8 FUN_03f15c38(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_Linear_04bdefe0;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_Linear_04bdefe0) {
    uVar2 = 0;
  }
  else if ((((((*pcVar3 != 'L') || (pcVar3[1] != 'i')) || (pcVar3[2] != 'n')) ||
            ((pcVar3[3] != 'e' || (pcVar3[4] != 'a')))) || (pcVar3[5] != 'r')) ||
          (uVar2 = (uint)(byte)pcVar3[6], pcVar3[6] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 8) ||
       ((((*pcVar3 == 'S' && (pcVar3[1] == 'q')) &&
         ((pcVar3[2] == 'u' && (((pcVar3[3] == 'a' && (pcVar3[4] == 'r')) && (pcVar3[5] == 'e'))))))
        && (pcVar3[6] == '\0')))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x10) ||
         (((*pcVar3 == 'S' && (pcVar3[1] == 'q')) &&
          ((pcVar3[2] == 'r' && ((pcVar3[3] == 't' && (pcVar3[4] == '\0')))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x16) ||
           ((((*pcVar3 == 'S' && (pcVar3[1] == 'i')) && (pcVar3[2] == 'n')) && (pcVar3[3] == '\0')))
           ) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 != puVar1 + 0x1b) &&
             (((*pcVar3 != 'N' || (pcVar3[1] != 'o')) ||
              ((pcVar3[2] != 'n' || ((pcVar3[3] != 'e' || (pcVar3[4] != '\0')))))))) {
            return 0;
          }
          uVar2 = 4;
        }
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

