
void FUN_022c4f0c(long param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  undefined *local_58;
  uint local_50;
  uint uStack_4c;
  undefined *local_48;
  uint local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  byte local_2c;
  char local_2b;
  undefined4 local_2a;
  
  local_2b = *(char *)(param_2 + 0x17);
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_2a = 0xff;
  pbVar1 = PTR_DAT_04bb5038 + (uint)(int)local_2b;
  if (7 < (uint)(int)local_2b) {
    pbVar1 = PTR_DAT_04bb32e0;
  }
  uStack_4c = (int)*(short *)(param_2 + 0xe) & 0xfffffffe;
  local_2c = *pbVar1;
  uStack_38 = 0;
  local_50 = (int)*(short *)(param_2 + 0xc) & 0xfffffffe;
  if (7 < local_2c) {
    local_2c = 0xff;
  }
  local_34 = 0xb00000011;
  local_48 = local_58;
  local_40 = local_50;
  local_3c = uStack_4c;
  uVar3 = FUN_011e8d00(&local_58,0);
  if ((uVar3 & 1) != 0) {
    uVar2 = 1 << (ulong)(*(byte *)(param_2 + 0x17) & 0x1f);
    DAT_0547b4b8 = uVar2 | DAT_0547b4b8;
    DAT_0547b4b4 = DAT_0547b4b4 & (uVar2 ^ 0xffffffff);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

