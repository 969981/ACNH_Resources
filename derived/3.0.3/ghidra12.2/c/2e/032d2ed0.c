
void FUN_032d2ed0(undefined8 param_1,long *param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if ((param_5 & 1) != 0) {
    (**(code **)*param_3)(param_3,param_2);
  }
  puVar3 = PTR_DAT_04bc9000;
  if (((*PTR_DAT_04bc9008 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc9008), puVar2 = PTR_DAT_04bc8f30, iVar4 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_04bc9008);
  }
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
  if (puVar5 == (undefined8 *)puVar3) {
LAB_032d2f64:
    if ((param_4 & 1) == 0) goto LAB_032d2fa8;
  }
  else {
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)puVar3 && puVar5 != (undefined8 *)0x0);
    if (puVar5 != (undefined8 *)0x0) goto LAB_032d2f64;
  }
  plVar1 = (long *)param_2[5];
  while (plVar1 != param_2 + 4) {
    plVar6 = (long *)plVar1[1];
    FUN_032d2ed0(param_1,plVar1 + -1,param_3,param_4 & 1,param_5 & 1);
    plVar1 = plVar6;
  }
LAB_032d2fa8:
  if ((param_5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x032d2fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_3)(param_3,param_2);
    return;
  }
  return;
}

