
void FUN_01c8f9ac(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  FUN_0071ca50(param_1,param_2,0);
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    if ((*PTR_DAT_04bb3778 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3778);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
    }
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)((long)param_1 + 10) = 0;
    }
  }
  return;
}

