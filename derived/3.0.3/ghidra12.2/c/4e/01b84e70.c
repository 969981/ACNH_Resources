
undefined8 * FUN_01b84e70(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  uint *puVar7;
  char cVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar5 = PTR_DAT_04bc06e8;
  puVar4 = PTR_DAT_04bc06e0;
  lVar6 = *(long *)PTR_DAT_04bb4788;
  uVar3 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(lVar6 + 0x1f8);
  if ((*(uint *)(lVar6 + 0x1d8) <= uVar3) ||
     (puVar7 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), puVar7 == (uint *)0x0))
  {
    return &DAT_0407ebb1;
  }
  if (*puVar7 != 0) {
    cVar8 = *PTR_DAT_04bc06e0;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x48);
        if (-1 < (int)uVar3) {
          puVar10 = (undefined8 *)((ulong)uVar3 + (long)puVar7);
          goto LAB_01b84f88;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*puVar7;
      puVar10 = (undefined8 *)0x0;
      if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_01b84f88;
      lVar6 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar7 + (lVar6 - (long)puVar11);
      if (lVar6 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0x48) = 0xfffffffe;
      puVar10 = (undefined8 *)0x0;
      if (uVar9 == 0) goto LAB_01b84f88;
      piVar12 = (int *)(lVar6 + 4);
      while (piVar12[-1] != 0x4b9c4229) {
        piVar12 = piVar12 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          puVar10 = (undefined8 *)0x0;
          goto LAB_01b84f88;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar5 + 0x48) = iVar1;
    } while (*puVar7 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_01b84f88:
  puVar2 = *(undefined8 **)PTR_PTR_04bc0700;
  if (puVar10 != (undefined8 *)0x0) {
    puVar2 = puVar10;
  }
  return puVar2;
}

