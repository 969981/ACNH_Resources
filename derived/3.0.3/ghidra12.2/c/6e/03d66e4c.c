
undefined8 FUN_03d66e4c(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((*PTR_DAT_04bc4d48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d48), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d40 = PTR_DAT_04bc4d50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d48);
  }
  if (((param_2 != (long *)0x0) &&
      (uVar2 = (**(code **)*param_2)(param_2,PTR_DAT_04bc4d40), (uVar2 & 1) != 0)) &&
     (((long *)param_2[0x36] == (long *)0x0 ||
      (uVar2 = (**(code **)(*(long *)param_2[0x36] + 0x90))(), (uVar2 & 1) == 0)))) {
    (**(code **)(*param_2 + 0xa8))(param_2);
  }
  return 0;
}

