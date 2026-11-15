
bool FUN_02333b24(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  long *local_40;
  char local_38;
  char local_37;
  undefined4 local_14;
  
  if ((*(int *)(param_1 + 0x178) == 0) &&
     (((*(long *)PTR_DAT_04bb39b0 == 0 || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) &&
      ((*(byte *)(param_1 + 0x17d1) >> 6 & 1) == 0)))) {
    local_14 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_40,PTR_DAT_04bb32f8,&local_14,0);
    plVar1 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3278);
      if ((uVar3 & 1) == 0) {
        local_37 = '\0';
      }
    }
    bVar4 = (local_40 != (long *)0x0 && local_38 != '\0') && local_37 != '\0';
    if ((local_40 != (long *)0x0 && local_38 != '\0') && local_37 != '\0') {
      FUN_008ff318(local_40,param_2);
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x4000;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

