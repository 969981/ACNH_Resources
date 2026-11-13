
void FUN_014d0d5c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x80);
  if (plVar4 != (long *)0x0) {
    if (((*PTR_DAT_04bb3e10 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3e10), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb3e08 = PTR_DAT_04bb3040 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3e10);
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,PTR_DAT_04bb3e08);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(plVar4[0x56] + 0x18);
      if ((*(byte *)(plVar4[0x56] + 8) & 10) != 2) {
        uVar3 = 0;
      }
      FUN_037a7828(uVar3,param_2);
      return;
    }
  }
  return;
}

