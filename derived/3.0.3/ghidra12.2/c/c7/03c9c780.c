
bool FUN_03c9c780(long param_1,long *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  
  pcVar2 = (char *)param_2[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar4 = 0;
  do {
    if (*(char *)(param_2[1] + lVar4) == '\0') {
LAB_03c9c7f0:
      iVar3 = (int)lVar4;
joined_r0x03c9c7f4:
      if (0 < iVar3) {
        (**(code **)(*param_2 + 0x18))(param_2);
        pcVar5 = (char *)param_2[1];
        lVar4 = 0;
        goto LAB_03c9c820;
      }
      break;
    }
    lVar6 = param_2[1] + lVar4;
    if (*(char *)(lVar6 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_03c9c7f0;
    }
    if (*(char *)(lVar6 + 2) == '\0') {
      iVar3 = (int)lVar4 + 2;
      goto joined_r0x03c9c7f4;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  goto LAB_03c9c97c;
  while( true ) {
    if (pcVar5[lVar4 + 1] == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_03c9c858;
    }
    if (pcVar5[lVar4 + 2] == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_03c9c858;
    }
    lVar4 = lVar4 + 3;
    if (lVar4 == 0x80001) break;
LAB_03c9c820:
    if (pcVar5[lVar4] == '\0') {
LAB_03c9c858:
      if ((int)lVar4 < 0) {
        pcVar5 = PTR_DAT_04bb2120;
      }
      break;
    }
  }
  if (*pcVar5 == '*') {
    lVar7 = *(long *)(param_1 + 0xb8);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = param_2[1];
    lVar4 = 0;
    do {
      puVar1 = PTR_DAT_04c4b988;
      if (*(char *)(lVar6 + lVar4) == '\0') {
LAB_03c9c8c4:
        iVar3 = (int)lVar4;
joined_r0x03c9c8c8:
        if (0 < iVar3) {
          puVar1 = (undefined *)(lVar6 + 1);
        }
        break;
      }
      if (*(char *)(lVar6 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03c9c8c4;
      }
      if (*(char *)(lVar6 + lVar4 + 2) == '\0') {
        iVar3 = (int)lVar4 + 2;
        goto joined_r0x03c9c8c8;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    if (((lVar7 == 0) ||
        (pcVar2 = (char *)FUN_00364e30((long *)(param_1 + 0xb8),puVar1), pcVar2 == (char *)0x0)) ||
       (*pcVar2 == '\0')) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = param_2[1];
      lVar4 = 0;
      do {
        if (*(char *)(lVar6 + lVar4) == '\0') {
LAB_03c9c954:
          iVar3 = (int)lVar4;
joined_r0x03c9c958:
          if (0 < iVar3) {
            pcVar2 = (char *)(lVar6 + 1);
            goto LAB_03c9c97c;
          }
          break;
        }
        if (*(char *)(lVar6 + lVar4 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_03c9c954;
        }
        if (*(char *)(lVar6 + lVar4 + 2) == '\0') {
          iVar3 = (int)lVar4 + 2;
          goto joined_r0x03c9c958;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      pcVar2 = PTR_DAT_04c4b988;
    }
  }
LAB_03c9c97c:
  lVar4 = FUN_00369da0(param_1,pcVar2);
  return lVar4 != 0;
}

