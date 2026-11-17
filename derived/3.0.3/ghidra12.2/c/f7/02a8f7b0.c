
void FUN_02a8f7b0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *local_130;
  undefined *puStack_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined1 local_114 [127];
  undefined1 local_95;
  undefined4 local_90;
  char local_8c;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined2 local_36;
  undefined2 local_34;
  
  if (param_2 != 0) {
    local_40 = *(int *)(param_1 + 0xc);
    if (local_40 != 0) {
      local_95 = 0;
      local_120 = local_114;
      local_114[0] = 0;
      local_118 = 0x80;
      local_90 = 0;
      local_8c = '\0';
      puStack_128 = PTR_DAT_04bb2d88 + 0x10;
      puStack_70 = PTR_DAT_04bbc1a0 + 0x10;
      local_78 = 0;
      local_48 = 0;
      local_44 = 0;
      local_88 = PTR_DAT_04bb2010 + 0x10;
      uStack_80 = 0;
      local_60 = 0;
      local_50 = 0;
      local_38 = 0;
      local_130 = PTR_DAT_04bc49b8 + 0x10;
      local_3c = (undefined4)(long)((float)*(int *)(param_1 + 0x20) * 90.0 * 11930465.0);
      if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) == 0x1a)) &&
         ((*(byte *)(param_1 + 8) & 1) == 0)) {
        local_36 = *(undefined2 *)(param_1 + 0x24);
        if (*(int *)(param_1 + 0xc) != 0x1a) {
          local_36 = 0;
        }
      }
      if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) == 0x1b)) &&
         (((*(byte *)(param_1 + 8) & 1) == 0 &&
          (local_34 = *(undefined2 *)(param_1 + 0x24), *(int *)(param_1 + 0xc) != 0x1b)))) {
        local_34 = 0;
      }
      local_68 = local_88;
      local_58 = local_88;
      FUN_02b34590(&local_130,&local_40);
      if (local_8c != '\0') {
        iVar2 = (int)local_50 - (int)local_60;
        iVar3 = local_50._4_4_ - local_60._4_4_;
        iVar1 = iVar2 + 2;
        if (-1 < iVar2 + 1) {
          iVar1 = iVar2 + 1;
        }
        iVar2 = iVar3 + 2;
        iVar1 = *(int *)(param_1 + 0x18) - (iVar1 >> 1);
        if (-1 < iVar3 + 1) {
          iVar2 = iVar3 + 1;
        }
        iVar2 = *(int *)(param_1 + 0x1c) - (iVar2 >> 1);
        *(int *)(param_2 + 0x10) = iVar1 + (int)local_60;
        *(int *)(param_2 + 0x14) = iVar2 + local_60._4_4_;
        *(int *)(param_2 + 0x20) = iVar1 + (int)local_50;
        *(int *)(param_2 + 0x24) = iVar2 + local_50._4_4_;
      }
    }
  }
  return;
}

