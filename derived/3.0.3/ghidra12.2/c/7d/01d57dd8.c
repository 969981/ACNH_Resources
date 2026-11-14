
void FUN_01d57dd8(long param_1)

{
  undefined8 uVar1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  
  FUN_00a78960();
  *(undefined2 *)(param_1 + 0x960) = 0;
  if ((*(uint *)(param_1 + 0x250) & 0xff) == 0) {
    local_40 = 0;
    local_b8 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 7;
    local_bf = 4;
    local_be = 2;
    local_34 = 4;
    local_33 = *(undefined1 *)(param_1 + 0xaa4);
    local_38 = 0;
    local_32 = 0;
    if (DAT_0536e668 < 0) goto LAB_01d57f20;
    uVar1 = 3;
  }
  else {
    local_40 = 0;
    local_b8 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 8;
    local_bf = 0xff;
    local_34 = 4;
    local_33 = *(undefined1 *)(param_1 + 0x254);
    local_38 = 0;
    local_32 = 0;
    if (DAT_0536e668 < 0) goto LAB_01d57f20;
    uVar1 = 2;
  }
  local_32 = 0;
  local_34 = 4;
  local_38 = 0;
  local_40 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_0536e668,&local_38,&local_c0,uVar1,0);
LAB_01d57f20:
  FUN_01d65c3c(param_1 + 0x200);
  *(undefined1 *)(param_1 + 600) = 0;
  FUN_01d535c0(param_1);
  return;
}

