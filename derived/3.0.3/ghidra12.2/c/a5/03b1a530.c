
undefined8 FUN_03b1a530(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x18) + 0x10) + 0x40) + 0x38) != 0) {
    if (param_3 == 0) {
      plVar6 = (long *)(param_4 + 0x30);
    }
    else {
      plVar6 = (long *)(param_4 + 0x38);
      if ((*(ushort *)(param_4 + 0x40) & 1) != 0) {
        param_3 = param_2;
        plVar6 = (long *)(param_4 + 0x30);
      }
      param_2 = param_3;
    }
    lVar1 = *(long *)(*plVar6 + 8) + 0xc;
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x40) + 0x68))
                       (*(long **)(param_1 + 0x40),*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48)
                        ,lVar1 + (ulong)*(uint *)(lVar1 + (ulong)*(ushort *)(param_2 + 0x5a) * 4));
    puVar2 = PTR_DAT_04bc0888;
    if (puVar5 != (undefined8 *)0x0) {
      if (((*PTR_DAT_04bc0890 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc0890), puVar3 = PTR_DAT_04bc0898, iVar4 != 0)) {
        if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar4 != 0)) {
          *(undefined8 *)puVar3 = 0;
          __cxa_guard_release(PTR_DAT_04bc08a0);
        }
        *(undefined **)puVar2 = puVar3;
        __cxa_guard_release(PTR_DAT_04bc0890);
      }
      puVar5 = (undefined8 *)(**(code **)*puVar5)();
      if (puVar5 != (undefined8 *)puVar2) {
        do {
          puVar5 = (undefined8 *)*puVar5;
        } while (puVar5 != (undefined8 *)puVar2 && puVar5 != (undefined8 *)0x0);
        if (puVar5 == (undefined8 *)0x0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

