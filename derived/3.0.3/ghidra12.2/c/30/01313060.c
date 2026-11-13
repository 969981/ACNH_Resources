
undefined8 * FUN_01313060(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  char cVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar6 = PTR_DAT_04bbbde0;
  puVar5 = PTR_DAT_04bbbdd8;
  puVar7 = *(uint **)(param_1 + 8);
  if (puVar7 == (uint *)0x0) {
    return &DAT_0407ebb1;
  }
  if (*puVar7 != 0) {
    cVar8 = *PTR_DAT_04bbbdd8;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar6 + 0xa4);
        if (-1 < (int)uVar4) {
          puVar10 = (undefined8 *)((ulong)uVar4 + (long)puVar7);
          goto LAB_0131315c;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*puVar7;
      puVar10 = (undefined8 *)0x0;
      if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_0131315c;
      lVar2 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar7 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
      *(undefined4 *)(puVar6 + 0xa4) = 0xfffffffe;
      puVar10 = (undefined8 *)0x0;
      if (uVar9 == 0) goto LAB_0131315c;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != 0x39b5a93d) {
        piVar12 = piVar12 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          puVar10 = (undefined8 *)0x0;
          goto LAB_0131315c;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar6 + 0xa4) = iVar1;
    } while (*puVar7 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_0131315c:
  puVar3 = (undefined8 *)PTR_DAT_04c48248;
  if (puVar10 != (undefined8 *)0x0) {
    puVar3 = puVar10;
  }
  return puVar3;
}

