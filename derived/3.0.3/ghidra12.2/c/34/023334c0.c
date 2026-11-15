
bool FUN_023334c0(long param_1)

{
  bool bVar1;
  byte *pbVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  uint *puVar10;
  long *local_48;
  char local_40;
  char local_3f;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar7 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x15c) != 0)) {
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar7 + 0x15c) != 0) {
        pbVar2 = (byte *)(lVar7 + 0x158);
      }
      bVar9 = *(byte *)(param_1 + 0x1ee8);
      bVar8 = *pbVar2;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (bVar8 != bVar9) {
        return false;
      }
    }
    if ((*(byte *)(param_1 + 0x17d1) >> 4 & 1) == 0) {
      local_34 = *(undefined4 *)(param_1 + 0x230);
      FUN_0071c8d0(&local_48,PTR_DAT_04bb32f8,&local_34,0);
      plVar4 = local_48;
      if (local_48 != (long *)0x0) {
        if (((*PTR_DAT_04bb3280 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3280);
        }
        uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3278);
        if ((uVar6 & 1) == 0) {
          local_3f = '\0';
        }
      }
      bVar1 = (local_48 != (long *)0x0 && local_40 != '\0') && local_3f != '\0';
      if ((local_48 != (long *)0x0 && local_40 != '\0') && local_3f != '\0') {
        FUN_008fee64();
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x1000;
        puVar3 = PTR_DAT_04bb4718;
        if (*(long *)PTR_DAT_04bb4718 == 0) {
          if ((DAT_054f08d8 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(&DAT_054f08d8);
            puVar10 = &DAT_054f08d0;
            if (iVar5 != 0) {
              DAT_054f08d0 = 0;
              __cxa_guard_release(&DAT_054f08d8);
              puVar10 = &DAT_054f08d0;
            }
          }
          else {
            puVar10 = &DAT_054f08d0;
          }
        }
        else {
          puVar10 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x200);
        }
        local_34 = 9;
        *puVar10 = *puVar10 | 0x200;
        if (*(long *)puVar3 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(&DAT_054f0960);
            puVar10 = (uint *)&DAT_054f0958;
            if (iVar5 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar10 = (uint *)&DAT_054f0958;
          }
        }
        else {
          uVar6 = (ulong)*(byte *)(param_1 + 0x1ee8);
          puVar10 = (uint *)(*(long *)puVar3 + 0x204);
          if (uVar6 < 8) {
            puVar10 = puVar10 + uVar6 * 2;
          }
        }
        *puVar10 = *puVar10 & 0xfdffffff;
        return bVar1;
      }
      return bVar1;
    }
  }
  return false;
}

