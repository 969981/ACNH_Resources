
void FUN_01eed7e8(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  FUN_0071c8d0(param_1,PTR_DAT_04bc2178,param_2,0);
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    if ((*PTR_DAT_04bc2160 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2160);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bc2158 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc2160);
      }
    }
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bc2158);
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
  }
  return;
}

