
undefined8 FUN_00dcbe68(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bb8a28;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_DAT_04bb8a28) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'c') || (pcVar3[1] != 'N')) || (pcVar3[2] != 'e')) ||
          ((pcVar3[3] != 'w' || (uVar2 = (uint)(byte)pcVar3[4], pcVar3[4] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 7) ||
       ((((*pcVar3 == 'c' && (pcVar3[1] == 'M')) &&
         ((pcVar3[2] == 'o' && (((pcVar3[3] == 'v' && (pcVar3[4] == 'i')) && (pcVar3[5] == 'n'))))))
        && ((pcVar3[6] == 'g' && (pcVar3[7] == '\0')))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0x11) &&
         (((((*pcVar3 != 'c' || (pcVar3[1] != 'P')) ||
            ((pcVar3[2] != 'l' || (((pcVar3[3] != 'a' || (pcVar3[4] != 'y')) || (pcVar3[5] != 'e')))
             ))) || ((pcVar3[6] != 'r' || (pcVar3[7] != 'M')))) ||
          ((pcVar3[8] != 'o' ||
           (((pcVar3[9] != 'v' || (pcVar3[10] != 'e')) || (pcVar3[0xb] != '\0')))))))) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

