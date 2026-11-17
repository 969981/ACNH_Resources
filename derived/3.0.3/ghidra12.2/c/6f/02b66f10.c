
bool FUN_02b66f10(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar6 = PTR_DAT_04bb5be8;
  puVar5 = PTR_DAT_04bb5be0;
  lVar7 = *(long *)PTR_DAT_04bb5008;
  uVar3 = (param_1 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x9f0);
  if ((*(uint *)(lVar7 + 0x9d0) <= uVar3) ||
     (puVar8 = *(uint **)(*(long *)(lVar7 + 0x9d8) + (long)(int)uVar3 * 8), puVar8 == (uint *)0x0))
  {
    return true;
  }
  uVar3 = *puVar8;
  if (uVar3 == 0) {
    return false;
  }
  cVar9 = *PTR_DAT_04bb5be0;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      uVar3 = *puVar8;
    }
    else {
      uVar2 = *(uint *)(puVar6 + 0x1c);
      if (-1 < (int)uVar2) {
        if ((char *)((ulong)uVar2 + (long)puVar8) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)uVar2 + (long)puVar8) != '\0';
      }
      if (uVar2 != 0xffffffff) {
        return false;
      }
    }
    puVar4 = (uint *)(ulong)uVar3;
    if (puVar4 == (uint *)0x0) {
      return false;
    }
    if (puVar8 == puVar4) break;
    lVar7 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar8 + (lVar7 - (long)puVar4);
    if (lVar7 == 0) {
      return false;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
    *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
    if (uVar10 == 0) {
      return false;
    }
    piVar11 = (int *)(lVar7 + 4);
    while (piVar11[-1] != -0x61e636b4) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return false;
      }
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(puVar6 + 0x1c) = iVar1;
    uVar3 = *puVar8;
    if (uVar3 == 0) {
      return false;
    }
  }
  return false;
}

