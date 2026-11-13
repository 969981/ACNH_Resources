
undefined2 FUN_0123c7a0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  
  lVar2 = DAT_05150358;
  uVar6 = FUN_0277d6c4();
  puVar5 = PTR_DAT_04bbbc78;
  puVar4 = PTR_DAT_04bbbc70;
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
  if (((*(uint *)(lVar2 + 0x1d8) <= uVar6) ||
      (puVar7 = *(uint **)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar6 * 8), puVar7 == (uint *)0x0))
     || (*puVar7 == 0)) {
    return 0xfffe;
  }
  cVar8 = *PTR_DAT_04bbbc70;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
      uVar6 = *puVar7;
    }
    else {
      uVar6 = *(uint *)(puVar5 + 0x58);
      if (-1 < (int)uVar6) {
        if ((byte *)((ulong)uVar6 + (long)puVar7) == (byte *)0x0) {
          return 0xfffe;
        }
        if ((*(byte *)((ulong)uVar6 + (long)puVar7) & 1) == 0) {
          return 0xfffe;
        }
        uVar6 = *puVar7;
        if (uVar6 == 0) {
          return 0xfffe;
        }
        uVar9 = *(uint *)(puVar5 + 0x2c);
        while( true ) {
          if (-1 < (int)uVar9) {
            if ((undefined2 *)((long)puVar7 + (ulong)uVar9) == (undefined2 *)0x0) {
              return 0xfffe;
            }
            return *(undefined2 *)((long)puVar7 + (ulong)uVar9);
          }
          if (uVar9 != 0xffffffff) {
            return 0xfffe;
          }
          lVar2 = (long)puVar7 - (ulong)uVar6;
          if (lVar2 == 0) {
            return 0xfffe;
          }
          lVar3 = 0xc;
          if (*(char *)(lVar2 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          if (lVar3 + lVar2 == 0) break;
          uVar11 = (ulong)*(ushort *)(lVar2 + 8);
          *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
          if (uVar11 == 0) {
            return 0xfffe;
          }
          puVar10 = (uint *)(lVar3 + lVar2 + 4);
          while (puVar10[-1] != 0x2c6a189e) {
            puVar10 = puVar10 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              return 0xfffe;
            }
          }
          uVar9 = 0;
          if (*puVar10 != 0xffffffff) {
            uVar9 = *puVar10;
          }
          *(uint *)(puVar5 + 0x2c) = uVar9;
          uVar6 = *puVar7;
          if (uVar6 == 0) {
            return 0xfffe;
          }
        }
        return 0xfffe;
      }
      if (uVar6 != 0xffffffff) {
        return 0xfffe;
      }
      uVar6 = *puVar7;
    }
    if (uVar6 == 0) {
      return 0xfffe;
    }
    puVar10 = (uint *)(ulong)uVar6;
    if (puVar7 == puVar10) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
    if (lVar2 == 0) {
      return 0xfffe;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
    *(undefined4 *)(puVar5 + 0x58) = 0xfffffffe;
    if (uVar11 == 0) {
      return 0xfffe;
    }
    piVar12 = (int *)(lVar2 + 4);
    while (piVar12[-1] != 0x623dc307) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return 0xfffe;
      }
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar5 + 0x58) = iVar1;
    if (*puVar7 == 0) {
      return 0xfffe;
    }
  }
  return 0xfffe;
}

