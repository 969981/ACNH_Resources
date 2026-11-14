
void FUN_0173a3cc(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(char *)(param_1 + 0x280) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x234);
    if ((((*(long *)PTR_DAT_04bb27c0 != 0 && uVar1 != 0) &&
         (lVar5 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar1 >> 0x11) & 0x7ff8)), lVar5 != 0)) &&
        (*(uint *)(lVar5 + 0x230) == uVar1)) && (*(long *)(lVar5 + 0x88) != 0)) {
      uStack_4 = *(undefined4 *)(*(long *)(*(long *)(lVar5 + 0x88) + 0x48) + 0x230);
      local_8 = *(undefined4 *)(param_1 + 0x230);
      FUN_0071cb58(&local_30,&uStack_4,&local_8,0);
      if (local_30 == 0) {
        return;
      }
      if (local_28 == '\0') {
        return;
      }
      if (local_26 == '\0') {
        return;
      }
      if (local_27 == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x280) = 1;
      plVar3 = *(long **)(*(long *)(local_30 + 0x60) + 0x48);
      if (((*PTR_DAT_04bb3760 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3760);
      }
      if (plVar3 == (long *)0x0) {
        return;
      }
      uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3758);
      if ((uVar4 & 1) == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0x281) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x280) = 1;
  return;
}

