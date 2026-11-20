
void FUN_03f362c0(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *__src;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  undefined **local_90;
  char *pcStack_88;
  char *local_80;
  undefined8 local_78;
  char local_70 [16];
  
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    return;
  }
  uVar4 = uVar2 - 1;
  lVar13 = 0;
  while (*(char *)(*param_2 + (ulong)uVar4 + lVar13) != '.') {
    lVar13 = lVar13 + -1;
    if ((long)((ulong)uVar4 + lVar13 + 1) < 1) {
      return;
    }
  }
  iVar12 = (int)lVar13;
  if (uVar2 + iVar12 == 0) {
    return;
  }
  local_70[0] = '\0';
  uVar14 = uVar2 + iVar12;
  local_78 = 0x1000000000;
  uVar9 = uVar14;
  if (uVar2 <= uVar14) {
    uVar9 = 0;
  }
  lVar13 = *param_2 + (long)(int)uVar9;
  lVar8 = 0;
  do {
    if (*(char *)(lVar13 + lVar8) == '\0') {
LAB_03f36394:
      iVar6 = (int)lVar8;
joined_r0x03f36398:
      if (0 < iVar6) {
        __src = (undefined1 *)(lVar13 + 1);
        goto LAB_03f363b8;
      }
      break;
    }
    if (*(char *)(lVar13 + lVar8 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03f36394;
    }
    if (*(char *)(lVar13 + lVar8 + 2) == '\0') {
      iVar6 = (int)lVar8 + 2;
      goto joined_r0x03f36398;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  __src = &DAT_0419b684;
LAB_03f363b8:
  lVar13 = 0;
  do {
    lVar8 = lVar13;
    lVar13 = lVar8 + 1;
  } while (__src[lVar8] != '\0');
  uVar9 = (uint)lVar8;
  local_80 = local_70;
  if (0 < (int)uVar9) {
    if (0xe < (int)uVar9) {
      uVar9 = 0xf;
    }
    memcpy(local_70,__src,(ulong)uVar9);
    local_70[uVar9] = '\0';
    local_78 = CONCAT44(local_78._4_4_,uVar9);
  }
  local_90 = &PTR_LAB_048f9770;
  pcStack_88 = local_70;
  piVar7 = (int *)(**(code **)(**(long **)(param_1 + 0x128) + 0x38))();
  iVar6 = *piVar7;
  if (iVar6 == 0) {
    return;
  }
  if (iVar6 < 2) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    iVar6 = iVar6 + -1;
    do {
      iVar1 = iVar6 + iVar11;
      if (iVar1 < 0 != SCARRY4(iVar6,iVar11)) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      iVar5 = FUN_03f2a860(*(long *)(piVar7 + 2) + (long)iVar1 * 0x10,&local_90);
      if (iVar5 == 0) {
        iVar11 = iVar1;
        goto LAB_03f36490;
      }
      if (iVar5 < 0) {
        iVar11 = iVar1 + 1;
      }
      else {
        iVar6 = iVar1 + -1;
      }
    } while (iVar11 < iVar6);
  }
  iVar6 = FUN_03f2a860(*(long *)(piVar7 + 2) + (long)iVar11 * 0x10,&local_90);
  if (iVar6 != 0) {
    return;
  }
LAB_03f36490:
  if (iVar11 == -1) {
    return;
  }
  uVar9 = (uint)local_78;
  if ((uint)local_78 == 0xffffffff) {
    uVar9 = 0xffffffff;
    pcVar10 = local_80;
    do {
      cVar3 = *pcVar10;
      uVar9 = uVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
  }
  lVar13 = *param_2;
  iVar6 = (int)param_2[1];
  if ((int)(uVar4 + iVar12) < -1) {
    if ((int)(uVar2 + iVar12 + iVar6) < -1) {
      uVar14 = 0;
      goto LAB_03f364f8;
    }
    uVar14 = uVar2 + iVar6 + iVar12 + 1;
  }
  if (iVar6 < (int)uVar14) {
    return;
  }
LAB_03f364f8:
  if (*(int *)((long)param_2 + 0xc) <= (int)(uVar14 + uVar9)) {
    uVar9 = *(int *)((long)param_2 + 0xc) + ~uVar14;
  }
  if (0 < (int)uVar9) {
    memcpy((void *)(lVar13 + (ulong)uVar14),local_80,(ulong)uVar9);
    lVar8 = (ulong)uVar9 + (ulong)uVar14;
    *(undefined1 *)(lVar13 + lVar8) = 0;
    if ((int)uVar14 <= (int)param_2[1]) {
      *(int *)(param_2 + 1) = (int)lVar8;
    }
  }
  return;
}

