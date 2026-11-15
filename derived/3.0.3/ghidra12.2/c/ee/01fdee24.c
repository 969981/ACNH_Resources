
void FUN_01fdee24(long param_1)

{
  ulong uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined4 local_50;
  
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0xfffe00000000;
  FUN_0277d4ac((long)&uStack_88 + 4);
  local_58 = 0;
  local_50 = 0;
  local_78 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_70 = PTR_DAT_04bb2010 + 0x10;
  local_68 = 0;
  puStack_60 = puStack_70;
  uVar1 = FUN_01fdeee8(param_1,&local_90);
  if ((uVar1 & 1) == 0) {
    *(ushort *)(param_1 + 0x1242c) = *(ushort *)(param_1 + 0x1242c) | 8;
    *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x400000000000000;
    FUN_01fb5100(param_1);
    *(undefined4 *)(param_1 + 0x124b4) = *(undefined4 *)(param_1 + 0xaf8c);
  }
  else {
    FUN_01fdf240(param_1,&local_90);
  }
  return;
}

