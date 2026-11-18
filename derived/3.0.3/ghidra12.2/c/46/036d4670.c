
/* WARNING: Removing unreachable block (ram,0x036d46ec) */
/* WARNING: Removing unreachable block (ram,0x036d46fc) */

void FUN_036d4670(undefined4 *param_1)

{
  undefined **local_40;
  undefined4 *local_38;
  undefined1 local_30;
  undefined4 local_8 [2];
  
  *param_1 = *(undefined4 *)PTR_DAT_04bb3238;
  if (DAT_055cdb30 == -0x6efba09b) {
    FUN_036d4770();
    local_40 = (undefined **)0x0;
    if (DAT_05aed670 != 0) {
      local_40 = (undefined **)0x0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        local_40 = *(undefined ***)(*(long *)(DAT_05aed670 + 0x330) + 0xd0);
      }
    }
    local_8[0] = 0;
    local_38 = *(undefined4 **)(DAT_0519d040 + 0x1f8);
    local_30 = 1;
    FUN_0134e3d4(local_8,&local_40);
    local_40 = &PTR_LAB_04b45338;
    FUN_036d19e0(&local_40);
    FUN_036d4aec();
    FUN_036d4bc8();
    local_40 = &PTR_LAB_04b453b0;
    local_38 = param_1;
    FUN_036d19e0(&local_40);
  }
  return;
}

