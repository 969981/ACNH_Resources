
void FUN_03902024(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((*PTR_DAT_04bd0f98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd0f98), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bd0f90 = PTR_DAT_04bd0fa0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd0f98);
  }
  uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bd0f90);
  if ((uVar2 & 1) == 0) {
    param_2 = (undefined8 *)0x0;
  }
  FUN_03901c40(param_1,param_2,0);
  return;
}

