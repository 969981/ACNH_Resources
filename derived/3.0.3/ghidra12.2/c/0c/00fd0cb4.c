
undefined8 FUN_00fd0cb4(uint *param_1,long *param_2)

{
  uint uVar1;
  char *pcVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar2 = (char *)param_2[1];
  if (pcVar2 == s_cNormal_0496ea68) {
    uVar1 = 0;
  }
  else if ((((*pcVar2 != 'c') || (pcVar2[1] != 'N')) || (pcVar2[2] != 'o')) ||
          (((pcVar2[3] != 'r' || (pcVar2[4] != 'm')) ||
           ((pcVar2[5] != 'a' ||
            ((pcVar2[6] != 'l' || (uVar1 = (uint)(byte)pcVar2[7], pcVar2[7] != 0)))))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar2 = (char *)param_2[1];
    if ((pcVar2 == s_cFast_0496ea71) ||
       (((((*pcVar2 == 'c' && (pcVar2[1] == 'F')) && (pcVar2[2] == 'a')) &&
         ((pcVar2[3] == 's' && (pcVar2[4] == 't')))) && (pcVar2[5] == '\0')))) {
      uVar1 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar2 = (char *)param_2[1];
      if ((pcVar2 != s_cSlow_0496ea78) &&
         (((*pcVar2 != 'c' || (pcVar2[1] != 'S')) ||
          ((pcVar2[2] != 'l' || (((pcVar2[3] != 'o' || (pcVar2[4] != 'w')) || (pcVar2[5] != '\0'))))
          )))) {
        return 0;
      }
      uVar1 = 2;
    }
  }
  *param_1 = uVar1;
  return 1;
}

