
undefined8 FUN_020fb3a4(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_Normal_04bc29c8;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_Normal_04bc29c8) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'N') || (pcVar3[1] != 'o')) || (pcVar3[2] != 'r')) ||
          (((pcVar3[3] != 'm' || (pcVar3[4] != 'a')) ||
           ((pcVar3[5] != 'l' || (uVar2 = (uint)(byte)pcVar3[6], pcVar3[6] != 0)))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 7) ||
       (((*pcVar3 == 'S' && (pcVar3[1] == 'h')) &&
        (((pcVar3[2] == 'u' && (((pcVar3[3] == 'f' && (pcVar3[4] == 'f')) && (pcVar3[5] == 'l'))))
         && ((pcVar3[6] == 'e' && (pcVar3[7] == '\0')))))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 != puVar1 + 0xf) &&
         (((*pcVar3 != 'R' || (pcVar3[1] != 'a')) ||
          ((pcVar3[2] != 'n' ||
           ((((pcVar3[3] != 'd' || (pcVar3[4] != 'o')) || (pcVar3[5] != 'm')) || (pcVar3[6] != '\0')
            ))))))) {
        return 0;
      }
      uVar2 = 2;
    }
  }
  *param_1 = uVar2;
  return 1;
}

