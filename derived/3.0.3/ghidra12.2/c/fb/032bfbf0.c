
long * FUN_032bfbf0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *local_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 8);
  local_30 = PTR_DAT_04bc8e68 + 0x10;
  plVar3 = (long *)FUN_032d32b0(param_1,&local_30);
  if (((*PTR_DAT_04bc9328 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc9328), puVar1 = PTR_DAT_04bc8f30, iVar2 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bc9320 = puVar1;
    __cxa_guard_release(PTR_DAT_04bc9328);
  }
  if (plVar3 != (long *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
    if (puVar4 == (undefined8 *)PTR_DAT_04bc9320) {
      return plVar3;
    }
    do {
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)PTR_DAT_04bc9320 && puVar4 != (undefined8 *)0x0);
    if (puVar4 != (undefined8 *)0x0) {
      return plVar3;
    }
  }
  return (long *)0x0;
}

