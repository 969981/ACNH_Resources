
void FUN_02425a14(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar6 = param_1 + 0x1ee8;
    iVar1 = FUN_00a74b78(lVar6);
    if (iVar1 == 7) {
      iVar1 = 4;
    }
    else if (*(int *)(param_1 + 0x178) == 1) {
      iVar1 = 0;
    }
    else {
      local_40._0_4_ = iVar1;
      uVar3 = FUN_00a738a0(lVar6,0);
      iVar1 = 0;
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_00a74b78(lVar6);
        iVar1 = 1;
        if (uVar2 < 0xf) {
          if ((1 << (ulong)(uVar2 & 0x1f) & 0x600dU) == 0) {
            if ((uVar2 == 7) || (uVar2 == 9)) {
              iVar1 = (uint)((*(byte *)(param_1 + 0x17d0) & 6) != 0) << 1;
            }
          }
          else {
            iVar1 = 2;
          }
        }
      }
    }
    local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar1);
    *(char *)(param_1 + 0x1900) = (char)iVar1;
  }
  *(undefined1 *)(param_1 + 0xc55) = 0;
  *(undefined1 *)(param_1 + 0xc60) = 0;
  *(undefined4 *)(param_1 + 0xc48) = *(undefined4 *)(param_1 + 0xc4c);
  if (((*(long *)PTR_DAT_04bb2808 != 0) &&
      (lVar6 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar6 != 0)) &&
     (1 < *(uint *)(lVar6 + 0x1b0))) {
    FUN_023164ec(param_1,6);
    return;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "PlayerSeeSomebody";
  FUN_01707d90(puVar4,&local_40,6,0,0);
  lVar6 = FUN_0251e98c(1);
  puVar5 = (uint *)(**(code **)(*(long *)(lVar6 + 0x12c0) + 0xf0))(lVar6 + 0x12c0);
  uVar2 = *puVar5;
  *(undefined4 *)(param_1 + 0xc48) = 0;
  *(undefined1 *)(param_1 + 0xc55) = 1;
  *(byte *)(param_1 + 0xc54) = (byte)(uVar2 >> 0x1f);
  *(uint *)(param_1 + 0xc50) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0xc4c) = uVar2 & (int)uVar2 >> 0x1f;
  return;
}

