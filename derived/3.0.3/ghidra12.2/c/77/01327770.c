
/* WARNING: Removing unreachable block (ram,0x01327838) */

void FUN_01327770(uint param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined **local_60;
  undefined **ppuStack_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined *local_40;
  uint local_38;
  undefined4 uStack_34;
  byte local_30;
  undefined4 local_24;
  
  local_24 = 0;
  local_40 = (undefined *)CONCAT44(local_40._4_4_,param_1);
  if (param_1 != 0) {
    local_60 = (undefined **)CONCAT44(local_60._4_4_,param_1);
    if (param_1 == 0) {
      lVar3 = *(long *)(DAT_0519d040 + 0x1f8);
    }
    else {
      plVar1 = (long *)(DAT_0519d040 + 0x30) + param_1;
      if (0x38 < param_1) {
        plVar1 = (long *)(DAT_0519d040 + 0x30);
      }
      lVar3 = *plVar1;
    }
    if (lVar3 != 0) {
      puVar2 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)param_1 * 4);
      if (0x38 < param_1) {
        puVar2 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
      }
      uStack_34 = *puVar2;
      local_38 = param_1;
      local_30 = FUN_017baf44(uStack_34);
      local_30 = local_30 & 1;
      local_40 = PTR_DAT_04bb6268 + 0x10;
      ppuStack_58 = &local_40;
      local_60 = &PTR_LAB_0498e2e8;
      local_50 = &local_24;
      if (*(long *)(lVar3 + 0xd0) != 0) {
        local_48 = param_2;
        FUN_012e6150(*(long *)(lVar3 + 0xd0),&local_60,lVar3 + 0x38);
      }
    }
  }
  return;
}

