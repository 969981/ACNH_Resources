
void FUN_01737664(long param_1,undefined4 *param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  
  FUN_0071cb58(&local_30,param_2,*(undefined8 *)(param_1 + 0x18),0);
  plVar2 = local_30;
  if (local_30 != (long *)0x0) {
    if ((*PTR_DAT_04bb3760 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3760);
      if (iVar3 != 0) {
        *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3760);
      }
    }
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3758);
    if ((uVar4 & 1) == 0) {
      local_26 = '\0';
    }
  }
  uVar1 = **(uint **)(param_1 + 0x10);
  uVar4 = (ulong)uVar1;
  if (((((int)uVar1 < 0x14) && (local_30 != (long *)0x0)) && (local_28 != '\0')) &&
     (((local_26 != '\0' && (local_27 != '\0')) && ((*(byte *)(local_30[0x14] + 0x178) & 1) != 0))))
  {
    if (0x13 < uVar1) {
      uVar4 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 8) + uVar4 * 4) = *param_2;
    **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + 1;
  }
  return;
}

