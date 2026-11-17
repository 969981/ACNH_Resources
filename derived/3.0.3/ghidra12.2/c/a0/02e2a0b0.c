
void FUN_02e2a0b0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x43) != 0x1d) {
    *(undefined4 *)(param_2 + 0x43) = 0x1d;
    *(undefined1 *)((long)param_2 + 0x21d) = 1;
  }
  if (((*PTR_DAT_04bc6aa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6aa8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc6aa0 = PTR_DAT_04bc6a68 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6aa8);
  }
  uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc6aa0);
  if ((uVar2 & 1) == 0) {
    if (((*PTR_DAT_04bc6ae8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6ae8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc6ae0 = PTR_DAT_04bc6a68 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc6ae8);
    }
    uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc6ae0);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0x37;
      goto LAB_02e2a140;
    }
  }
  uVar3 = 0x39;
LAB_02e2a140:
  *(undefined4 *)((long)param_2 + 0x3ec) = uVar3;
  return;
}

