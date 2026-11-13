
undefined2 FUN_0123d520(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar6 = PTR_DAT_04bbbc78;
  puVar5 = PTR_DAT_04bbbc70;
  if (param_1 == (uint *)0x0) {
    return 0xfffe;
  }
  if (*param_1 == 0) {
    return 0xfffe;
  }
  cVar7 = *PTR_DAT_04bbbc70;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar6 + 0x60) = 0xffffffff;
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
    }
    else {
      uVar3 = *(uint *)(puVar6 + 0x58);
      if (-1 < (int)uVar3) {
        if ((byte *)((ulong)uVar3 + (long)param_1) == (byte *)0x0) {
          return 0xfffe;
        }
        if ((*(byte *)((ulong)uVar3 + (long)param_1) >> 4 & 1) == 0) {
          return 0xfffe;
        }
        uVar3 = *param_1;
        if (uVar3 == 0) {
          return 0xfffe;
        }
        uVar8 = *(uint *)(puVar6 + 0x1c);
        while( true ) {
          if (-1 < (int)uVar8) {
            if ((undefined2 *)((long)param_1 + (ulong)uVar8) == (undefined2 *)0x0) {
              return 0xfffe;
            }
            return *(undefined2 *)((long)param_1 + (ulong)uVar8);
          }
          if (uVar8 != 0xffffffff) {
            return 0xfffe;
          }
          lVar4 = (long)param_1 - (ulong)uVar3;
          if (lVar4 == 0) {
            return 0xfffe;
          }
          lVar2 = 0xc;
          if (*(char *)(lVar4 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          if (lVar2 + lVar4 == 0) break;
          uVar10 = (ulong)*(ushort *)(lVar4 + 8);
          *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
          if (uVar10 == 0) {
            return 0xfffe;
          }
          puVar9 = (uint *)(lVar2 + lVar4 + 4);
          while (puVar9[-1] != 0x76e7fe08) {
            puVar9 = puVar9 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              return 0xfffe;
            }
          }
          uVar8 = 0;
          if (*puVar9 != 0xffffffff) {
            uVar8 = *puVar9;
          }
          *(uint *)(puVar6 + 0x1c) = uVar8;
          uVar3 = *param_1;
          if (uVar3 == 0) {
            return 0xfffe;
          }
        }
        return 0xfffe;
      }
      if (uVar3 != 0xffffffff) {
        return 0xfffe;
      }
    }
    lVar4 = (long)param_1 - (ulong)*param_1;
    if (*param_1 == 0) {
      return 0xfffe;
    }
    if (lVar4 == 0) break;
    lVar2 = 0xc;
    if (*(char *)(lVar4 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar4 == 0) {
      return 0xfffe;
    }
    uVar10 = (ulong)*(ushort *)(lVar4 + 8);
    *(undefined4 *)(puVar6 + 0x58) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0xfffe;
    }
    piVar11 = (int *)(lVar2 + lVar4 + 4);
    while (piVar11[-1] != 0x623dc307) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0xfffe;
      }
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(puVar6 + 0x58) = iVar1;
    if (*param_1 == 0) {
      return 0xfffe;
    }
  }
  return 0xfffe;
}

