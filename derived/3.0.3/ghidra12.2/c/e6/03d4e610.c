
undefined8
FUN_03d4e610(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x3d) == '\0') {
    puVar3 = (undefined8 *)FUN_0038a89c(param_2);
    if (((*PTR_DAT_04bc0890 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0890), puVar1 = PTR_DAT_04bc0898, iVar2 != 0)) {
      if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar2 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_04bc08a0);
      }
      *(undefined **)PTR_DAT_04bc0888 = puVar1;
      __cxa_guard_release(PTR_DAT_04bc0890);
    }
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)(**(code **)*puVar3)(puVar3);
      if (puVar4 == (undefined8 *)PTR_DAT_04bc0888) {
        if (param_4 != 0) goto LAB_03d4e6c0;
      }
      else {
        do {
          puVar4 = (undefined8 *)*puVar4;
        } while (puVar4 != (undefined8 *)PTR_DAT_04bc0888 && puVar4 != (undefined8 *)0x0);
        if ((param_4 != 0) && (puVar4 != (undefined8 *)0x0)) {
LAB_03d4e6c0:
          uVar5 = FUN_03b0e4b0(*(undefined8 *)(param_1 + 0x10),param_3,param_4,puVar3,param_5,0);
          return uVar5;
        }
      }
    }
  }
  return 0;
}

