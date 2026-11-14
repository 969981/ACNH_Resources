
undefined8 * FUN_01ba92f0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*PTR_DAT_04bc0890 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0890);
    puVar1 = PTR_DAT_04bc0898;
    if (iVar2 != 0) {
      if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar2 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_04bc08a0);
      }
      *(undefined **)PTR_DAT_04bc0888 = puVar1;
      __cxa_guard_release(PTR_DAT_04bc0890);
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)(**(code **)*param_2)(param_2);
    if (puVar3 == (undefined8 *)PTR_DAT_04bc0888) goto LAB_01ba9358;
    do {
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != (undefined8 *)PTR_DAT_04bc0888 && puVar3 != (undefined8 *)0x0);
    if (puVar3 != (undefined8 *)0x0) goto LAB_01ba9358;
  }
  param_2 = (undefined8 *)0x0;
LAB_01ba9358:
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_01ba9190("NormalL_00.fcpx");
    param_1[1] = (long)puVar3;
    puVar4 = (undefined8 *)*param_1;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_01ba9190("Normal_00.fcpx");
    *param_1 = (long)puVar4;
  }
  if ((puVar4 == (undefined8 *)0x0) || (param_2 != puVar3 && param_2 != puVar4)) {
    puVar3 = (undefined8 *)param_1[3];
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_01ba9190("SystemL_00.fcpx");
      param_1[3] = (long)puVar3;
      puVar4 = (undefined8 *)param_1[4];
    }
    else {
      puVar4 = (undefined8 *)param_1[4];
    }
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_01ba9190("SystemB_00.fcpx");
      param_1[4] = (long)puVar4;
    }
    if (param_2 != puVar4 && param_2 != puVar3) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    param_2 = puVar4;
  }
  return param_2;
}

