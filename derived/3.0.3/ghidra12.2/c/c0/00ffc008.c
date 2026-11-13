
undefined8 FUN_00ffc008(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cWorldDucking_049704b8) {
    uVar1 = 0;
  }
  else if (((((((*pcVar2 != 'c') || (pcVar2[1] != 'W')) || (pcVar2[2] != 'o')) ||
             ((pcVar2[3] != 'r' || (pcVar2[4] != 'l')))) ||
            ((pcVar2[5] != 'd' || ((pcVar2[6] != 'D' || (pcVar2[7] != 'u')))))) ||
           (pcVar2[8] != 'c')) ||
          ((((pcVar2[9] != 'k' || (pcVar2[10] != 'i')) || (pcVar2[0xb] != 'n')) ||
           ((pcVar2[0xc] != 'g' || (uVar1 = (uint)(byte)pcVar2[0xd], pcVar2[0xd] != 0)))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cAllDucking_049704c7) ||
       ((((*pcVar2 == 'c' && (pcVar2[1] == 'A')) &&
         ((pcVar2[2] == 'l' && (((pcVar2[3] == 'l' && (pcVar2[4] == 'D')) && (pcVar2[5] == 'u'))))))
        && (((pcVar2[6] == 'c' && (pcVar2[7] == 'k')) &&
            ((pcVar2[8] == 'i' &&
             (((pcVar2[9] == 'n' && (pcVar2[10] == 'g')) && (pcVar2[0xb] == '\0')))))))))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 != s_cNoDucking_049704d4) &&
         (((((*pcVar2 != 'c' || (pcVar2[1] != 'N')) || (pcVar2[2] != 'o')) ||
           ((pcVar2[3] != 'D' || (pcVar2[4] != 'u')))) ||
          ((((pcVar2[5] != 'c' || ((pcVar2[6] != 'k' || (pcVar2[7] != 'i')))) || (pcVar2[8] != 'n'))
           || ((pcVar2[9] != 'g' || (pcVar2[10] != '\0')))))))) {
        return 0;
      }
      uVar1 = 2;
    }
  }
  *param_1 = uVar1;
  return 1;
}

