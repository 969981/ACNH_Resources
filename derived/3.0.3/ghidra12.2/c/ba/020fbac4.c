
undefined8 FUN_020fbac4(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_DAT_04bc2a18;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_DAT_04bc2a18) {
    uVar2 = 0;
  }
  else if (((((((*pcVar3 != -0x1d) || (pcVar3[1] != -0x7e)) || (pcVar3[2] != -0x5c)) ||
             (((pcVar3[3] != -0x1d || (pcVar3[4] != -0x7d)) ||
              ((pcVar3[5] != -0x44 || ((pcVar3[6] != -0x1d || (pcVar3[7] != -0x7d)))))))) ||
            (pcVar3[8] != -0x6a)) ||
           (((pcVar3[9] != -0x1d || (pcVar3[10] != -0x7d)) || (pcVar3[0xb] != -0x4d)))) ||
          (uVar2 = (uint)(byte)pcVar3[0xc], pcVar3[0xc] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 0xd) ||
       (((((*pcVar3 == -0x1d && (pcVar3[1] == -0x7e)) &&
          (((pcVar3[2] == -0x49 && ((pcVar3[3] == -0x1d && (pcVar3[4] == -0x7d)))) &&
           (pcVar3[5] == -0x5d)))) &&
         (((((pcVar3[6] == -0x1d && (pcVar3[7] == -0x7d)) && (pcVar3[8] == -0x7d)) &&
           ((pcVar3[9] == -0x1d && (pcVar3[10] == -0x7d)))) && (pcVar3[0xb] == -0x6b)))) &&
        (((pcVar3[0xc] == -0x1d && (pcVar3[0xd] == -0x7d)) &&
         ((pcVar3[0xe] == -0x55 && (pcVar3[0xf] == '\0')))))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0x1d) &&
         ((((((*pcVar3 != -0x1d || (pcVar3[1] != -0x7d)) || (pcVar3[2] != -0x57)) ||
            ((pcVar3[3] != -0x1d || (pcVar3[4] != -0x7d)))) ||
           (((pcVar3[5] != -0x4d || ((pcVar3[6] != -0x1d || (pcVar3[7] != -0x7d)))) ||
            ((pcVar3[8] != -0x80 ||
             (((pcVar3[9] != -0x1d || (pcVar3[10] != -0x7d)) || (pcVar3[0xb] != -0x60)))))))) ||
          (pcVar3[0xc] != '\0')))) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

