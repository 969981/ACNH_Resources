
void FUN_02e2f674(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *local_30;
  undefined4 local_28;
  
  plVar5 = *(long **)(param_1 + 0x318);
  if ((int)plVar5[0x36] != 0) {
    return;
  }
  if (*(uint *)(plVar5 + 0x15) < 7 && (1 << (ulong)(*(uint *)(plVar5 + 0x15) & 0x1f) & 0x58U) != 0)
  {
    FUN_02eeb90c(plVar5,param_1 + 800);
    (**(code **)(**(long **)(param_1 + 0x318) + 0xa8))();
    uVar2 = nn::os::GetSystemTick();
    uVar4 = *(uint *)(param_1 + 0x324);
    *(undefined8 *)(param_1 + 0x360) = uVar2;
    if (uVar4 == 8) {
      puVar6 = (undefined8 *)(param_1 + 0x210) + *(uint *)(param_1 + 0x324);
      if (0x20 < *(uint *)(param_1 + 0x324)) {
        puVar6 = (undefined8 *)(param_1 + 0x210);
      }
      puVar6 = (undefined8 *)*puVar6;
      if (((*PTR_DAT_04bc6ae8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6ae8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc6ae0 = PTR_DAT_04bc6a68 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc6ae8);
      }
      if ((puVar6 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc6ae0), (uVar3 & 1) != 0)) {
        puVar6 = *(undefined8 **)puVar6[0x7f];
        if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e60);
        }
        uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
        if ((uVar3 & 1) == 0) {
          puVar6 = (undefined8 *)0x0;
        }
        plVar5 = *(long **)puVar6[0x45];
        if (plVar5 != (long *)0x0) {
          local_30 = PTR_DAT_04bc4e68 + 0x10;
          local_28 = 1;
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
          (**(code **)(plVar5[3] + 400))(0x3f800000,plVar5[1]);
        }
      }
      uVar4 = *(uint *)(param_1 + 0x324);
    }
    if ((uVar4 & 0xfffffffe) != 0x1c) {
      return;
    }
    puVar6 = (undefined8 *)(param_1 + 0x210) + *(uint *)(param_1 + 0x324);
    if (0x20 < *(uint *)(param_1 + 0x324)) {
      puVar6 = (undefined8 *)(param_1 + 0x210);
    }
    puVar6 = (undefined8 *)*puVar6;
    if (((*PTR_DAT_04bc6b68 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6b68), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc6b60 = PTR_DAT_04bc6a68 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc6b68);
    }
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc6b60);
    if ((uVar3 & 1) == 0) {
      return;
    }
    puVar6 = *(undefined8 **)puVar6[0x7f];
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
    if ((uVar3 & 1) == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    plVar5 = *(long **)puVar6[0x45];
    if (plVar5 == (long *)0x0) {
      return;
    }
    local_30 = PTR_DAT_04bc4e68 + 0x10;
    local_28 = 1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
    (**(code **)(plVar5[3] + 400))(0x3f800000,plVar5[1]);
    return;
  }
  uVar2 = (**(code **)(*plVar5 + 0x50))(plVar5);
  iVar1 = (int)plVar5[0x15];
  if (iVar1 == 5) {
    local_30._0_4_ = 6;
  }
  else {
    local_30._0_4_ = iVar1;
    if (iVar1 != 2) goto LAB_02e2f900;
    FUN_038693c0(uVar2,plVar5);
    local_30._0_4_ = 3;
  }
  if (((int)local_30 == 5) || ((int)local_30 == 2)) {
    *(undefined1 *)((long)plVar5 + 0x165) = 0;
  }
  *(int *)(plVar5 + 0x15) = (int)local_30;
LAB_02e2f900:
  *(undefined1 *)(param_1 + 0x164) = 0;
                    /* WARNING: Could not recover jumptable at 0x02e2f91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5);
  return;
}

