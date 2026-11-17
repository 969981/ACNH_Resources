
void FUN_02a8d314(long param_1,ulong param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2f8));
  puVar2 = PTR_DAT_04bb27c0;
  if (((int)param_2 == 0) || (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 == 0)) goto LAB_02a8d430;
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + (param_2 >> 0x14 & 0xfff) * 8);
  if ((plVar7 == (long *)0x0) ||
     (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || ((int)plVar7[0x46] != (int)param_2)))) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_02a8d3d8;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02a8d3d8:
    uVar8 = 0;
  }
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb42b0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb42b0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb42a8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb42b0);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb42a8);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      *(undefined4 *)(plVar7 + 0x51) = param_3;
    }
  }
LAB_02a8d430:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2f8));
  return;
}

