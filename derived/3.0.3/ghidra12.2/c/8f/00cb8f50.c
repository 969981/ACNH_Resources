
undefined8 FUN_00cb8f50(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cBlack_04bb7b08;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cBlack_04bb7b08) {
    uVar2 = 0;
  }
  else if (((((*pcVar3 != 'c') || (pcVar3[1] != 'B')) || (pcVar3[2] != 'l')) ||
           ((pcVar3[3] != 'a' || (pcVar3[4] != 'c')))) ||
          ((pcVar3[5] != 'k' || (uVar2 = (uint)(byte)pcVar3[6], pcVar3[6] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 9) ||
       ((((*pcVar3 == 'c' && (pcVar3[1] == 'W')) &&
         ((pcVar3[2] == 'h' && (((pcVar3[3] == 'i' && (pcVar3[4] == 't')) && (pcVar3[5] == 'e'))))))
        && (pcVar3[6] == '\0')))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0x12) &&
         ((((*pcVar3 != 'c' || (pcVar3[1] != 'B')) ||
           ((pcVar3[2] != 'r' || ((pcVar3[3] != 'o' || (pcVar3[4] != 'w')))))) ||
          ((pcVar3[5] != 'n' || (pcVar3[6] != '\0')))))) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

