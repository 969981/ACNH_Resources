
long * FUN_0328b6d0(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *local_40;
  undefined8 uStack_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  uStack_38 = *(undefined8 *)(param_2 + 8);
  local_40 = PTR_DAT_04bc8e68 + 0x10;
  if ((param_3 & 1) == 0) {
    plVar3 = (long *)FUN_032d3050(param_1,*param_1,&local_40);
    if (((*PTR_DAT_04bc8f58 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8f58), puVar1 = PTR_DAT_04bc8f30, iVar2 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar2 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)PTR_DAT_04bc8f50 = puVar1;
      __cxa_guard_release(PTR_DAT_04bc8f58);
    }
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
    if (puVar4 == (undefined8 *)PTR_DAT_04bc8f50) {
      return plVar3;
    }
    do {
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)PTR_DAT_04bc8f50 && puVar4 != (undefined8 *)0x0);
  }
  else {
    local_30 = local_40;
    uStack_28 = uStack_38;
    plVar3 = (long *)FUN_032d31f0(param_1,*param_1,&local_30);
    if (((*PTR_DAT_04bc8f58 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8f58), iVar2 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar2 != 0)) {
        *(undefined8 *)PTR_DAT_04bc8f30 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)PTR_DAT_04bc8f50 = PTR_DAT_04bc8f30;
      __cxa_guard_release(PTR_DAT_04bc8f58);
    }
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
    if (puVar4 == (undefined8 *)PTR_DAT_04bc8f50) {
      return plVar3;
    }
    do {
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)PTR_DAT_04bc8f50 && puVar4 != (undefined8 *)0x0);
  }
  if (puVar4 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  return plVar3;
}

