
undefined4 FUN_0088b480(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  char cVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  undefined1 auStack_18 [8];
  
  FUN_0088a148(auStack_18);
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(auStack_18);
  if (*(long *)puVar2 == 0) {
    return 0;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (uVar4 < *(uint *)(lVar10 + 0x1d8)) {
    if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
      return 0;
    }
    puVar5 = (uint *)FUN_0088a2d0(param_1,auStack_18);
    puVar3 = PTR_DAT_04bb57b8;
    puVar2 = PTR_DAT_04bb57b0;
    if (puVar5 != (uint *)0x0) {
      if (*puVar5 == 0) {
        return 0;
      }
      cVar7 = *PTR_DAT_04bb57b0;
      while( true ) {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar4 = *(uint *)(puVar3 + 4);
          if (-1 < (int)uVar4) {
            if ((undefined4 *)((ulong)uVar4 + (long)puVar5) == (undefined4 *)0x0) {
              return 0;
            }
            return *(undefined4 *)((ulong)uVar4 + (long)puVar5);
          }
          if (uVar4 != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*puVar5;
        if (*puVar5 == 0) {
          return 0;
        }
        if (puVar5 == puVar8) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar5 + (lVar10 - (long)puVar8);
        if (lVar10 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
        *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar9 = (int *)(lVar10 + 4);
        while (piVar9[-1] != -0x74c36ec9) {
          piVar9 = piVar9 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar9 != -1) {
          iVar1 = *piVar9;
        }
        *(int *)(puVar3 + 4) = iVar1;
        if (*puVar5 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

