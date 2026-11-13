
undefined8 FUN_0102ac60(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cNowTime_04bbab40;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cNowTime_04bbab40) {
    uVar2 = 0;
  }
  else if ((((((*pcVar3 != 'c') || (pcVar3[1] != 'N')) || (pcVar3[2] != 'o')) ||
            ((pcVar3[3] != 'w' || (pcVar3[4] != 'T')))) ||
           ((pcVar3[5] != 'i' || ((pcVar3[6] != 'm' || (pcVar3[7] != 'e')))))) ||
          (uVar2 = (uint)(byte)pcVar3[8], pcVar3[8] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 10) ||
       (((((*pcVar3 == 'c' && (pcVar3[1] == 'G')) && (pcVar3[2] == 'r')) &&
         (((pcVar3[3] == 'o' && (pcVar3[4] == 'w')) &&
          ((pcVar3[5] == 'U' && ((pcVar3[6] == 'p' && (pcVar3[7] == 'T')))))))) &&
        ((pcVar3[8] == 'i' && (((pcVar3[9] == 'm' && (pcVar3[10] == 'e')) && (pcVar3[0xb] == '\0')))
         ))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0x17) &&
         (((((*pcVar3 != 'c' || (pcVar3[1] != 'L')) ||
            (((pcVar3[2] != 'a' || ((pcVar3[3] != 's' || (pcVar3[4] != 't')))) || (pcVar3[5] != 'G')
             ))) || ((((pcVar3[6] != 'r' || (pcVar3[7] != 'o')) || (pcVar3[8] != 'w')) ||
                     ((pcVar3[9] != 'U' || (pcVar3[10] != 'p')))))) ||
          (((pcVar3[0xb] != 'T' || ((pcVar3[0xc] != 'i' || (pcVar3[0xd] != 'm')))) ||
           ((pcVar3[0xe] != 'e' || (pcVar3[0xf] != '\0')))))))) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

