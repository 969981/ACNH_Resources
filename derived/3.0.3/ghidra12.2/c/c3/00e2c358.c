
undefined8 FUN_00e2c358(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cMainField_04bb9250;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cMainField_04bb9250) {
    uVar2 = 0;
  }
  else if ((((((*pcVar3 != 'c') || (pcVar3[1] != 'M')) || (pcVar3[2] != 'a')) ||
            ((pcVar3[3] != 'i' || (pcVar3[4] != 'n')))) || (pcVar3[5] != 'F')) ||
          (((pcVar3[6] != 'i' || (pcVar3[7] != 'e')) ||
           ((pcVar3[8] != 'l' ||
            ((pcVar3[9] != 'd' || (uVar2 = (uint)(byte)pcVar3[10], pcVar3[10] != 0)))))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xd) ||
       ((((*pcVar3 == 'c' && (pcVar3[1] == 'B')) && (pcVar3[2] == 'e')) &&
        (((pcVar3[3] == 'a' && (pcVar3[4] == 'c')) && ((pcVar3[5] == 'h' && (pcVar3[6] == '\0'))))))
       )) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0x16) &&
         (((((*pcVar3 != 'c' || (pcVar3[1] != 'U')) ||
            ((pcVar3[2] != 's' || (((pcVar3[3] != 'e' || (pcVar3[4] != 'r')) || (pcVar3[5] != 'S')))
             ))) || ((pcVar3[6] != 'e' || (pcVar3[7] != 'l')))) ||
          ((pcVar3[8] != 'e' ||
           (((pcVar3[9] != 'c' || (pcVar3[10] != 't')) || (pcVar3[0xb] != '\0')))))))) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

