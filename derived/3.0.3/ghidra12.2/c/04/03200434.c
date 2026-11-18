
void FUN_03200434(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((*PTR_DAT_04bc8948 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc8948), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc8940 = PTR_DAT_04bc4c70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc8948);
  }
  if ((param_2 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc8940), (uVar2 & 1) != 0)) {
    if (*(int *)(param_2 + 0x43) != 0x1d) {
      *(undefined4 *)(param_2 + 0x43) = 0x1d;
      *(undefined1 *)((long)param_2 + 0x21d) = 1;
    }
    *(undefined4 *)((long)param_2 + 0x4c) = 0;
    *(undefined4 *)((long)param_2 + 0x3ec) = 0x41;
  }
  return;
}

