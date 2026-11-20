
undefined8 FUN_03f15e74(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_Beginning_04bdeff0;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_Beginning_04bdeff0) {
    uVar2 = 0;
  }
  else if (((((*pcVar3 != 'B') || (pcVar3[1] != 'e')) || (pcVar3[2] != 'g')) ||
           (((pcVar3[3] != 'i' || (pcVar3[4] != 'n')) ||
            ((pcVar3[5] != 'n' || ((pcVar3[6] != 'i' || (pcVar3[7] != 'n')))))))) ||
          ((pcVar3[8] != 'g' || (uVar2 = (uint)(byte)pcVar3[9], pcVar3[9] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xb) ||
       (((((((*pcVar3 == 'P' && (pcVar3[1] == 'o')) && (pcVar3[2] == 's')) &&
           ((pcVar3[3] == 'i' && (pcVar3[4] == 't')))) && (pcVar3[5] == 'i')) &&
         ((pcVar3[6] == 'o' && (pcVar3[7] == 'n')))) && (pcVar3[8] == '\0')))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x15) ||
         ((((*pcVar3 == 'R' && (pcVar3[1] == 'e')) && (pcVar3[2] == 's')) &&
          (((pcVar3[3] == 'u' && (pcVar3[4] == 'm')) && ((pcVar3[5] == 'e' && (pcVar3[6] == '\0'))))
          )))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 != puVar1 + 0x1d) &&
           ((((*pcVar3 != 'C' || (pcVar3[1] != 'o')) ||
             ((pcVar3[2] != 'n' ||
              (((pcVar3[3] != 't' || (pcVar3[4] != 'i')) || (pcVar3[5] != 'n')))))) ||
            (((pcVar3[6] != 'u' || (pcVar3[7] != 'e')) || (pcVar3[8] != '\0')))))) {
          return 0;
        }
        uVar2 = 3;
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

