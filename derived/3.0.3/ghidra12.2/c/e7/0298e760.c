
bool FUN_0298e760(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar8 = (char *)param_2[1];
  lVar10 = 0;
  while (pcVar8[lVar10] != '\0') {
    if (pcVar8[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      break;
    }
    if (pcVar8[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      iVar9 = (int)lVar10;
      goto joined_r0x0298e7d0;
    }
    lVar10 = lVar10 + 3;
    if (lVar10 == 0x80001) {
      return true;
    }
  }
  iVar9 = (int)lVar10;
joined_r0x0298e7d0:
  if (iVar9 == 0) {
    return true;
  }
  lVar2 = param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar5 = 0;
  do {
    iVar9 = (int)lVar10;
    if (*(char *)(param_1[1] + lVar5) == '\0') {
LAB_0298e874:
      iVar4 = (int)lVar5;
      iVar6 = iVar4 - iVar9;
joined_r0x0298e878:
      if (iVar4 < iVar9) {
        return false;
      }
      goto LAB_0298e834;
    }
    lVar1 = param_1[1] + lVar5;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_0298e874;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar4 = (int)lVar5 + 2;
      iVar6 = iVar4 - iVar9;
      goto joined_r0x0298e878;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  iVar6 = -iVar9;
  if (0 < iVar9) {
    return false;
  }
LAB_0298e834:
  if (iVar9 < 1) {
    return true;
  }
  pcVar7 = (char *)(lVar2 + iVar6);
  do {
    lVar10 = lVar10 + -1;
    bVar3 = *pcVar7 == *pcVar8;
    if (!bVar3) {
      return bVar3;
    }
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (lVar10 != 0);
  return bVar3;
}

