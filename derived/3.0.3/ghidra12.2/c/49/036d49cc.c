
/* WARNING: Removing unreachable block (ram,0x036d4a28) */
/* WARNING: Removing unreachable block (ram,0x036d4a38) */

void FUN_036d49cc(undefined8 param_1,long *param_2)

{
  undefined4 local_38 [2];
  undefined **local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  if ((char)param_2[5] != '\0' || *param_2 != 0) {
    FUN_036d4770();
    local_30 = (undefined **)0x0;
    if (DAT_05aed670 != 0) {
      local_30 = (undefined **)0x0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        local_30 = *(undefined ***)(*(long *)(DAT_05aed670 + 0x330) + 0xd0);
      }
    }
    local_38[0] = 0;
    local_28 = *(undefined8 *)(DAT_0519d040 + 0x1f8);
    local_20 = 1;
    FUN_0134e3d4(local_38,&local_30);
    local_30 = &PTR_LAB_04b45338;
    FUN_036d19e0(&local_30);
    FUN_036d4aec();
    FUN_036d4bc8();
  }
  return;
}

