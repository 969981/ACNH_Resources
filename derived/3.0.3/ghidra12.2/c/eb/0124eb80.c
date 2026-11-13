
bool FUN_0124eb80(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  
  iVar5 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  puVar4 = PTR_DAT_04bbbc78;
  puVar3 = PTR_DAT_04bbbc70;
  if (((6 < iVar5 - 0xbU) || (puVar6 = *(uint **)(param_1 + 0x10), puVar6 == (uint *)0x0)) ||
     (*puVar6 == 0)) {
    return false;
  }
  cVar7 = *PTR_DAT_04bbbc70;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
    }
    else {
      uVar2 = *(uint *)(puVar4 + 0x4c);
      if (-1 < (int)uVar2) {
        if ((byte *)((ulong)uVar2 + (long)puVar6) == (byte *)0x0) {
          return false;
        }
        return 1 < *(byte *)((ulong)uVar2 + (long)puVar6);
      }
      if (uVar2 != 0xffffffff) {
        return false;
      }
    }
    puVar8 = (uint *)(ulong)*puVar6;
    if (*puVar6 == 0) {
      return false;
    }
    if (puVar6 == puVar8) break;
    lVar1 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar6 + (lVar1 - (long)puVar8);
    if (lVar1 == 0) {
      return false;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
    *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
    if (uVar9 == 0) {
      return false;
    }
    piVar10 = (int *)(lVar1 + 4);
    while (piVar10[-1] != -0xa58ccc9) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return false;
      }
    }
    iVar5 = 0;
    if (*piVar10 != -1) {
      iVar5 = *piVar10;
    }
    *(int *)(puVar4 + 0x4c) = iVar5;
    if (*puVar6 == 0) {
      return false;
    }
  }
  return false;
}

