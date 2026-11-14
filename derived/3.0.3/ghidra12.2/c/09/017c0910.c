
bool FUN_017c0910(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar5 = PTR_DAT_04bb5c60;
  puVar4 = PTR_DAT_04bb5c58;
  uVar3 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x200);
  if (((*(uint *)(param_1 + 0x1e0) <= uVar3) ||
      (puVar6 = *(uint **)(*(long *)(param_1 + 0x1e8) + (long)(int)uVar3 * 8), puVar6 == (uint *)0x0
      )) || (*puVar6 == 0)) {
    return false;
  }
  cVar7 = *PTR_DAT_04bb5c58;
  while( true ) {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar5 + 0x20);
      if (-1 < (int)uVar3) {
        if ((char *)((ulong)uVar3 + (long)puVar6) == (char *)0x0) {
          return false;
        }
        return *(char *)((ulong)uVar3 + (long)puVar6) != '\0';
      }
      if (uVar3 != 0xffffffff) {
        return false;
      }
    }
    puVar8 = (uint *)(ulong)*puVar6;
    if (*puVar6 == 0) {
      return false;
    }
    if (puVar6 == puVar8) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar6 + (lVar2 - (long)puVar8);
    if (lVar2 == 0) {
      return false;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
    *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
    if (uVar9 == 0) {
      return false;
    }
    piVar10 = (int *)(lVar2 + 4);
    while (piVar10[-1] != -0x5b24697b) {
      piVar10 = piVar10 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return false;
      }
    }
    iVar1 = 0;
    if (*piVar10 != -1) {
      iVar1 = *piVar10;
    }
    *(int *)(puVar5 + 0x20) = iVar1;
    if (*puVar6 == 0) {
      return false;
    }
  }
  return false;
}

