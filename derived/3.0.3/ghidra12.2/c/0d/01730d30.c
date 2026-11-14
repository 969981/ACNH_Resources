
void FUN_01730d30(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar1 = *(uint *)PTR_DAT_04bb32f8, uVar1 != 0)) &&
      (plVar5 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar5 != (long *)0x0)) &&
     (((*(uint *)(plVar5 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar5 + 0x46) == uVar1)))) {
    lVar2 = plVar5[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3278);
    if (((uVar4 & 1) != 0) && ((int)lVar2 == 1)) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((long)plVar5 + 0x274);
    }
  }
  *(undefined1 *)(param_1 + 0x16c) = 1;
  return;
}

