
undefined8 FUN_00afda70(uint *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar1 = PTR_s_cVillageRemakePattern_04bb67d8;
  pcVar3 = (char *)param_2[1];
  if (pcVar3 == PTR_s_cVillageRemakePattern_04bb67d8) {
    uVar2 = 0;
  }
  else if ((((((((*pcVar3 != 'c') || (pcVar3[1] != 'V')) || (pcVar3[2] != 'i')) ||
              (((pcVar3[3] != 'l' || (pcVar3[4] != 'l')) ||
               ((pcVar3[5] != 'a' || ((pcVar3[6] != 'g' || (pcVar3[7] != 'e')))))))) ||
             (pcVar3[8] != 'R')) ||
            (((((pcVar3[9] != 'e' || (pcVar3[10] != 'm')) || (pcVar3[0xb] != 'a')) ||
              ((pcVar3[0xc] != 'k' || (pcVar3[0xd] != 'e')))) || (pcVar3[0xe] != 'P')))) ||
           (((pcVar3[0xf] != 'a' || (pcVar3[0x10] != 't')) ||
            ((pcVar3[0x11] != 't' ||
             (((pcVar3[0x12] != 'e' || (pcVar3[0x13] != 'r')) || (pcVar3[0x14] != 'n')))))))) ||
          (uVar2 = (uint)(byte)pcVar3[0x15], pcVar3[0x15] != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar3 != puVar1 + 0x18) {
      if (*pcVar3 != 'c') {
LAB_00afdc24:
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar3 = (char *)param_2[1];
        if ((pcVar3 == puVar1 + 0x3b) ||
           (((((*pcVar3 == 'c' && (pcVar3[1] == 'R')) &&
              ((pcVar3[2] == 'a' &&
               (((pcVar3[3] == 'n' && (pcVar3[4] == 'd')) && (pcVar3[5] == 'o')))))) &&
             ((pcVar3[6] == 'm' && (pcVar3[7] == 'R')))) &&
            (((pcVar3[8] == 'e' &&
              (((pcVar3[9] == 'm' && (pcVar3[10] == 'a')) &&
               ((pcVar3[0xb] == 'k' &&
                ((((pcVar3[0xc] == 'e' && (pcVar3[0xd] == 'P')) && (pcVar3[0xe] == 'a')) &&
                 ((pcVar3[0xf] == 't' && (pcVar3[0x10] == 't')))))))))) &&
             ((pcVar3[0x11] == 'e' &&
              (((pcVar3[0x12] == 'r' && (pcVar3[0x13] == 'n')) && (pcVar3[0x14] == '\0')))))))))) {
          uVar2 = 2;
        }
        else {
          (**(code **)(*param_2 + 0x18))(param_2);
          pcVar3 = (char *)param_2[1];
          if ((pcVar3 != puVar1 + 0x52) &&
             ((((*pcVar3 != 'c' || (pcVar3[1] != 'R')) || (pcVar3[2] != 'e')) ||
              (((((pcVar3[3] != 'm' || (pcVar3[4] != 'a')) ||
                 ((pcVar3[5] != 'k' || ((pcVar3[6] != 'e' || (pcVar3[7] != 'P')))))) ||
                ((pcVar3[8] != 'a' ||
                 ((((pcVar3[9] != 't' || (pcVar3[10] != 't')) || (pcVar3[0xb] != 'e')) ||
                  ((pcVar3[0xc] != 'r' || (pcVar3[0xd] != 'n')))))))) ||
               ((pcVar3[0xe] != '0' || (pcVar3[0xf] != '\0')))))))) {
            return 0;
          }
          uVar2 = 3;
        }
        goto LAB_00afde2c;
      }
      lVar4 = 0;
      do {
        if ((puVar1[lVar4 + 0x19] != pcVar3[lVar4 + 1]) ||
           (puVar1[lVar4 + 0x1a] != pcVar3[lVar4 + 2])) goto LAB_00afdc24;
        lVar4 = lVar4 + 2;
      } while (lVar4 != 0x20);
    }
    uVar2 = 1;
  }
LAB_00afde2c:
  *param_1 = uVar2;
  return 1;
}

