
void FUN_02214e8c(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined *local_60;
  undefined1 *puStack_58;
  undefined4 local_50;
  undefined1 local_4c [7];
  undefined1 local_45;
  undefined *local_40;
  undefined1 *puStack_38;
  undefined4 local_30;
  undefined1 local_2c [7];
  undefined1 local_25;
  
  if ((param_1[0x1e4] >> 1 & 1) != 0) {
    local_25 = 0;
    local_30 = 8;
    local_50 = 8;
    puStack_38 = local_2c;
    puStack_58 = local_4c;
    local_2c[0] = 0;
    local_60 = PTR_DAT_04bb3768 + 0x10;
    local_45 = 0;
    local_4c[0] = 0;
    local_40 = local_60;
    FUN_038d1270(&local_40,"-----");
    puVar2 = PTR_DAT_04bb9e38;
    if ((ulong)*param_1 < 0x23) {
      FUN_038d1270(&local_40,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0)
                   ,param_1[1]);
    }
    FUN_038d1270(&local_60,"-----");
    if ((ulong)param_1[3] < 0x23) {
      FUN_038d1270(&local_60,"%s%02d",*(undefined8 *)(puVar2 + (ulong)param_1[3] * 8 + 0xb0),
                   param_1[4]);
    }
    uVar3 = FUN_0376baa0(&local_40);
    uVar4 = FUN_0376baa0(&local_60);
    uVar5 = FUN_03770130(uVar3,uVar4);
    bVar1 = 2;
    if ((uVar5 & 1) == 0) {
      bVar1 = 0;
    }
    param_1[0x1e4] = param_1[0x1e4] & 0xfd | bVar1;
  }
  return;
}

