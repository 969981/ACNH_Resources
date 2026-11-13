
undefined8 FUN_00e3b150(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cGarden_04bb9368;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cGarden_04bb9368) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'c') || (pcVar3[1] != 'G')) || (pcVar3[2] != 'a')) ||
          (((pcVar3[3] != 'r' || (pcVar3[4] != 'd')) ||
           ((pcVar3[5] != 'e' ||
            ((pcVar3[6] != 'n' || (uVar2 = (uint)(byte)pcVar3[7], pcVar3[7] != 0)))))))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 10) ||
       (((((*pcVar3 == 'c' && (pcVar3[1] == 'N')) && (pcVar3[2] == 'p')) &&
         (((pcVar3[3] == 'c' && (pcVar3[4] == 'R')) &&
          ((pcVar3[5] == 'o' && ((pcVar3[6] == 'o' && (pcVar3[7] == 'm')))))))) &&
        (pcVar3[8] == '\0')))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x15) ||
         ((((((*pcVar3 == 'c' && (pcVar3[1] == 'S')) && (pcVar3[2] == 'h')) &&
            ((pcVar3[3] == 'a' && (pcVar3[4] == 'r')))) && (pcVar3[5] == 'e')) &&
          (((pcVar3[6] == 'h' && (pcVar3[7] == 'o')) &&
           ((pcVar3[8] == 'u' &&
            (((pcVar3[9] == 's' && (pcVar3[10] == 'e')) && (pcVar3[0xb] == '\0')))))))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 != puVar1 + 0x23) &&
           (((*pcVar3 != 'c' || (pcVar3[1] != 'F')) ||
            ((((pcVar3[2] != 'a' || ((pcVar3[3] != 'c' || (pcVar3[4] != 'i')))) ||
              (pcVar3[5] != 'l')) ||
             ((((pcVar3[6] != 'i' || (pcVar3[7] != 't')) || (pcVar3[8] != 'y')) ||
              (pcVar3[9] != '\0')))))))) {
          return 0;
        }
        uVar2 = 3;
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

