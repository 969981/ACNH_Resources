
void FUN_008ffa04(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  if (((*(char *)(param_1 + 0x430) != '\0') || (*(long *)PTR_DAT_04bb27c0 == 0)) ||
     (uVar1 = *(uint *)(param_1 + 0x274), uVar1 == 0)) {
    return;
  }
  plVar4 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                     ((ulong)(uVar1 >> 0x11) & 0x7ff8));
  if (((plVar4 != (long *)0x0) && ((*(uint *)(plVar4 + 0x49) >> 1 & 1) == 0)) &&
     (*(uint *)(plVar4 + 0x46) == uVar1)) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb32b8);
    local_40 = PTR_DAT_04bb2020;
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)((long)plVar4 + 0x37fb9) = 0;
      local_40 = local_40 + 0x10;
      pcStack_28 = "cBuildStructure";
      pcStack_38 = "cDefault";
      local_30 = local_40;
      FUN_008c3200(plVar4,&local_30,&local_40,param_2,0,0,0);
    }
  }
  return;
}

