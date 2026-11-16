
undefined8 FUN_02528cb0(byte *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined4 local_46;
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar6 = *puVar1;
  }
  else {
    uVar6 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar6 == 0) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar6 >> 0x11) & 0x7ff8));
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar6)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar6 = 1;
      goto joined_r0x02528f58;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02528f58;
    }
  }
  uVar6 = 0;
joined_r0x02528f58:
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar10[0x2a];
  uVar2 = *(uint *)(plVar10 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
  puVar3 = PTR_DAT_04bb43c0;
  if ((int)lVar9 != 1) {
    return 0;
  }
  if ((uVar5 & uVar6) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  local_5c = 0;
  local_48 = 0x100;
  local_7c = *param_2;
  uStack_78 = param_2[1];
  local_64 = 0;
  local_46 = 0;
  local_58 = 0;
  local_74 = 0x200000004;
  local_68 = 1;
  local_50 = 0x3f80000000000000;
  local_6c = 0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar3;
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_88 = 0;
      local_90 = *param_2;
      uStack_8c = param_2[1];
      local_98 = PTR_DAT_04bc0510 + 0x10;
      uVar6 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(param_2);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
            local_88 = lVar9;
          }
        }
      }
      uVar8 = FUN_01ad673c(&local_98);
      if ((uVar8 & 1) != 0) {
        local_46 = CONCAT13(1,(undefined3)local_46);
      }
    }
  }
  FUN_0236cba0(plVar10,&local_7c);
  return 1;
}

