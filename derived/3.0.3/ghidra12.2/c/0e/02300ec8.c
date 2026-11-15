
uint FUN_02300ec8(long param_1,byte *param_2,long param_3)

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
  undefined2 local_30;
  undefined4 local_2e;
  undefined1 local_2a;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_1c;
  undefined2 local_14;
  
  bVar1 = *param_2;
  local_48 = *(undefined4 *)(param_3 + 0x10);
  uStack_44 = *(undefined4 *)(param_3 + 0x14);
  uVar2 = (uint)bVar1;
  local_38 = *(undefined4 *)(param_3 + 0x20);
  uStack_34 = *(undefined4 *)(param_3 + 0x24);
  local_60[0] = *(undefined2 *)PTR_DAT_04bb6298;
  if (7 < uVar2) {
    uVar2 = 0xffffffff;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  if (bVar1 < 8) {
    *(byte *)(param_1 + 0x10) = bVar1;
  }
  local_58 = PTR_DAT_04bbc1a0;
  puStack_50 = PTR_DAT_04bb2010;
  local_2a = 0;
  local_28 = 0xffffffffffffffff;
  local_20 = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  local_58 = local_58 + 0x10;
  puStack_50 = puStack_50 + 0x10;
  local_2e = 0x100;
  local_1c = 0x41200000;
  local_14 = 0xff00;
  local_30 = 0xff00;
  if (*(int *)(param_1 + 8) == 0x15) {
    local_30 = 0x1400;
  }
  local_62 = 1;
  local_40 = puStack_50;
  uVar2 = FUN_023016c0(param_1,local_60,auStack_6c);
  return uVar2 & 1;
}

