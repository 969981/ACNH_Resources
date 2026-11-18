
undefined8 FUN_036ac7e4(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_Random_04bcabf8;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_Random_04bcabf8) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'R') || (pcVar3[1] != 'a')) || (pcVar3[2] != 'n')) ||
          (((pcVar3[3] != 'd' || (pcVar3[4] != 'o')) ||
           ((pcVar3[5] != 'm' || (uVar2 = (uint)(byte)pcVar3[6], pcVar3[6] != 0)))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 7) ||
       (((((*pcVar3 == 'S' && (pcVar3[1] == 'c')) &&
          ((pcVar3[2] == 'h' && (((pcVar3[3] == 'o' && (pcVar3[4] == 'o')) && (pcVar3[5] == 'l')))))
          ) && ((((pcVar3[6] == 'L' && (pcVar3[7] == 'e')) && (pcVar3[8] == 's')) &&
                ((pcVar3[9] == 's' && (pcVar3[10] == 'o')))))) &&
        ((pcVar3[0xb] == 'n' && (pcVar3[0xc] == '\0')))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0x14) &&
         ((((((*pcVar3 != 'S' || (pcVar3[1] != 'c')) || (pcVar3[2] != 'h')) ||
            ((pcVar3[3] != 'o' || (pcVar3[4] != 'o')))) ||
           ((pcVar3[5] != 'l' || ((pcVar3[6] != 'B' || (pcVar3[7] != 'r')))))) ||
          ((pcVar3[8] != 'e' ||
           (((pcVar3[9] != 'a' || (pcVar3[10] != 'k')) || (pcVar3[0xb] != '\0')))))))) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

