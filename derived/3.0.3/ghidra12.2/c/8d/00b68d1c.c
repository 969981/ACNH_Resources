
undefined8 FUN_00b68d1c(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cFastToday_04bb6d30;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cFastToday_04bb6d30) {
    uVar2 = 0;
  }
  else if ((((((*pcVar3 != 'c') || (pcVar3[1] != 'F')) || (pcVar3[2] != 'a')) ||
            ((pcVar3[3] != 's' || (pcVar3[4] != 't')))) ||
           ((pcVar3[5] != 'T' || ((pcVar3[6] != 'o' || (pcVar3[7] != 'd')))))) ||
          ((pcVar3[8] != 'a' ||
           ((pcVar3[9] != 'y' || (uVar2 = (uint)(byte)pcVar3[10], pcVar3[10] != 0)))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xd) ||
       ((((((*pcVar3 == 'c' && (pcVar3[1] == 'F')) && (pcVar3[2] == 'a')) &&
          (((pcVar3[3] == 's' && (pcVar3[4] == 't')) &&
           ((pcVar3[5] == 'T' && ((pcVar3[6] == 'o' && (pcVar3[7] == 'm')))))))) &&
         (pcVar3[8] == 'o')) &&
        ((((pcVar3[9] == 'r' && (pcVar3[10] == 'r')) && (pcVar3[0xb] == 'o')) &&
         ((pcVar3[0xc] == 'w' && (pcVar3[0xd] == '\0')))))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0x1d) &&
         ((((*pcVar3 != 'c' || (pcVar3[1] != 'S')) ||
           ((pcVar3[2] != 'l' ||
            ((((pcVar3[3] != 'o' || (pcVar3[4] != 'w')) || (pcVar3[5] != 'R')) ||
             ((pcVar3[6] != 'e' || (pcVar3[7] != 't')))))))) ||
          ((pcVar3[8] != 'r' || ((pcVar3[9] != 'y' || (pcVar3[10] != '\0')))))))) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

