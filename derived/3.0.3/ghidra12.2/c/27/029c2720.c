
void FUN_029c2720(long *param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  int *piVar7;
  undefined *puVar8;
  long lVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  
  puVar6 = PTR_DAT_04bc3f20;
  puVar2 = PTR_DAT_04bc3f18;
  lVar9 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f7c8);
  if (((lVar9 == 0) ||
      (uVar4 = (param_2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8),
      *(uint *)(lVar9 + 0x1d8) <= uVar4)) ||
     (puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), puVar10 == (uint *)0x0)
     ) {
    lVar9 = *(long *)(PTR_PTR_04bb2238 + 8);
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = lVar9;
    return;
  }
  uVar4 = *puVar10;
  if (uVar4 == 0) {
LAB_029c2834:
    puVar8 = (undefined *)0x0;
LAB_029c2838:
    puVar2 = PTR_DAT_04c493f8;
    if (puVar8 != (undefined *)0x0) {
      puVar2 = puVar8;
    }
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = (long)puVar2;
    return;
  }
  cVar11 = *PTR_DAT_04bc3f18;
  do {
    if (cVar11 == '\0') {
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      cVar11 = '\x01';
      uVar4 = *puVar10;
      *puVar2 = 1;
    }
    else {
      uVar3 = *(uint *)(puVar6 + 4);
      if (-1 < (int)uVar3) {
        puVar8 = (undefined *)((ulong)uVar3 + (long)puVar10);
        goto LAB_029c2838;
      }
      if (uVar3 != 0xffffffff) goto LAB_029c2834;
    }
    puVar5 = (uint *)(ulong)uVar4;
    puVar8 = (undefined *)0x0;
    if ((puVar5 == (uint *)0x0) || (puVar8 = (undefined *)0x0, puVar10 == puVar5))
    goto LAB_029c2838;
    lVar9 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
      lVar9 = 0x1c;
    }
    lVar9 = (long)puVar10 + (lVar9 - (long)puVar5);
    puVar8 = (undefined *)0x0;
    if (lVar9 == 0) goto LAB_029c2838;
    uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
    *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_029c2834;
    piVar7 = (int *)(lVar9 + 4);
    while (piVar7[-1] != -0x7a30e9eb) {
      piVar7 = piVar7 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_029c2834;
    }
    iVar1 = 0;
    if (*piVar7 != -1) {
      iVar1 = *piVar7;
    }
    *(int *)(puVar6 + 4) = iVar1;
    uVar4 = *puVar10;
    if (uVar4 == 0) goto LAB_029c2834;
  } while( true );
}

