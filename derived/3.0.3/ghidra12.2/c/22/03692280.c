
undefined8 FUN_03692280(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (param_2 < *(uint *)(param_1 + 0x278)) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x280) + (long)(int)param_2 * 8);
  }
  else {
    lVar7 = 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar9 = *(uint *)(lVar7 + 0x40);
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
      goto joined_r0x03692360;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03692360;
    }
  }
  uVar9 = 0;
joined_r0x03692360:
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3740);
    if (((uVar9 & uVar3) == 1) && (plVar8 = (long *)plVar8[0xc], plVar8 != (long *)0x0)) {
      if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37b8);
      }
      uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb37b0);
      if (((uVar5 & 1) != 0) &&
         ((*(byte *)(*(long *)(*(long *)(param_1 + 0x280) + (long)(int)param_2 * 8) + 0x48) >> 2 & 1
          ) != 0)) {
        local_40 = PTR_DAT_04bb2020 + 0x10;
        pcStack_38 = "MaReShocked";
        FUN_017081d0(plVar8,&local_40,6,0,0);
        return 1;
      }
    }
  }
  return 0;
}

