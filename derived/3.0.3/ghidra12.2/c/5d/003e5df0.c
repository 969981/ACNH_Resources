
void FUN_003e5df0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  *param_1 = 0;
  puVar1 = PTR_DAT_04bd0280;
  if ((param_2 != (undefined8 *)0x0) && (plVar6 = (long *)*param_2, plVar6 != (long *)0x0)) {
    if (((*PTR_DAT_04bd0278 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd0278), iVar2 != 0)) {
      uVar5 = FUN_003cfdc4();
      *(undefined8 *)puVar1 = uVar5;
      __cxa_guard_release(PTR_DAT_04bd0278);
    }
    puVar3 = (undefined8 *)(**(code **)*plVar6)(plVar6);
    if (puVar3 != (undefined8 *)puVar1) {
      do {
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)puVar1 && puVar3 != (undefined8 *)0x0);
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
    }
    *param_1 = (long)plVar6;
    uVar4 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*(long *)*param_1 + 0x38))();
    }
    *(long **)(*param_1 + 0x220) = param_1;
  }
  return;
}

