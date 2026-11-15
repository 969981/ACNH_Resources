
bool FUN_02333d7c(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  byte local_38 [4];
  undefined4 local_34;
  long *local_30;
  char local_28;
  char local_27;
  
  if ((((*(int *)(param_1 + 0x178) == 0) && (*(long *)PTR_DAT_04bb39b0 != 0)) &&
      (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0)) &&
     ((*(byte *)(param_1 + 0x17d0) >> 5 & 1) == 0)) {
    local_34 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_30,PTR_DAT_04bb32f8,&local_34,0);
    plVar1 = local_30;
    if (local_30 != (long *)0x0) {
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3278);
      if ((uVar3 & 1) == 0) {
        local_27 = '\0';
      }
    }
    bVar4 = (local_30 != (long *)0x0 && local_28 != '\0') && local_27 != '\0';
    if ((local_30 != (long *)0x0 && local_28 != '\0') && local_27 != '\0') {
      local_38[0] = *(byte *)(param_1 + 0x1ee8);
      if (7 < local_38[0]) {
        local_38[0] = 0xff;
      }
      FUN_00900704(local_30,local_38);
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x20;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

