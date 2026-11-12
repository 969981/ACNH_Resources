
ulong FUN_00959650(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  (**(code **)(*param_1 + 0x18))();
  lVar6 = 0;
  do {
    if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_009596cc;
    lVar2 = param_1[1] + lVar6;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_009596cc;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_009596cc;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_009596cc:
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar2 = 0;
  do {
    iVar5 = (int)lVar6;
    if (*(char *)(param_2[1] + lVar2) == '\0') {
LAB_00959718:
      iVar1 = (int)lVar2;
      if (iVar5 < iVar1) {
        return 0xffffffff;
      }
LAB_00959734:
      if (0 < (int)lVar2) {
        uVar7 = 0;
        while( true ) {
          lVar6 = param_1[1];
          (**(code **)(*param_2 + 0x18))(param_2);
          if ((char *)(lVar6 + uVar7) == (char *)param_2[1]) break;
          pcVar3 = (char *)param_2[1];
          lVar4 = lVar2;
          while( true ) {
            lVar4 = lVar4 + -1;
            if (*(char *)(lVar6 + uVar7) != *pcVar3) break;
            if ((*(char *)(lVar6 + uVar7) == '\0') ||
               (lVar6 = lVar6 + 1, pcVar3 = pcVar3 + 1, lVar4 == 0)) goto LAB_009597c8;
          }
          uVar7 = uVar7 + 1;
          if (uVar7 == (iVar5 - iVar1) + 1) {
            return 0xffffffff;
          }
        }
LAB_009597c8:
        return uVar7 & 0xffffffff;
      }
      goto LAB_009597b0;
    }
    lVar4 = param_2[1] + lVar2;
    if (*(char *)(lVar4 + 1) == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_00959718;
    }
    if (*(char *)(lVar4 + 2) == '\0') {
      lVar2 = lVar2 + 2;
      iVar1 = (int)lVar2;
      if (iVar5 < iVar1) {
        return 0xffffffff;
      }
      goto LAB_00959734;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  if (iVar5 < 0) {
    return 0xffffffff;
  }
LAB_009597b0:
  (**(code **)(*param_2 + 0x18))(param_2);
  return 0;
}

