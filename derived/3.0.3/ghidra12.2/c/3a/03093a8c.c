
void FUN_03093a8c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((*PTR_DAT_04bc8050 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc8050), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc8048 = PTR_DAT_04bc4c70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc8050);
  }
  if ((param_2 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc8048), (uVar2 & 1) != 0)) {
    *(undefined4 *)((long)param_2 + 0x3ec) = 0x2d;
  }
  return;
}

