
ushort FUN_011bbf90(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  uint *puVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar7 = PTR_DAT_04bbb930;
  puVar6 = PTR_DAT_04bbb928;
  puVar9 = *(uint **)(param_1 + 8);
  if ((puVar9 == (uint *)0x0) || (*puVar9 == 0)) {
    return 0;
  }
  cVar10 = *PTR_DAT_04bbb928;
  do {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
      *(undefined4 *)(puVar7 + 0x58) = 0xffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
    }
    else {
      uVar4 = *(uint *)(puVar7 + 0x2c);
      if (-1 < (int)uVar4) {
        if ((short *)((ulong)uVar4 + (long)puVar9) == (short *)0x0) {
          return 0;
        }
        if (*(short *)((ulong)uVar4 + (long)puVar9) == 0) {
          return 0;
        }
        puVar9 = *(uint **)(param_1 + 8);
        uVar4 = *puVar9;
        if (uVar4 == 0) {
          return 0;
        }
        if (puVar9 == (uint *)(ulong)uVar4) {
          return 0;
        }
        puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
        if (*puVar11 == 0) {
          return 0;
        }
        uVar4 = puVar11[1];
        if (uVar4 == 0) {
          return 0;
        }
        if ((ulong)(ushort)puVar11[2] == 0) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar11 + lVar2 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar2 == 0) {
          return 0;
        }
        uVar3 = 0;
        if ((ulong)uVar4 != 0) {
          uVar3 = (uint)((ulong)((long)puVar9 - lVar2) / (ulong)uVar4);
        }
        if (*puVar11 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if (*(uint *)PTR_DAT_04bbb958 <= uVar3) {
          return 0;
        }
        uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bbb958 + 8) + (long)(int)uVar3 * 2);
        if (uVar5 < 3) {
          return uVar5;
        }
        return 0;
      }
      if (uVar4 != 0xffffffff) {
        return 0;
      }
    }
    puVar11 = (uint *)(ulong)*puVar9;
    if (*puVar9 == 0) {
      return 0;
    }
    if (puVar9 == puVar11) {
      return 0;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar9 + (lVar2 - (long)puVar11);
    if (lVar2 == 0) {
      return 0;
    }
    uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
    *(undefined4 *)(puVar7 + 0x2c) = 0xfffffffe;
    if (uVar8 == 0) {
      return 0;
    }
    piVar12 = (int *)(lVar2 + 4);
    while (piVar12[-1] != 0x54706054) {
      piVar12 = piVar12 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar7 + 0x2c) = iVar1;
    if (*puVar9 == 0) {
      return 0;
    }
  } while( true );
}

