
/* WARNING: Removing unreachable block (ram,0x0241c4c8) */

void FUN_0241c48c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*(long *)(param_1 + 0xdc8) == 0) {
    uVar7 = *(uint *)PTR_DAT_04bb3238;
  }
  else {
    local_14 = 5;
    uVar7 = *(uint *)(*(long *)PTR_DAT_04bb4128 + 0x370);
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  if ((((uVar7 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + (ulong)(uVar7 >> 0x14) * 8),
       plVar8 == (long *)0x0)) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar7)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar7 = 1;
      goto joined_r0x0241c580;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0241c580;
    }
  }
  uVar7 = 0;
joined_r0x0241c580:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bb4160 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4160);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb4158);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar7;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      local_18 = 5;
      FUN_02269394(&local_18);
    }
  }
  return;
}

