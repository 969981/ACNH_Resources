
undefined8 * FUN_01ba9190(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *local_30;
  undefined8 uStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x400) + 8);
  plVar4 = *(long **)(lVar6 + 8);
  uStack_28 = param_1;
  if ((plVar4 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_30), (int)uVar2 < 0)) {
    if (*(long *)(lVar6 + 0x38) == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)FUN_03b0e360(*(long *)(lVar6 + 0x38),&local_30);
    }
  }
  else {
    if (*(uint *)(lVar6 + 0x10) <= uVar2) {
      uVar2 = 0;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x18) + (ulong)uVar2 * 0x108);
  }
  if (((*PTR_DAT_04bc0890 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc0890), puVar1 = PTR_DAT_04bc0898, iVar3 != 0)) {
    if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar3 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04bc08a0);
    }
    *(undefined **)PTR_DAT_04bc0888 = puVar1;
    __cxa_guard_release(PTR_DAT_04bc0890);
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(**(code **)*puVar7)(puVar7);
    if (puVar5 == (undefined8 *)PTR_DAT_04bc0888) {
      return puVar7;
    }
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)PTR_DAT_04bc0888 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) {
      return puVar7;
    }
  }
  return (undefined8 *)0x0;
}

