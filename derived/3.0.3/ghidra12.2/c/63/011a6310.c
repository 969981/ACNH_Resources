
undefined4 FUN_011a6310(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar6 = PTR_DAT_04bb5c48;
  puVar5 = PTR_DAT_04bb5c40;
  puVar7 = *(uint **)(param_1 + 8);
  if ((puVar7 == (uint *)0x0) || (*puVar7 == 0)) {
    return 0;
  }
  cVar8 = *PTR_DAT_04bb5c40;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      uVar4 = *puVar7;
    }
    else {
      uVar4 = *(uint *)(puVar6 + 0xc);
      if (-1 < (int)uVar4) {
        if ((short *)((ulong)uVar4 + (long)puVar7) == (short *)0x0) {
          return 0;
        }
        if (*(short *)((ulong)uVar4 + (long)puVar7) == 0) {
          return 0;
        }
        puVar7 = *(uint **)(param_1 + 8);
        uVar4 = *puVar7;
        if (uVar4 == 0) {
          return 0;
        }
        uVar9 = *(uint *)puVar6;
        while( true ) {
          if (-1 < (int)uVar9) {
            if ((undefined4 *)((long)puVar7 + (ulong)uVar9) == (undefined4 *)0x0) {
              return 0;
            }
            return *(undefined4 *)((long)puVar7 + (ulong)uVar9);
          }
          if (uVar9 != 0xffffffff) {
            return 0;
          }
          lVar2 = (long)puVar7 - (ulong)uVar4;
          if (lVar2 == 0) {
            return 0;
          }
          lVar3 = 0xc;
          if (*(char *)(lVar2 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          if (lVar3 + lVar2 == 0) break;
          uVar11 = (ulong)*(ushort *)(lVar2 + 8);
          *(undefined4 *)puVar6 = 0xfffffffe;
          if (uVar11 == 0) {
            return 0;
          }
          puVar10 = (uint *)(lVar3 + lVar2 + 4);
          while (puVar10[-1] != 0x158a4c61) {
            puVar10 = puVar10 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              return 0;
            }
          }
          uVar9 = 0;
          if (*puVar10 != 0xffffffff) {
            uVar9 = *puVar10;
          }
          *(uint *)puVar6 = uVar9;
          uVar4 = *puVar7;
          if (uVar4 == 0) {
            return 0;
          }
        }
        return 0;
      }
      if (uVar4 != 0xffffffff) {
        return 0;
      }
      uVar4 = *puVar7;
    }
    if (uVar4 == 0) {
      return 0;
    }
    puVar10 = (uint *)(ulong)uVar4;
    if (puVar7 == puVar10) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
    if (lVar2 == 0) {
      return 0;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
    *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
    if (uVar11 == 0) {
      return 0;
    }
    piVar12 = (int *)(lVar2 + 4);
    while (piVar12[-1] != 0x54706054) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar6 + 0xc) = iVar1;
    if (*puVar7 == 0) {
      return 0;
    }
  }
  return 0;
}

