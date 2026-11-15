
void FUN_024a6d4c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  short *psVar9;
  long *plVar10;
  undefined *local_58;
  short local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  long local_48;
  short local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x298) == 0) {
    psVar9 = (short *)PTR_DAT_04bb37e0;
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    psVar9 = (short *)(lVar7 + ((ulong)*(uint *)(lVar7 + 0x10) & 1) * 0x20 + 0x14);
  }
  local_50 = *psVar9;
  local_4e = (undefined1)psVar9[1];
  local_4d = *(undefined1 *)((long)psVar9 + 3);
  local_4c = *(undefined4 *)(psVar9 + 2);
  if (local_50 == -2) goto LAB_024a6fa8;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_48 = 0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  local_28 = local_50;
  local_26 = local_4e;
  local_25 = local_4d;
  local_24 = local_4c;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(&local_28);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
        local_48 = lVar7;
      }
    }
  }
  iVar4 = FUN_01ad78cc(&local_58);
  puVar2 = PTR_DAT_04bb27c0;
  if ((iVar4 != 0x1b) || (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 == 0)) goto LAB_024a6fa8;
  lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480);
  uVar3 = *(uint *)(lVar8 + ((ulong)*(uint *)(lVar8 + 0x10) & 1) * 0x20 + 0x28);
  if ((uVar3 == 0) ||
     (((plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0 ||
       ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar3)))) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_024a6f38;
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_024a6f38:
    uVar3 = 0;
  }
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0x2a];
    uVar1 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bbe2a8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe2a8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbe2a0 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe2a8);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbe2a0);
    if (((((uVar5 & uVar3) == 1) && ((int)lVar7 == 1)) && ((uVar1 >> 4 & 1) != 0)) &&
       ((long *)plVar10[0x75] != (long *)0x0)) {
      (**(code **)(*(long *)plVar10[0x75] + 0x110))();
    }
  }
LAB_024a6fa8:
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  return;
}

