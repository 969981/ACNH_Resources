
bool FUN_02523aa0(byte *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar9 = *puVar1;
  }
  else {
    uVar9 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar9 == 0) {
    return false;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return false;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  local_34 = param_2;
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x02523ba0;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02523ba0;
    }
  }
  uVar9 = 0;
joined_r0x02523ba0:
  if (plVar8 == (long *)0x0) {
    return false;
  }
  lVar7 = plVar8[0x2a];
  uVar2 = *(uint *)(plVar8 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
  if ((int)lVar7 != 1) {
    return false;
  }
  if ((uVar5 & uVar9) == 0) {
    return false;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return false;
  }
  local_40 = 0;
  local_38 = 6;
  local_60 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_58 = PTR_DAT_04bb2010 + 0x10;
  lVar7 = plVar8[0xd];
  local_50 = 0;
  if (lVar7 == 0) {
    return false;
  }
  puStack_48 = puStack_58;
  if (local_34 == 3) {
    local_38 = FUN_015193b8(&local_60,lVar7 + 0x278,lVar7 + 0x2b4,0);
  }
  else if (local_34 == 1) {
    local_38 = FUN_0151897c(&local_60,lVar7 + 0x278,lVar7 + 0x2b4,0);
  }
  else if (local_34 == 0) {
    local_38 = FUN_01517930(&local_60,lVar7 + 0x278,lVar7 + 0x2b4,0);
  }
  return local_38 == 0;
}

