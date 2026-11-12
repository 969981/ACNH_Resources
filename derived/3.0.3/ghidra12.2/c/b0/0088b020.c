
void FUN_0088b020(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  void *__src;
  long lVar12;
  long lVar13;
  undefined1 auStack_28 [8];
  
  FUN_0088a148(auStack_28);
  puVar1 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(auStack_28);
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
LAB_0088b22c:
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    *(undefined4 *)(param_1 + 2) = 0x40;
    puVar1 = PTR_PTR_04bb2238;
    *param_1 = (long)(PTR_DAT_04bb2f70 + 0x10);
    param_1[1] = (long)param_1 + 0x14;
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    __src = *(void **)(puVar1 + 8);
    if ((void *)((long)param_1 + 0x14) == __src) goto LAB_0088b418;
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar12) == '\0') goto LAB_0088b3ec;
      lVar13 = *(long *)(puVar1 + 8) + lVar12;
      if (*(char *)(lVar13 + 1) == '\0') goto LAB_0088b3e0;
      if (*(char *)(lVar13 + 2) == '\0') goto LAB_0088b3e8;
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
LAB_0088b2b8:
    lVar12 = 0;
    goto LAB_0088b3ec;
  }
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if ((*(uint *)(lVar13 + 0x1d8) <= uVar3) ||
     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0088b22c;
  uVar3 = FUN_0277d6c4(auStack_28);
  if (*(long *)puVar1 == 0) {
LAB_0088b2c0:
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    *(undefined4 *)(param_1 + 2) = 0x40;
    puVar1 = PTR_PTR_04bb2238;
    *param_1 = (long)(PTR_DAT_04bb2f70 + 0x10);
    param_1[1] = (long)param_1 + 0x14;
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    __src = *(void **)(puVar1 + 8);
    if ((void *)((long)param_1 + 0x14) == __src) goto LAB_0088b418;
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar12) == '\0') goto LAB_0088b3ec;
      lVar13 = *(long *)(puVar1 + 8) + lVar12;
      if (*(char *)(lVar13 + 1) == '\0') goto LAB_0088b3e0;
      if (*(char *)(lVar13 + 2) == '\0') goto LAB_0088b3e8;
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    goto LAB_0088b2b8;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if ((*(uint *)(lVar12 + 0x1d8) <= uVar3) ||
     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0088b2c0;
  puVar4 = (uint *)FUN_0088a2d0(param_2,auStack_28);
  puVar2 = PTR_DAT_04bb57b8;
  puVar1 = PTR_DAT_04bb57b0;
  if (puVar4 == (uint *)0x0) {
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    *(undefined4 *)(param_1 + 2) = 0x40;
    puVar1 = PTR_PTR_04bb2238;
    *param_1 = (long)(PTR_DAT_04bb2f70 + 0x10);
    param_1[1] = (long)param_1 + 0x14;
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    __src = *(void **)(puVar1 + 8);
    if ((void *)((long)param_1 + 0x14) == __src) goto LAB_0088b418;
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar12) == '\0') goto LAB_0088b3ec;
      lVar13 = *(long *)(puVar1 + 8) + lVar12;
      if (*(char *)(lVar13 + 1) == '\0') goto LAB_0088b3e0;
      if (*(char *)(lVar13 + 2) == '\0') goto LAB_0088b3e8;
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    goto LAB_0088b2b8;
  }
  if (*puVar4 != 0) {
    cVar7 = *PTR_DAT_04bb57b0;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar2 + 0x1c);
        if (-1 < (int)uVar3) {
          puVar9 = (undefined *)((ulong)uVar3 + (long)puVar4);
          goto LAB_0088b1b8;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*puVar4;
      puVar9 = (undefined *)0x0;
      if ((*puVar4 == 0) || (puVar4 == puVar10)) goto LAB_0088b1b8;
      lVar12 = 0xc;
      if (*(char *)((long)puVar4 + (10 - (long)puVar10)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar4 + (lVar12 - (long)puVar10);
      if (lVar12 == 0) break;
      uVar8 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar10));
      *(undefined4 *)(puVar2 + 0x1c) = 0xfffffffe;
      puVar9 = (undefined *)0x0;
      if (uVar8 == 0) goto LAB_0088b1b8;
      piVar11 = (int *)(lVar12 + 4);
      while (piVar11[-1] != -0x41d928f2) {
        piVar11 = piVar11 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          puVar9 = (undefined *)0x0;
          goto LAB_0088b1b8;
        }
      }
      iVar5 = 0;
      if (*piVar11 != -1) {
        iVar5 = *piVar11;
      }
      *(int *)(puVar2 + 0x1c) = iVar5;
    } while (*puVar4 != 0);
  }
  puVar9 = (undefined *)0x0;
LAB_0088b1b8:
  *(undefined1 *)((long)param_1 + 0x53) = 0;
  puVar1 = (undefined *)((long)param_1 + 0x14);
  puVar2 = PTR_DAT_04c47d00;
  if (puVar9 != (undefined *)0x0) {
    puVar2 = puVar9;
  }
  *(undefined4 *)(param_1 + 2) = 0x40;
  *param_1 = (long)(PTR_DAT_04bb2f70 + 0x10);
  param_1[1] = (long)puVar1;
  if (puVar1 == puVar2) goto LAB_0088b418;
  lVar12 = 0;
  do {
    if (puVar2[lVar12] == '\0') {
LAB_0088b448:
      iVar5 = (int)lVar12;
      if (0x3f < iVar5) {
        iVar5 = 0x3f;
      }
      goto LAB_0088b454;
    }
    if (puVar2[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_0088b448;
    }
    if (puVar2[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_0088b448;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  iVar5 = 0;
LAB_0088b454:
  memcpy(puVar1,puVar2,(long)iVar5);
  puVar6 = puVar1 + iVar5;
  goto LAB_0088b414;
LAB_0088b3e0:
  lVar12 = lVar12 + 1;
  goto LAB_0088b3ec;
LAB_0088b3e8:
  lVar12 = lVar12 + 2;
LAB_0088b3ec:
  iVar5 = (int)lVar12;
  if ((int)param_1[2] <= (int)lVar12) {
    iVar5 = (int)param_1[2] + -1;
  }
  memcpy((void *)((long)param_1 + 0x14),__src,(long)iVar5);
  puVar6 = (undefined1 *)((long)param_1 + 0x14 + (long)iVar5);
LAB_0088b414:
  *puVar6 = 0;
LAB_0088b418:
  *param_1 = (long)(PTR_DAT_04bb2bc0 + 0x10);
  return;
}

