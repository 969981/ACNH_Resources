
void FUN_008f9db8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 ,uint param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  if (((((*(char *)(param_1 + 0x430) == '\0') && (*(long *)PTR_DAT_04bb27c0 != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x274), uVar1 != 0)) &&
      ((plVar4 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar4 != (long *)0x0 &&
       ((*(uint *)(plVar4 + 0x49) >> 1 & 1) == 0)))) && (*(uint *)(plVar4 + 0x46) == uVar1)) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb32b8);
    if ((uVar3 & 1) != 0) {
      FUN_008c4620(plVar4,param_2,param_3,param_4,param_5 & 1,param_6 & 1,param_7 & 1);
      return;
    }
  }
  return;
}

