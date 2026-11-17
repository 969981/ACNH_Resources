
undefined8 FUN_02b7ee50(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar6 = PTR_DAT_04bb5c78;
  puVar5 = PTR_DAT_04bb5c70;
  lVar8 = *(long *)PTR_DAT_04bb5008;
  uVar3 = (uint)*(ushort *)(param_1 + 0x304) - (uint)*(ushort *)(lVar8 + 0x17f0);
  if (((*(uint *)(lVar8 + 0x17d0) <= uVar3) ||
      (puVar9 = *(uint **)(*(long *)(lVar8 + 0x17d8) + (long)(int)uVar3 * 8), puVar9 == (uint *)0x0)
      ) || (uVar3 = *puVar9, uVar3 == 0)) {
LAB_02b7ef70:
    uVar7 = FUN_02b90230(*(undefined4 *)(param_1 + 0x300));
    return uVar7;
  }
  cVar10 = *PTR_DAT_04bb5c70;
  do {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      uVar3 = *puVar9;
    }
    else {
      uVar2 = *(uint *)(puVar6 + 0xc);
      if (-1 < (int)uVar2) {
        if (((char *)((ulong)uVar2 + (long)puVar9) != (char *)0x0) &&
           (*(char *)((ulong)uVar2 + (long)puVar9) != '\0')) {
          return 0;
        }
        goto LAB_02b7ef70;
      }
      if (uVar2 != 0xffffffff) goto LAB_02b7ef70;
    }
    puVar4 = (uint *)(ulong)uVar3;
    if ((puVar4 == (uint *)0x0) || (puVar9 == puVar4)) goto LAB_02b7ef70;
    lVar8 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar4)) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar9 + (lVar8 - (long)puVar4);
    if (lVar8 == 0) goto LAB_02b7ef70;
    uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar4));
    *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_02b7ef70;
    piVar12 = (int *)(lVar8 + 4);
    while (piVar12[-1] != 0x3440cdd7) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_02b7ef70;
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar6 + 0xc) = iVar1;
    uVar3 = *puVar9;
    if (uVar3 == 0) goto LAB_02b7ef70;
  } while( true );
}

