
void FUN_02557858(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined1 auStack_40 [8];
  long *local_38;
  char local_30;
  char local_2f;
  char local_2e;
  int local_28;
  undefined4 local_24;
  
  piVar4 = (int *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      piVar4 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_28 = *piVar4;
  if (local_28 != 0) {
    local_24 = param_3;
    FUN_0071c8d0(&local_38,&local_28,&local_24,0);
    plVar1 = local_38;
    if (local_38 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
      if ((uVar3 & 1) == 0) {
        local_2f = '\0';
      }
    }
    if ((((local_38 != (long *)0x0) && (local_30 != '\0')) && (local_2f != '\0')) &&
       (local_2e != '\0')) {
      FUN_0252d8f0(auStack_40,param_1);
      uVar3 = FUN_02556d7c(auStack_40,param_1,param_2);
      if ((uVar3 & 1) != 0) {
        FUN_02326130(param_1,auStack_40,1);
      }
      FUN_02326130(param_1,auStack_40,1);
    }
  }
  return;
}

