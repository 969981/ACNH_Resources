
ulong FUN_02ae34dc(void)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [127];
  undefined1 local_35;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ushort local_14 [2];
  
  if (DAT_04c487d4 != -1) {
    local_f8 = CONCAT44(local_f8._4_4_,3);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 3 & 1) != 0) && (uVar2 = FUN_013884a0(), (uVar2 & 1) != 0)) {
      local_14[0] = 0;
      FUN_013871c0(local_14,0,0);
      uVar2 = FUN_0125f450(&local_20,local_14[0]);
      if ((uVar2 & 1) != 0) {
        local_35 = 0;
        local_f8 = 0xe700000000;
        puStack_c0 = local_b4;
        local_e4 = 0x3f800000;
        local_b4[0] = 0;
        local_b8 = 0x80;
        local_28 = 0;
        local_2c = 0;
        local_c8 = &DAT_048fc708;
        local_30 = 7;
        local_dc = (uint)local_14[0];
        local_d8 = 0;
        local_d0 = 0;
        local_f0 = local_20;
        uStack_ec = uStack_1c;
        local_e8 = local_18;
        uVar2 = FUN_007402e0(DAT_04c93e08,&local_f8,0,1);
        return uVar2;
      }
    }
  }
  return (ulong)DAT_04c9a0c8;
}

