
bool FUN_0152015c(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  byte local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  int local_14;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8), lVar7 != 0)) {
        local_38 = lVar7;
      }
    }
  }
  FUN_01afade0(&local_48,param_1[6]);
  local_70 = PTR_DAT_04bb2010 + 0x10;
  local_50 = *PTR_DAT_04bb32e0;
  local_78 = local_40;
  uStack_74 = uStack_3c;
  if (7 < local_50) {
    local_50 = 0xff;
  }
  local_68 = param_1[4];
  uStack_64 = param_1[5];
  local_60 = FUN_01ae98d0(&local_48);
  local_5c = FUN_01afb8e8(&local_48);
  puVar1 = PTR_DAT_04bb27c0;
  local_4c = 0;
  uStack_58 = 1;
  local_54 = param_1[7];
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return false;
  }
  uVar2 = *(uint *)(DAT_0520f098 + 0x10);
  if ((((uVar2 == 0) ||
       (plVar6 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar6 == (long *)0x0)) ||
      ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar6 + 0x46) != uVar2)) {
    plVar6 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar2 = 1;
      goto joined_r0x0152034c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar2 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0152034c;
    }
  }
  uVar2 = 0;
joined_r0x0152034c:
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb7d50);
    if ((uVar5 & 1) != 0) {
      local_14 = 0;
      if (uVar2 == 0) {
        return false;
      }
      FUN_01491790(plVar6,&local_14,&local_78);
      return local_14 == 9;
    }
  }
  return false;
}

