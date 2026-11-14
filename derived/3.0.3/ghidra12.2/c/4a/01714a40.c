
void FUN_01714a40(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x48);
  if (((*PTR_DAT_04bb3760 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  if (((plVar4 != (long *)0x0) &&
      (uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3758), (uVar2 & 1) != 0)) &&
     (lVar3 = plVar4[0x5b], lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x60) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined4 *)(plVar4[0x5b] + 0x54) = 0;
  }
  return;
}

