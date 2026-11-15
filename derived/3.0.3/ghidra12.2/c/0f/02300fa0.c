
uint FUN_02300fa0(long param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 auStack_6c [10];
  undefined1 local_62;
  undefined2 local_60 [4];
  undefined *local_58;
  undefined *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  byte local_30;
  undefined1 local_2f;
  byte local_2e;
  undefined1 local_2d;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_1c;
  undefined2 local_14;
  
  bVar1 = *param_2;
  uVar2 = (uint)bVar1;
  if (7 < uVar2) {
    uVar2 = 0xffffffff;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  if (bVar1 < 8) {
    *(byte *)(param_1 + 0x10) = bVar1;
  }
  local_58 = PTR_DAT_04bbc1a0;
  puStack_50 = PTR_DAT_04bb2010;
  local_2f = 0xff;
  local_2c = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  local_2d = 1;
  local_58 = local_58 + 0x10;
  local_2a = 0;
  local_28 = 0xffffffffffffffff;
  puStack_50 = puStack_50 + 0x10;
  local_20 = 0;
  local_1c = 0x41200000;
  local_14 = 0xff00;
  local_60[0] = *(undefined2 *)(param_2 + 0x30);
  local_48 = *(undefined4 *)(param_2 + 0x18);
  uStack_44 = *(undefined4 *)(param_2 + 0x1c);
  local_38 = *(undefined4 *)(param_2 + 0x28);
  uStack_34 = *(undefined4 *)(param_2 + 0x2c);
  local_30 = param_2[0x32];
  local_2e = param_2[0x33];
  if (*(int *)(param_1 + 8) == 0x15) {
    local_2f = 0x14;
  }
  local_62 = 2;
  local_40 = puStack_50;
  uVar2 = FUN_023016c0(param_1,local_60,auStack_6c);
  return uVar2 & 1;
}

