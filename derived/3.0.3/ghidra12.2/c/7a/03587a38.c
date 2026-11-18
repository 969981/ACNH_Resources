
void FUN_03587a38(long param_1,int param_2,uint param_3,long param_4)

{
  uint *puVar1;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [4];
  undefined4 local_dc;
  undefined8 local_d8;
  long local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined2 *puStack_70;
  undefined4 local_68;
  undefined2 local_64 [15];
  undefined2 local_46;
  
  if (param_4 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x240) == 0) {
    return;
  }
  local_e8 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_e4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  FUN_007ef010(auStack_e0,PTR_DAT_04bb3170);
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = PTR_DAT_04bc5058 + 0x10;
  local_dc = 0xffffffff;
  local_90 = 0xffffffff;
  puStack_70 = local_64;
  local_46 = 0;
  local_68 = 0x10;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = PTR_DAT_04bbd6c0 + 0x10;
  local_64[0] = 0;
  local_f0 = *(undefined8 *)(param_4 + 0x1d0);
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x1972) != '\0') {
      if (*(int *)(param_1 + 0x18f0) <= (int)param_3) {
        local_d0 = param_1 + 0x268;
        goto LAB_03587b00;
      }
      puVar1 = (uint *)(param_1 + 0x1974) + param_3;
      if (7 < param_3) {
        puVar1 = (uint *)(param_1 + 0x1974);
      }
      param_3 = *puVar1;
    }
    local_d0 = param_1 + 0x268;
    if (param_3 < 8) {
      local_d0 = local_d0 + (ulong)param_3 * 0x168;
    }
  }
  else {
    local_d0 = param_1 + 0xda8 + (ulong)param_3 * 0x168;
    if (7 < param_3) {
      local_d0 = param_1 + 0xda8;
    }
  }
LAB_03587b00:
  local_d0 = local_d0 + 8;
  FUN_03111440(*(undefined8 *)(param_1 + 0x240),&local_f0);
  return;
}

