
undefined8 FUN_00bf2c38(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb71f0;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_DAT_04bb71f0) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'W') || (pcVar3[1] != 'a')) || (pcVar3[2] != 'y')) ||
          ((pcVar3[3] != 'A' || (uVar2 = (uint)(byte)pcVar3[4], pcVar3[4] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 7) ||
       (((*pcVar3 == 'W' && (pcVar3[1] == 'a')) &&
        ((pcVar3[2] == 'y' && ((pcVar3[3] == 'B' && (pcVar3[4] == '\0')))))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0xe) ||
         ((((*pcVar3 == 'R' && (pcVar3[1] == 'e')) && (pcVar3[2] == 't')) &&
          (((pcVar3[3] == 'u' && (pcVar3[4] == 'r')) &&
           ((pcVar3[5] == 'n' && ((pcVar3[6] == 'A' && (pcVar3[7] == '\0')))))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 != puVar1 + 0x18) &&
           ((((*pcVar3 != 'R' || (pcVar3[1] != 'e')) || (pcVar3[2] != 't')) ||
            (((pcVar3[3] != 'u' || (pcVar3[4] != 'r')) ||
             ((pcVar3[5] != 'n' || ((pcVar3[6] != 'B' || (pcVar3[7] != '\0')))))))))) {
          return 0;
        }
        uVar2 = 3;
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

