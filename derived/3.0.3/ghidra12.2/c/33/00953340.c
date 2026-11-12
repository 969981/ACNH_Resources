
long FUN_00953340(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined *local_38;
  long lStack_30;
  undefined8 local_28;
  
  if ((*(byte *)(param_1 + 0x480) >> 1 & 1) != 0) {
    uVar2 = FUN_03f2d924(param_1 + 0x478);
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined8 *)FUN_03f2d7f0(param_1 + 0x478);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      if (((puVar3 != (undefined8 *)0x0) &&
          (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0), (uVar2 & 1) != 0)) &&
         ((undefined8 *)puVar3[6] != (undefined8 *)0x0)) {
        local_28 = 0;
        plVar5 = *(long **)puVar3[6];
        (**(code **)(*param_2 + 0x18))(param_2);
        lStack_30 = param_2[1];
        local_38 = PTR_DAT_04bb2020 + 0x10;
        if (((*PTR_DAT_04bb2868 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2868);
        }
        uVar2 = (**(code **)*plVar5)(plVar5,PTR_DAT_04bb2860);
        if ((uVar2 & 1) == 0) {
          plVar5 = (long *)0x0;
        }
        lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_38,&local_28);
        if (lVar4 != 0) {
          return lVar4;
        }
      }
    }
  }
  return 0;
}

