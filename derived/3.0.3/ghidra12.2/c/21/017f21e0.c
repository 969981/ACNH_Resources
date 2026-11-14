
ulong FUN_017f21e0(long param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  
  puVar7 = PTR_DAT_04bbe4c0;
  puVar6 = PTR_DAT_04bbe4b8;
  puVar5 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb46d0;
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    uVar8 = (uint)*(ushort *)(param_1 + 0x1ce) - (uint)*(ushort *)(lVar14 + 0xe00);
    if ((*(uint *)(lVar14 + 0xde0) <= uVar8) ||
       (puVar10 = *(uint **)(*(long *)(lVar14 + 0xde8) + (long)(int)uVar8 * 8),
       puVar10 == (uint *)0x0)) {
      return 6;
    }
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      return 0;
    }
    cVar11 = *PTR_DAT_04bbe4b8;
    while( true ) {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        uVar8 = *puVar10;
      }
      else {
        uVar2 = *(uint *)puVar7;
        if (-1 < (int)uVar2) {
          if ((ushort *)((ulong)uVar2 + (long)puVar10) == (ushort *)0x0) {
            return 0;
          }
          return (ulong)*(ushort *)((ulong)uVar2 + (long)puVar10);
        }
        if (uVar2 != 0xffffffff) {
          return 0;
        }
      }
      puVar4 = (uint *)(ulong)uVar8;
      if (puVar4 == (uint *)0x0) {
        return 0;
      }
      if (puVar10 == puVar4) break;
      lVar14 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar4)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar10 + (lVar14 - (long)puVar4);
      if (lVar14 == 0) {
        return 0;
      }
      uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar4));
      *(undefined4 *)puVar7 = 0xfffffffe;
      if (uVar12 == 0) {
        return 0;
      }
      piVar13 = (int *)(lVar14 + 4);
      while (piVar13[-1] != -0x5488e152) {
        piVar13 = piVar13 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar13 != -1) {
        iVar1 = *piVar13;
      }
      *(int *)puVar7 = iVar1;
      uVar8 = *puVar10;
      if (uVar8 == 0) {
        return 0;
      }
    }
    return 0;
  }
  if (*(short *)(param_1 + 0xbc) != *(short *)PTR_DAT_04bb3170 || *(int *)(param_1 + 0x208) != -1) {
    uVar9 = 0xea;
    goto LAB_017f24c4;
  }
  sVar3 = *(short *)(param_1 + 0xb4);
  if (sVar3 == -2) {
    local_38 = 0x139b;
    FUN_0277d4ac(&local_38);
    puVar5 = PTR_DAT_04bb43c0;
    local_40 = 0;
    local_50 = PTR_DAT_04bc0510 + 0x10;
    local_48 = (undefined4)local_38;
    local_44 = local_38._4_4_;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar5 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(&local_38);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar8 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(lVar15 + 0x1e0);
LAB_017f24ac:
          lVar15 = *(long *)(lVar15 + (long)(int)uVar8 * 8);
          if (lVar15 != 0) {
            local_40 = lVar15;
          }
        }
      }
    }
  }
  else {
    local_40 = 0;
    local_48 = CONCAT22(*(undefined2 *)(param_1 + 0xb6),sVar3);
    local_44 = *(undefined4 *)(param_1 + 0xb8);
    local_50 = PTR_DAT_04bc0510 + 0x10;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar5 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4((short *)(param_1 + 0xb4));
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar8 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(lVar15 + 0x1e0);
          goto LAB_017f24ac;
        }
      }
    }
  }
  uVar9 = FUN_01b020f0(&local_50);
LAB_017f24c4:
  uVar12 = FUN_017bfeb0(lVar14,uVar9);
  return uVar12;
}

