
void FUN_03b1bec0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = (long)&PTR_FUN_04b73bb8;
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 != 0xffffffff) {
    lVar6 = param_1[4];
    uVar1 = uVar2;
    if (*(uint *)(lVar6 + 0x18) <= uVar2) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar6 + 0x20) + (long)(int)uVar1) = 0xff;
    if (*(uint *)(lVar6 + 8) <= uVar2) {
      uVar2 = 0;
    }
    *(undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar2 * 8) = 0;
  }
  lVar6 = *(long *)(param_1[4] + 0x3f8);
  if (lVar6 != 0) {
    if ((long *)param_1[0x11] != param_1 + 0x10) {
      lVar9 = (long)*(int *)((long)param_1 + 0x94);
      lVar8 = param_1[0x11] - lVar9;
      do {
        FUN_03b1f3a0(lVar6,lVar8);
        lVar8 = *(long *)(lVar8 + lVar9 + 8) - lVar9;
      } while (lVar8 != (long)(param_1 + 0x10) - lVar9);
    }
  }
  for (plVar7 = (long *)param_1[8]; plVar7 != param_1 + 7; plVar7 = (long *)plVar7[1]) {
    (**(code **)(plVar7[-1] + 0x10))(plVar7 + -1);
  }
  for (plVar7 = (long *)param_1[10]; plVar7 != param_1 + 9; plVar7 = (long *)plVar7[1]) {
    (**(code **)(plVar7[-1] + 0x10))(plVar7 + -1);
  }
  if ((long *)param_1[0x19] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x19] + 0x10))();
  }
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 8))();
  }
  if (param_1[5] == 0) goto LAB_03b1c118;
  plVar7 = *(long **)(param_1[5] + 0x40);
  if ((*(byte *)((long)param_1 + 0xe6) & 10) == 2) {
    FUN_00367a40(PTR_LAB_04bd1da0,PTR_LAB_04bd1d98,param_1[0x13]);
    FUN_00367be0(param_1[5],*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48));
    if ((long *)param_1[5] != (long *)0x0) {
      (**(code **)(*(long *)param_1[5] + 0x10))();
    }
    FUN_00367a40(0,0,0);
    param_1[5] = 0;
  }
  if (plVar7 == (long *)0x0) goto LAB_03b1c118;
  (**(code **)(*plVar7 + 0x20))(plVar7,PTR_LAB_04bd1d90,0);
  FUN_00367a40(PTR_LAB_04bd1da0,PTR_LAB_04bd1d98,param_1[0x13]);
  puVar3 = PTR_DAT_04bd1c80;
  if (((*PTR_DAT_04bd1c88 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1c88), iVar4 != 0))
  {
    if (((DAT_04c62ed0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c62ed0), iVar4 != 0)) {
      DAT_04c62ec8 = 0;
      __cxa_guard_release(&DAT_04c62ed0);
    }
    *(undefined8 **)puVar3 = &DAT_04c62ec8;
    __cxa_guard_release(PTR_DAT_04bd1c88);
  }
  puVar5 = (undefined8 *)(**(code **)*plVar7)(plVar7);
  if (puVar5 == (undefined8 *)puVar3) {
LAB_03b1c0e8:
    (**(code **)(*plVar7 + 0x38))(plVar7,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48));
  }
  else {
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)puVar3 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) goto LAB_03b1c0e8;
  }
  FUN_00367a40(0,0,0);
LAB_03b1c118:
  lVar6 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar7 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

