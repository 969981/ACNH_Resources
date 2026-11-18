
long * FUN_032cbb30(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *local_40;
  undefined *puStack_38;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar2 = (undefined *)FUN_00364d70(param_2,param_3[1]);
  local_40 = PTR_DAT_04bc8e68 + 0x10;
  puStack_38 = PTR_DAT_04bb2120;
  if (puVar2 != (undefined *)0x0) {
    puStack_38 = puVar2;
  }
  plVar3 = (long *)FUN_032c0120(param_1,&local_40,0);
  if (((*PTR_DAT_04bc9008 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc9008), puVar2 = PTR_DAT_04bc8f30, iVar1 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar1 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bc9000 = puVar2;
    __cxa_guard_release(PTR_DAT_04bc9008);
  }
  if (plVar3 != (long *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
    if (puVar4 == (undefined8 *)PTR_DAT_04bc9000) {
      return plVar3;
    }
    do {
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)PTR_DAT_04bc9000 && puVar4 != (undefined8 *)0x0);
    if (puVar4 != (undefined8 *)0x0) {
      return plVar3;
    }
  }
  return (long *)0x0;
}

