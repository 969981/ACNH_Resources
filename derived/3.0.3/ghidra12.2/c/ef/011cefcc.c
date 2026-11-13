
void FUN_011cefcc(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *local_30;
  char local_28;
  char local_26;
  undefined4 local_4;
  
  FUN_0071cb58(&local_30,PTR_DAT_04bb32f8,&DAT_050de488,0);
  plVar1 = local_30;
  if (local_30 != (long *)0x0) {
    if ((*PTR_DAT_04bb3280 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3278);
    if ((uVar3 & 1) == 0) {
      local_26 = '\0';
    }
  }
  if (((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_26 != '\0')) {
    FUN_00900940(&local_4);
    *(undefined4 *)(param_1 + 0xd4) = local_4;
  }
  return;
}

