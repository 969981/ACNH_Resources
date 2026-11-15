
bool FUN_02332994(long param_1)

{
  bool bVar1;
  byte *pbVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  undefined4 local_34;
  long *local_30;
  char local_28;
  char local_27;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar6 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x15c) != 0)) {
      bVar8 = *(byte *)(param_1 + 0x1ee8);
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar2 = (byte *)(lVar6 + 0x158);
      }
      bVar7 = *pbVar2;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 != bVar8) {
        return false;
      }
    }
    if ((*(byte *)(param_1 + 0x17d0) >> 3 & 1) == 0) {
      local_34 = *(undefined4 *)(param_1 + 0x230);
      FUN_0071c8d0(&local_30,PTR_DAT_04bb32f8,&local_34,0);
      plVar3 = local_30;
      if (local_30 != (long *)0x0) {
        if (((*PTR_DAT_04bb3280 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3280);
        }
        uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3278);
        if ((uVar5 & 1) == 0) {
          local_27 = '\0';
        }
      }
      bVar1 = (local_30 != (long *)0x0 && local_28 != '\0') && local_27 != '\0';
      if ((local_30 != (long *)0x0 && local_28 != '\0') && local_27 != '\0') {
        FUN_008fdf44();
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 8;
        return bVar1;
      }
      return bVar1;
    }
  }
  return false;
}

