
undefined8 FUN_00b68f70(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cNone_04bb6d38;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cNone_04bb6d38) {
    uVar2 = 0;
  }
  else if ((((*pcVar3 != 'c') || (pcVar3[1] != 'N')) || (pcVar3[2] != 'o')) ||
          (((pcVar3[3] != 'n' || (pcVar3[4] != 'e')) ||
           (uVar2 = (uint)(byte)pcVar3[5], pcVar3[5] != 0)))) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if ((pcVar3 == puVar1 + 8) ||
       (((*pcVar3 == 'c' && (pcVar3[1] == 'S')) &&
        ((((pcVar3[2] == 'e' &&
           ((((pcVar3[3] == 'l' && (pcVar3[4] == 'e')) && (pcVar3[5] == 'c')) &&
            ((pcVar3[6] == 't' && (pcVar3[7] == 'D')))))) && (pcVar3[8] == 'B')) &&
         (pcVar3[9] == '\0')))))) {
      uVar2 = 1;
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if ((pcVar3 == puVar1 + 0x14) ||
         ((((*pcVar3 == 'c' && (pcVar3[1] == 'R')) &&
           ((pcVar3[2] == 'e' && (((pcVar3[3] == 'w' && (pcVar3[4] == 'a')) && (pcVar3[5] == 'r'))))
           )) && ((pcVar3[6] == 'd' && (pcVar3[7] == '\0')))))) {
        uVar2 = 2;
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x1e) ||
           (((((*pcVar3 == 'c' && (pcVar3[1] == 'V')) &&
              ((pcVar3[2] == 'i' &&
               (((pcVar3[3] == 's' && (pcVar3[4] == 'i')) && (pcVar3[5] == 't')))))) &&
             ((pcVar3[6] == 'P' && (pcVar3[7] == 'r')))) &&
            ((pcVar3[8] == 'e' &&
             (((pcVar3[9] == 's' && (pcVar3[10] == 'e')) &&
              ((pcVar3[0xb] == 'n' && ((pcVar3[0xc] == 't' && (pcVar3[0xd] == '\0')))))))))))) {
          uVar2 = 3;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 != puVar1 + 0x2e) &&
             (((((((*pcVar3 != 'c' || (pcVar3[1] != 'D')) || (pcVar3[2] != 'e')) ||
                 ((pcVar3[3] != 'l' || (pcVar3[4] != 'i')))) || (pcVar3[5] != 'v')) ||
               (((pcVar3[6] != 'e' || (pcVar3[7] != 'r')) ||
                ((pcVar3[8] != 'y' ||
                 (((pcVar3[9] != 'I' || (pcVar3[10] != 't')) || (pcVar3[0xb] != 'e')))))))) ||
              ((pcVar3[0xc] != 'm' || (pcVar3[0xd] != '\0')))))) {
            return 0;
          }
          uVar2 = 4;
        }
      }
    }
  }
  *param_1 = uVar2;
  return 1;
}

