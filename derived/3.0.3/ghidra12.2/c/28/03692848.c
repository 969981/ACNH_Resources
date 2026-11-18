
void FUN_03692848(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb27c0;
  if ((int)param_2 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x278) <= (int)param_2) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar8 = *(uint *)(*(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8) + 0x40);
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto joined_r0x03692918;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03692918;
    }
  }
  uVar8 = 0;
joined_r0x03692918:
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3740);
    if (((uVar8 & uVar3) == 1) && (plVar7 = (long *)plVar7[0xc], plVar7 != (long *)0x0)) {
      if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37b8);
      }
      uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb37b0);
      if ((uVar5 & 1) != 0) {
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "NpcGreeting";
        FUN_017081d0(plVar7,&local_30,6,0,0);
      }
    }
  }
  return;
}

