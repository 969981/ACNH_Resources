
void FUN_03147940(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((*PTR_DAT_04bc8500 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc8500), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc84f8 = PTR_DAT_04bc4c70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc8500);
  }
  if (((param_2 != (undefined8 *)0x0) &&
      (uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc84f8), (uVar2 & 1) != 0)) &&
     (*(int *)(param_2 + 0x43) != 4)) {
    *(undefined4 *)(param_2 + 0x43) = 4;
    *(undefined1 *)((long)param_2 + 0x21d) = 1;
  }
  return;
}

