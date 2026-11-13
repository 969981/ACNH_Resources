
byte FUN_0123b5b0(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar6 = PTR_DAT_04bbbc78;
  puVar5 = PTR_DAT_04bbbc70;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  cVar7 = *PTR_DAT_04bbbc70;
  do {
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
      uVar9 = (ulong)uVar3;
      if (-1 < (int)uVar3) {
        if ((byte *)(uVar9 + (long)param_1) == (byte *)0x0) {
          return 0;
        }
        if ((*(byte *)(uVar9 + (long)param_1) >> 4 & 1) == 0) {
          return 0;
        }
        if (*param_1 == 0) {
          return 0;
        }
        while( true ) {
          if (-1 < (int)uVar9) {
            if ((byte *)((long)param_1 + uVar9) == (byte *)0x0) {
              return 0;
            }
            return *(byte *)((long)param_1 + uVar9) >> 2 & 1;
          }
          if ((int)uVar9 != -1) {
            return 0;
          }
          puVar8 = (uint *)(ulong)*param_1;
          if (*param_1 == 0) {
            return 0;
          }
          if (param_1 == puVar8) break;
          lVar4 = 0xc;
          if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)param_1 + (lVar4 - (long)puVar8);
          if (lVar4 == 0) {
            return 0;
          }
          uVar9 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
          *(undefined4 *)(puVar6 + 0x58) = 0xfffffffe;
          if (uVar9 == 0) {
            return 0;
          }
          puVar8 = (uint *)(lVar4 + 4);
          while (puVar8[-1] != 0x623dc307) {
            puVar8 = puVar8 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              return 0;
            }
          }
          uVar3 = 0;
          if (*puVar8 != 0xffffffff) {
            uVar3 = *puVar8;
          }
          uVar9 = (ulong)uVar3;
          *(uint *)(puVar6 + 0x58) = uVar3;
          if (*param_1 == 0) {
            return 0;
          }
        }
        return 0;
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    lVar4 = (long)param_1 - (ulong)*param_1;
    if (*param_1 == 0) {
      return 0;
    }
    if (lVar4 == 0) {
      return 0;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar4 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar4 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)(lVar4 + 8);
    *(undefined4 *)(puVar6 + 0x58) = 0xfffffffe;
    if (uVar9 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar2 + lVar4 + 4);
    while (piVar10[-1] != 0x623dc307) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar10 != -1) {
      iVar1 = *piVar10;
    }
    *(int *)(puVar6 + 0x58) = iVar1;
  } while (*param_1 != 0);
  return 0;
}

