
ulong FUN_02a834d8(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [127];
  undefined1 local_35;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  
  if (DAT_04c487d4 != -1) {
    local_f8 = CONCAT44(local_f8._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((((*(uint *)(puVar1 + 4) & 1) != 0) && (DAT_04cf1b28 != 0)) && (DAT_0519d040 != 0)) &&
       ((*(ushort *)(DAT_0519d040 + 0x4b68) & 1) != 0)) {
      iVar2 = *(int *)(DAT_0519d040 + 0x4b6c);
      iVar3 = *(int *)(DAT_0519d040 + 0x4b70);
      piVar4 = (int *)(**(code **)(*(long *)(DAT_04cf1b28 + 200) + 0xf0))();
      local_f8 = 0xde00000000;
      local_e4 = 0x3f800000;
      local_b8 = 0x80;
      local_35 = 0;
      local_b4[0] = 0;
      local_30 = 7;
      puStack_c0 = local_b4;
      local_28 = 0;
      local_2c = 0;
      local_dc = 0;
      local_d4 = 0;
      local_ec = 0;
      local_c8 = PTR_DAT_04bb2d88 + 0x10;
      local_f0 = (float)(*piVar4 + iVar2 * 0x20) * 5.0;
      local_e8 = (float)(piVar4[1] + iVar3 * 0x20) * 5.0;
      uVar5 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_f8,0,1);
      return uVar5;
    }
  }
  return (ulong)DAT_04c9a0c8;
}

