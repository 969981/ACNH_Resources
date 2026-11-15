
bool FUN_02333760(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  bool bVar5;
  long *local_38;
  char local_30;
  char local_2f;
  undefined4 local_24;
  
  if ((*(int *)(param_1 + 0x178) == 0) && ((*(byte *)(param_1 + 0x17d1) >> 4 & 1) != 0)) {
    local_24 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_38,PTR_DAT_04bb32f8,&local_24,0);
    plVar1 = local_38;
    if (local_38 != (long *)0x0) {
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3278);
      if ((uVar3 & 1) == 0) {
        local_2f = '\0';
      }
    }
    bVar5 = (local_38 != (long *)0x0 && local_30 != '\0') && local_2f != '\0';
    if ((local_38 != (long *)0x0 && local_30 != '\0') && local_2f != '\0') {
      FUN_008fef80();
      *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xffffefff;
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f08d8 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_054f08d8);
          puVar4 = &DAT_054f08d0;
          if (iVar2 != 0) {
            DAT_054f08d0 = 0;
            __cxa_guard_release(&DAT_054f08d8);
          }
        }
        else {
          puVar4 = &DAT_054f08d0;
        }
      }
      else {
        puVar4 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x200);
      }
      *puVar4 = *puVar4 & 0xfffffdff;
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

