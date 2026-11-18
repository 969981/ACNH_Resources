
long * FUN_032d3740(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar4 = PTR_DAT_04bc9008;
  puVar3 = PTR_DAT_04bc9000;
  puVar2 = PTR_DAT_04bc8f38;
  puVar1 = PTR_DAT_04bc8f30;
  while( true ) {
    param_1 = (long *)param_1[3];
    if (param_1 == (long *)0x0) {
      return (long *)0x0;
    }
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(puVar2);
      }
      *(undefined **)puVar3 = puVar1;
      __cxa_guard_release(puVar4);
    }
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar6 == (undefined8 *)puVar3) break;
    do {
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)puVar3 && puVar6 != (undefined8 *)0x0);
    if (puVar6 != (undefined8 *)0x0) {
      return param_1;
    }
  }
  return param_1;
}

