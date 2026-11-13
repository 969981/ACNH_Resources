
uint FUN_0122c5a8(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *local_90;
  undefined8 uStack_88;
  byte local_80;
  undefined1 local_7f;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  local_7f = 0;
  local_74 = 0xfffe;
  local_80 = *PTR_DAT_04bb32e0;
  local_90 = PTR_DAT_04bc2e90 + 0x10;
  uStack_88 = 0;
  local_7c = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_78 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  if (7 < local_80) {
    local_80 = 0xff;
  }
  FUN_0277d4ac(&local_74);
  local_6c = 0xfffe;
  FUN_0277d4ac(&local_6c);
  local_48 = 0;
  uStack_40 = 0x2400000000;
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_64 = 0;
  local_5c = 0;
  local_54 = 0;
  local_38 = 0;
  local_34 = 0;
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  if (7 < uVar2) {
    uVar2 = 0xffffffff;
  }
  uStack_88 = CONCAT44(uVar2,(undefined4)uStack_88);
  if (bVar1 < 8) {
    local_80 = bVar1;
  }
  local_7f = 1;
  uVar2 = FUN_022abc68(&local_90,param_1);
  return uVar2 & 1;
}

