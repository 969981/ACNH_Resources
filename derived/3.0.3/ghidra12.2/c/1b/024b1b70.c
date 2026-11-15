
undefined4 FUN_024b1b70(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  short *psVar10;
  long *plVar11;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  uint *local_40;
  short local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x298) == 0) {
    psVar10 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    psVar10 = (short *)(lVar7 + ((ulong)*(uint *)(lVar7 + 0x10) & 1) * 0x20 + 0x14);
  }
  local_48 = *psVar10;
  local_46 = (undefined1)psVar10[1];
  local_45 = *(undefined1 *)((long)psVar10 + 3);
  local_44 = *(undefined4 *)(psVar10 + 2);
  if (local_48 == -2) {
    return 0;
  }
  local_40 = (uint *)0x0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  local_38 = local_48;
  local_36 = local_46;
  local_35 = local_45;
  local_34 = local_44;
  uVar3 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 == 0) {
    return 0;
  }
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bc0428;
  uVar3 = FUN_0277d6c4(&local_38);
  puVar2 = PTR_DAT_04bb27c0;
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar3) {
    return 0;
  }
  local_40 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8);
  if (local_40 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *local_40;
  if (uVar3 == 0) {
    return 0;
  }
  if (local_40 == (uint *)(ulong)uVar3) {
    return 0;
  }
  puVar9 = (uint *)((long)local_40 - (long)(ulong)uVar3);
  if (*puVar9 == 0) {
    return 0;
  }
  uVar3 = puVar9[1];
  if (uVar3 == 0) {
    return 0;
  }
  if ((ulong)(ushort)puVar9[2] == 0) {
    return 0;
  }
  lVar7 = 0xc;
  if (*(char *)((long)puVar9 + 10) != '\0') {
    lVar7 = 0x1c;
  }
  lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
  if (lVar7 == 0) {
    return 0;
  }
  uVar1 = 0;
  if ((ulong)uVar3 != 0) {
    uVar1 = (uint)((ulong)((long)local_40 - lVar7) / (ulong)uVar3);
  }
  if (*puVar9 <= uVar1) {
    uVar1 = 0xffffffff;
  }
  if (*(uint *)PTR_DAT_04bc00c8 <= uVar1) {
    return 0;
  }
  if (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) != 0x18) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
  uVar3 = *(uint *)(lVar8 + ((ulong)*(uint *)(lVar8 + 0x10) & 1) * 0x20 + 0x28);
  if ((((uVar3 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar3)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
      goto LAB_024b1dd0;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto LAB_024b1dd0;
    }
  }
  uVar3 = 0;
LAB_024b1dd0:
  if (plVar11 != (long *)0x0) {
    lVar7 = plVar11[0x2a];
    uVar1 = *(uint *)(plVar11 + 0x49);
    if (((*PTR_DAT_04bbe260 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe260), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbe258 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe260);
    }
    uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbe258);
    if ((((uVar5 & uVar3) == 1) && ((int)lVar7 == 1)) && ((uVar1 >> 4 & 1) != 0)) {
      return *(undefined4 *)((long)plVar11 + 0x3a4);
    }
  }
  return 0;
}

