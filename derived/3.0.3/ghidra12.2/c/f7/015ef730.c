
long FUN_015ef730(long param_1,long *param_2,long param_3,ulong param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_60 [16];
  
  lVar5 = 0;
  if (((~(uint)param_4 & 0xffff) != 0) && ((param_4 & 0xffff0000) != 0xffff0000)) {
    iVar2 = (**(code **)(*param_2 + 0x30))(param_2);
    if (iVar2 == 2) {
      plVar6 = (long *)param_2[2];
      if (((*PTR_DAT_04bbd608 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbd608), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbd600 = PTR_DAT_04bbd5e8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbd608);
      }
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bbd600);
        if ((uVar3 & 1) == 0) {
          plVar6 = (long *)0x0;
        }
      }
      lVar5 = FUN_015ef51c(param_1,plVar6);
    }
    else {
      if (iVar2 != 1) {
        return 0;
      }
      plVar6 = (long *)param_2[2];
      if (((*PTR_DAT_04bbd5e0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbd5e0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bbd5d8 = PTR_DAT_04bbd5e8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbd5e0);
      }
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bbd5d8);
        if ((uVar3 & 1) == 0) {
          plVar6 = (long *)0x0;
        }
      }
      lVar5 = FUN_015ef2fc(param_1,plVar6);
    }
    if (lVar5 != 0) {
      piVar1 = (int *)(&LAB_007a6498 + param_1);
      nn::os::LockMutex((MutexType *)(param_1 + 0x7a6478));
      if (*piVar1 < *(int *)(&LAB_007a649c + param_1)) {
        *(long *)(*(long *)(&LAB_007a64a0 + param_1) + (long)*piVar1 * 8) = lVar5;
        *piVar1 = *piVar1 + 1;
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a6478));
      *(uint *)(lVar5 + 0x30) = (uint)param_4;
      *(long **)(lVar5 + 0x20) = param_2;
      *(long *)(lVar5 + 0x28) = param_3;
      (**(code **)(*(long *)**(undefined8 **)
                              (*(long *)(param_3 + 0x38) +
                              (-(param_4 >> 0xf & 1) & 0xfffffffffff80000 | (param_4 & 0xffff) << 3)
                              ) + 0x28))(auStack_60);
      plVar6 = (long *)(**(code **)(*(long *)(*(long *)(lVar5 + 0x10) + 0x2e8) + 0xf0))
                                 (*(long *)(lVar5 + 0x10) + 0x2e8);
      (**(code **)(*plVar6 + 0x10))(plVar6,auStack_60);
      uVar4 = 8;
      if ((param_5 & 1) == 0) {
        uVar4 = 0;
      }
      *(uint *)(lVar5 + 0x38) = *(uint *)(lVar5 + 0x38) & 0xfffffff7 | uVar4;
    }
  }
  return lVar5;
}

