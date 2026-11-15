
void FUN_02348888(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  FUN_01704720();
  plVar3 = *(long **)(param_1 + 0x48);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770), (uVar2 & 1) == 0)) {
    return;
  }
  FUN_0230f780(plVar3,0);
  return;
}

