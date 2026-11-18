
long * FUN_0328b570(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *local_40;
  undefined *puStack_38;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar3 = (undefined *)FUN_00364d70(param_2,param_3[1]);
  puStack_38 = PTR_DAT_04bb2120;
  if (puVar3 != (undefined *)0x0) {
    puStack_38 = puVar3;
  }
  local_40 = PTR_DAT_04bc8e68 + 0x10;
  plVar4 = (long *)FUN_032d3050(param_1,*param_1,&local_40);
  puVar1 = PTR_DAT_04bc8f38;
  puVar3 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar2 != 0))
  {
    *(undefined8 *)puVar3 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar4 != (long *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
    if (puVar5 == (undefined8 *)puVar3) goto LAB_0328b62c;
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)puVar3 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) goto LAB_0328b62c;
  }
  plVar4 = (long *)0x0;
LAB_0328b62c:
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar2 != 0)) {
    *(undefined8 *)puVar3 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar4 != (long *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
    if (puVar5 == (undefined8 *)puVar3) {
      return plVar4;
    }
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)puVar3 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) {
      return plVar4;
    }
  }
  return (long *)0x0;
}

