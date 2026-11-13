
ushort FUN_0119f860(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  ulong uVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  
  puVar6 = PTR_DAT_04bbb918;
  puVar5 = PTR_DAT_04bbb910;
  puVar9 = *(uint **)(param_1 + 8);
  if (puVar9 == (uint *)0x0) {
    return 0;
  }
  uVar7 = 0;
  if (*puVar9 != 0) {
    cVar10 = *PTR_DAT_04bbb910;
    while (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
LAB_0119f8d0:
      puVar12 = (uint *)(ulong)*puVar9;
      uVar7 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar12)) goto LAB_0119f95c;
      lVar2 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar9 + (lVar2 - (long)puVar12);
      if (lVar2 == 0) goto LAB_0119f958;
      uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
      *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
      uVar7 = 0;
      if (uVar8 == 0) goto LAB_0119f95c;
      piVar13 = (int *)(lVar2 + 4);
      while (piVar13[-1] != 0x54706054) {
        piVar13 = piVar13 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          uVar7 = 0;
          goto LAB_0119f95c;
        }
      }
      uVar7 = 0;
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)(puVar6 + 0xc) = iVar1;
      if (*puVar9 == 0) goto LAB_0119f95c;
    }
    uVar4 = *(uint *)(puVar6 + 0xc);
    if ((int)uVar4 < 0) {
      if (uVar4 == 0xffffffff) goto LAB_0119f8d0;
LAB_0119f958:
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      if (((short *)((ulong)uVar4 + (long)puVar9) != (short *)0x0) &&
         (uVar7 = 0, *(short *)((ulong)uVar4 + (long)puVar9) != 0)) {
        puVar9 = *(uint **)(param_1 + 8);
        uVar4 = *puVar9;
        if (uVar4 == 0) goto LAB_0119fa20;
        uVar11 = *(uint *)(puVar6 + 8);
        goto LAB_0119f9a0;
      }
    }
  }
  goto LAB_0119f95c;
LAB_0119f9a0:
  if ((int)uVar11 < 0) {
    if ((uVar11 != 0xffffffff) || (lVar2 = (long)puVar9 - (ulong)uVar4, lVar2 == 0))
    goto LAB_0119fa20;
    lVar3 = 0xc;
    if (*(char *)(lVar2 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar2 == 0) goto LAB_0119fa20;
    uVar8 = (ulong)*(ushort *)(lVar2 + 8);
    *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
    if (uVar8 == 0) goto LAB_0119fa20;
    puVar12 = (uint *)(lVar3 + lVar2 + 4);
    while (puVar12[-1] != 0xc33a894e) {
      puVar12 = puVar12 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) goto LAB_0119fa20;
    }
    uVar11 = 0;
    if (*puVar12 != 0xffffffff) {
      uVar11 = *puVar12;
    }
    *(uint *)(puVar6 + 8) = uVar11;
    uVar4 = *puVar9;
    if (uVar4 == 0) goto LAB_0119fa20;
    goto LAB_0119f9a0;
  }
  if ((undefined2 *)((long)puVar9 + (ulong)uVar11) != (undefined2 *)0x0) {
    local_18 = *(undefined2 *)((long)puVar9 + (ulong)uVar11);
    goto LAB_0119fa24;
  }
LAB_0119fa20:
  local_18 = 0xfffe;
LAB_0119fa24:
  local_16 = 0;
  local_14 = 0;
  FUN_0277d4ac(&local_18);
  uVar7 = FUN_0277e294(&local_18);
LAB_0119f95c:
  return uVar7 & 1;
}

