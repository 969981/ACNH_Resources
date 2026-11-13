
void FUN_011e7a94(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 local_24;
  long *local_20;
  char local_17;
  
  local_24 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071c8d0(&local_20,param_2 + 8,&local_24,0);
  plVar1 = local_20;
  if (local_20 != (long *)0x0) {
    if ((*PTR_DAT_04bb2e60 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2e60);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2e60);
      }
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb2e58);
    if ((uVar3 & 1) == 0) {
      local_17 = '\0';
    }
  }
  if ((local_17 != '\0') && (local_20 != (long *)0x0)) {
    FUN_006fb3d0();
  }
  return;
}

