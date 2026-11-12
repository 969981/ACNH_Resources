
long FUN_00954300(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *local_40;
  long lStack_38;
  undefined8 local_18;
  
  if ((*(byte *)(param_1 + 0xc0) >> 1 & 1) != 0) {
    lVar4 = param_1 + 0xb8;
    uVar2 = FUN_03f2d924(lVar4);
    if ((uVar2 & 1) != 0) {
      FUN_03f2d924(lVar4);
      puVar3 = (undefined8 *)FUN_03f2d7f0(lVar4);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0);
      local_18 = 0;
      plVar6 = *(long **)puVar3[6];
      (**(code **)(*param_2 + 0x18))(param_2);
      lStack_38 = param_2[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      if (((*PTR_DAT_04bb2868 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar2 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb2860);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
      lVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,&local_18);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x110) >> 1 & 1) != 0) {
    lVar4 = param_1 + 0x108;
    uVar2 = FUN_03f2d924(lVar4);
    if ((uVar2 & 1) != 0) {
      FUN_03f2d924(lVar4);
      puVar3 = (undefined8 *)FUN_03f2d7f0(lVar4);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0);
      local_18 = 0;
      plVar6 = *(long **)puVar3[6];
      (**(code **)(*param_2 + 0x18))(param_2);
      lStack_38 = param_2[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      if (((*PTR_DAT_04bb2868 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar2 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb2860);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
      lVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,&local_18);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x160) >> 1 & 1) != 0) {
    lVar4 = param_1 + 0x158;
    uVar2 = FUN_03f2d924(lVar4);
    if ((uVar2 & 1) != 0) {
      FUN_03f2d924(lVar4);
      puVar3 = (undefined8 *)FUN_03f2d7f0(lVar4);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0);
      local_18 = 0;
      plVar6 = *(long **)puVar3[6];
      (**(code **)(*param_2 + 0x18))(param_2);
      lStack_38 = param_2[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      if (((*PTR_DAT_04bb2868 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar2 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb2860);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
      lVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,&local_18);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1b0) >> 1 & 1) != 0) {
    lVar4 = param_1 + 0x1a8;
    uVar2 = FUN_03f2d924(lVar4);
    if ((uVar2 & 1) != 0) {
      FUN_03f2d924(lVar4);
      puVar3 = (undefined8 *)FUN_03f2d7f0(lVar4);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0);
      local_18 = 0;
      plVar6 = *(long **)puVar3[6];
      (**(code **)(*param_2 + 0x18))(param_2);
      lStack_38 = param_2[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      if (((*PTR_DAT_04bb2868 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar2 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb2860);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
      lVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,&local_18);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x200) >> 1 & 1) != 0) {
    lVar4 = param_1 + 0x1f8;
    uVar2 = FUN_03f2d924(lVar4);
    if ((uVar2 & 1) != 0) {
      FUN_03f2d924(lVar4);
      puVar3 = (undefined8 *)FUN_03f2d7f0(lVar4);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0);
      local_18 = 0;
      plVar6 = *(long **)puVar3[6];
      (**(code **)(*param_2 + 0x18))(param_2);
      lStack_38 = param_2[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      if (((*PTR_DAT_04bb2868 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar2 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb2860);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
      lVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,&local_18);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x250) >> 1 & 1) != 0) {
    lVar4 = param_1 + 0x248;
    uVar2 = FUN_03f2d924(lVar4);
    if ((uVar2 & 1) != 0) {
      FUN_03f2d924(lVar4);
      puVar3 = (undefined8 *)FUN_03f2d7f0(lVar4);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0);
      local_18 = 0;
      plVar6 = *(long **)puVar3[6];
      (**(code **)(*param_2 + 0x18))(param_2);
      lStack_38 = param_2[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      if (((*PTR_DAT_04bb2868 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar2 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb2860);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
      lVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,&local_18);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x2a0) >> 1 & 1) != 0) {
    lVar4 = param_1 + 0x298;
    uVar2 = FUN_03f2d924(lVar4);
    if ((uVar2 & 1) != 0) {
      FUN_03f2d924(lVar4);
      puVar3 = (undefined8 *)FUN_03f2d7f0(lVar4);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0);
      local_18 = 0;
      plVar6 = *(long **)puVar3[6];
      (**(code **)(*param_2 + 0x18))(param_2);
      lStack_38 = param_2[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      if (((*PTR_DAT_04bb2868 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar2 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb2860);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
      lVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,&local_18);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x2f0) >> 1 & 1) != 0) {
    lVar4 = param_1 + 0x2e8;
    uVar2 = FUN_03f2d924(lVar4);
    if ((uVar2 & 1) != 0) {
      FUN_03f2d924(lVar4);
      puVar3 = (undefined8 *)FUN_03f2d7f0(lVar4);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0);
      local_18 = 0;
      plVar6 = *(long **)puVar3[6];
      (**(code **)(*param_2 + 0x18))(param_2);
      lStack_38 = param_2[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      if (((*PTR_DAT_04bb2868 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar2 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb2860);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
      lVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,&local_18);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x340) >> 1 & 1) != 0) {
    lVar4 = param_1 + 0x338;
    uVar2 = FUN_03f2d924(lVar4);
    if ((uVar2 & 1) != 0) {
      FUN_03f2d924(lVar4);
      puVar3 = (undefined8 *)FUN_03f2d7f0(lVar4);
      if (((*PTR_DAT_04bb4be8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4be8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4be0 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4be8);
      }
      (**(code **)*puVar3)(puVar3,PTR_DAT_04bb4be0);
      local_18 = 0;
      plVar6 = *(long **)puVar3[6];
      (**(code **)(*param_2 + 0x18))(param_2);
      lStack_38 = param_2[1];
      local_40 = PTR_DAT_04bb2020 + 0x10;
      if (((*PTR_DAT_04bb2868 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar2 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb2860);
      if ((uVar2 & 1) == 0) {
        plVar6 = (long *)0x0;
      }
      lVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_40,&local_18);
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  if (((*(byte *)(param_1 + 0x390) >> 1 & 1) != 0) &&
     (uVar2 = FUN_03f2d924(param_1 + 0x388), (uVar2 & 1) != 0)) {
    uVar5 = FUN_00817634(param_1 + 0x378);
    lVar4 = FUN_03c26b50(uVar5,param_2,0);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if (((*(byte *)(param_1 + 0x3e0) >> 1 & 1) != 0) &&
     (uVar2 = FUN_03f2d924(param_1 + 0x3d8), (uVar2 & 1) != 0)) {
    uVar5 = FUN_00817634(param_1 + 0x3c8);
    lVar4 = FUN_03c26b50(uVar5,param_2,0);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if (((*(byte *)(param_1 + 0x430) >> 1 & 1) != 0) &&
     (uVar2 = FUN_03f2d924(param_1 + 0x428), (uVar2 & 1) != 0)) {
    uVar5 = FUN_00817634(param_1 + 0x418);
    lVar4 = FUN_03c26b50(uVar5,param_2,0);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  return 0;
}

