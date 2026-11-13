
undefined8 FUN_00d40ee4(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_ShimaSeom_04bb8248;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_ShimaSeom_04bb8248) {
    uVar2 = 0;
  }
  else if ((((((*pcVar3 != 'S') || (pcVar3[1] != 'h')) || (pcVar3[2] != 'i')) ||
            (((pcVar3[3] != 'm' || (pcVar3[4] != 'a')) ||
             ((pcVar3[5] != 'S' || ((pcVar3[6] != 'e' || (pcVar3[7] != 'o')))))))) ||
           (pcVar3[8] != 'm')) || (uVar2 = (uint)(byte)pcVar3[9], pcVar3[9] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xc) ||
       ((((((*pcVar3 == 'J' && (pcVar3[1] == 'i')) && (pcVar3[2] == 'm')) &&
          ((pcVar3[3] == 'a' && (pcVar3[4] == 'S')))) && (pcVar3[5] == 'e')) &&
        (((pcVar3[6] == 'o' && (pcVar3[7] == 'm')) && (pcVar3[8] == '\0')))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x17) ||
         ((((*pcVar3 == 'T' && (pcVar3[1] == 'o')) && (pcVar3[2] == 'u')) &&
          (((pcVar3[3] == 'S' && (pcVar3[4] == 'e')) &&
           ((pcVar3[5] == 'o' && ((pcVar3[6] == 'm' && (pcVar3[7] == '\0')))))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 != puVar1 + 0x21) &&
           (((((*pcVar3 != 'T' || (pcVar3[1] != 'o')) || (pcVar3[2] != 'u')) ||
             ((pcVar3[3] != 'D' || (pcVar3[4] != 'o')))) || (pcVar3[5] != '\0')))) {
          return 0;
        }
        uVar2 = 3;
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

