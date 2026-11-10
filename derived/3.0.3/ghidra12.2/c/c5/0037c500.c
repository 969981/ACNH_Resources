
void FUN_0037c500(undefined8 param_1,float *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  *(undefined1 **)param_2 = &DAT_3f8000003f800000;
  puVar4 = PTR_DAT_04bc9008;
  puVar3 = PTR_DAT_04bc9000;
  puVar2 = PTR_DAT_04bc8f38;
  puVar1 = PTR_DAT_04bc8f30;
  if (param_3 != (long *)0x0) {
    do {
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
          *(undefined8 *)puVar1 = 0;
          __cxa_guard_release(puVar2);
        }
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3);
      if (puVar6 == (undefined8 *)puVar3) {
        return;
      }
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)puVar3 && puVar6 != (undefined8 *)0x0);
      if (puVar6 != (undefined8 *)0x0) {
        return;
      }
      *param_2 = *param_2 * *(float *)(param_3 + 9);
      param_2[1] = param_2[1] * *(float *)((long)param_3 + 0x4c);
      param_3 = (long *)param_3[3];
    } while (param_3 != (long *)0x0);
  }
  return;
}

