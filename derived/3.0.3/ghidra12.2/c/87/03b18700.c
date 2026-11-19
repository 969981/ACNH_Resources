
void FUN_03b18700(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  if (((*PTR_DAT_04bd1c88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd1c88), iVar1 != 0))
  {
    if (((DAT_04c62ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c62ed0), iVar1 != 0)) {
      DAT_04c62ec8 = 0;
      __cxa_guard_release(&DAT_04c62ed0);
    }
    *(undefined8 **)PTR_DAT_04bd1c80 = &DAT_04c62ec8;
    __cxa_guard_release(PTR_DAT_04bd1c88);
  }
  if (puVar3 == (undefined8 *)0x0) {
LAB_03b18784:
    FUN_00369da0(param_1,param_2);
    return;
  }
  puVar2 = (undefined8 *)(**(code **)*puVar3)(puVar3);
  if (puVar2 != (undefined8 *)PTR_DAT_04bd1c80) {
    do {
      puVar2 = (undefined8 *)*puVar2;
    } while (puVar2 != (undefined8 *)PTR_DAT_04bd1c80 && puVar2 != (undefined8 *)0x0);
    if (puVar2 == (undefined8 *)0x0) goto LAB_03b18784;
  }
  FUN_03b26a00(puVar3,*(undefined8 *)(param_1 + 0x30),param_2,0);
  return;
}

