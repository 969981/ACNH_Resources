
short FUN_0123cc10(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  short sVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar7 = PTR_DAT_04bbbc78;
  puVar6 = PTR_DAT_04bbbc70;
  if ((param_1 == (uint *)0x0) || (*param_1 == 0)) {
    return -2;
  }
  cVar8 = *PTR_DAT_04bbbc70;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined4 *)(puVar7 + 0x60) = 0xffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar7 + 0x34);
      if (-1 < (int)uVar3) {
        if ((short *)((ulong)uVar3 + (long)param_1) == (short *)0x0) {
          return -2;
        }
        sVar4 = *(short *)((ulong)uVar3 + (long)param_1);
        if (sVar4 == -2) {
          return -2;
        }
        return sVar4;
      }
      if (uVar3 != 0xffffffff) {
        return -2;
      }
    }
    lVar5 = (long)param_1 - (ulong)*param_1;
    if (*param_1 == 0) {
      return -2;
    }
    if (lVar5 == 0) break;
    lVar2 = 0xc;
    if (*(char *)(lVar5 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar5 == 0) {
      return -2;
    }
    uVar9 = (ulong)*(ushort *)(lVar5 + 8);
    *(undefined4 *)(puVar7 + 0x34) = 0xfffffffe;
    if (uVar9 == 0) {
      return -2;
    }
    piVar10 = (int *)(lVar2 + lVar5 + 4);
    while (piVar10[-1] != -0x485b96aa) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return -2;
      }
    }
    iVar1 = 0;
    if (*piVar10 != -1) {
      iVar1 = *piVar10;
    }
    *(int *)(puVar7 + 0x34) = iVar1;
    if (*param_1 == 0) {
      return -2;
    }
  }
  return -2;
}

