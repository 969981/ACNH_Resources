
long * FUN_024a0450(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined8 local_40;
  short local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x60) == 0) {
    return (long *)0x0;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
  if (*(char *)(lVar9 + 0xee) == '\0') {
    return (long *)0x0;
  }
  lVar9 = lVar9 + ((ulong)*(uint *)(lVar9 + 0x10) & 1) * 0x20;
  local_48 = *(short *)(lVar9 + 0x14);
  local_46 = *(undefined1 *)(lVar9 + 0x16);
  local_45 = *(undefined1 *)(lVar9 + 0x17);
  local_44 = *(undefined4 *)(lVar9 + 0x18);
  if (local_48 == -2) {
    return (long *)0x0;
  }
  local_40 = 0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  local_38 = local_48;
  local_36 = local_46;
  local_35 = local_45;
  local_34 = local_44;
  uVar4 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar3 == 0) {
    return (long *)0x0;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar4) {
    return (long *)0x0;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return (long *)0x0;
  }
  lVar9 = *(long *)PTR_DAT_04bc0428;
  uVar4 = FUN_0277d6c4(&local_38);
  puVar3 = PTR_DAT_04bb27c0;
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar4) {
    return (long *)0x0;
  }
  puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
  if (puVar10 == (uint *)0x0) {
    return (long *)0x0;
  }
  uVar4 = *puVar10;
  if (uVar4 == 0) {
    return (long *)0x0;
  }
  if (puVar10 == (uint *)(ulong)uVar4) {
    return (long *)0x0;
  }
  puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
  if (*puVar12 == 0) {
    return (long *)0x0;
  }
  uVar4 = puVar12[1];
  if (uVar4 == 0) {
    return (long *)0x0;
  }
  if ((ulong)(ushort)puVar12[2] == 0) {
    return (long *)0x0;
  }
  lVar9 = 0xc;
  if (*(char *)((long)puVar12 + 10) != '\0') {
    lVar9 = 0x1c;
  }
  lVar9 = (long)puVar12 + lVar9 + (ulong)(ushort)puVar12[2] * 8;
  if (lVar9 == 0) {
    return (long *)0x0;
  }
  uVar1 = 0;
  if ((ulong)uVar4 != 0) {
    uVar1 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
  }
  if (*puVar12 <= uVar1) {
    uVar1 = 0xffffffff;
  }
  if (*(uint *)PTR_DAT_04bc00c8 <= uVar1) {
    return (long *)0x0;
  }
  uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2);
  if (0xbc < uVar2) {
    return (long *)0x0;
  }
  if (uVar2 != 0x19) {
    return (long *)0x0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return (long *)0x0;
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
  uVar4 = *(uint *)(lVar11 + ((ulong)*(uint *)(lVar11 + 0x10) & 1) * 0x20 + 0x28);
  if ((((uVar4 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar4)) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar4 = 1;
      goto LAB_024a06b8;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto LAB_024a06b8;
    }
  }
  uVar4 = 0;
LAB_024a06b8:
  if (plVar13 != (long *)0x0) {
    lVar9 = plVar13[0x2a];
    uVar1 = *(uint *)(plVar13 + 0x49);
    if (((*PTR_DAT_04bbe298 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbe298), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbe290 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe298);
    }
    uVar6 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bbe290);
    if ((uVar6 & uVar4) != 1) {
      return (long *)0x0;
    }
    if ((int)lVar9 != 1) {
      return (long *)0x0;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return (long *)0x0;
    }
    plVar13 = (long *)plVar13[0x12];
    if (plVar13 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar13 = (long *)(**(code **)(*plVar13 + 0xe8))(plVar13,1);
    if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5b58);
    }
    if (plVar13 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bb5b50);
      if ((uVar8 & 1) == 0) {
        plVar13 = (long *)0x0;
      }
      return plVar13;
    }
  }
  return (long *)0x0;
}

