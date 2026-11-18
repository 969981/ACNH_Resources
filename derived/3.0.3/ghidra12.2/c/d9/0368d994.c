
void FUN_0368d994(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_04bb27c0;
  if ((int)param_2 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x278) <= (int)param_2) {
    return;
  }
  uVar7 = *(uint *)(*(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8) + 0x40);
  if (uVar7 == 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return;
  }
  plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) + ((ulong)(uVar7 >> 0x11) & 0x7ff8));
  if (((plVar6 == (long *)0x0) || ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar6 + 0x46) != uVar7)) {
    plVar6 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar7 = 1;
      goto joined_r0x0368da68;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0368da68;
    }
  }
  uVar7 = 0;
joined_r0x0368da68:
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb3748 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3748);
    }
    uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3740);
    if (((uVar7 & uVar3) == 1) && (plVar6 = (long *)plVar6[0xd], plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0368dad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x140))(plVar6,param_3,1);
      return;
    }
  }
  return;
}

