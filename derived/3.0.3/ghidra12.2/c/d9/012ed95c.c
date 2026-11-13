
uint FUN_012ed95c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *local_3b10;
  undefined *puStack_3b08;
  undefined *local_3b00;
  undefined8 local_3af8;
  undefined *local_3af0;
  undefined *puStack_3ae8;
  undefined8 local_3ae0;
  undefined *puStack_3ad8;
  undefined8 local_3ad0;
  undefined1 auStack_3ac8 [56];
  undefined1 auStack_3a90 [4928];
  undefined1 auStack_2750 [4984];
  uint local_13d8;
  uint local_13d4;
  uint local_13d0;
  int local_13cc;
  undefined1 auStack_13c8 [4984];
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_01300510(auStack_13c8);
    FUN_01300740(auStack_13c8,param_2,param_4);
    local_3ad0 = 0;
    local_3b10 = PTR_DAT_04bbc2a8 + 0x10;
    puStack_3b08 = PTR_DAT_04bbc2a0 + 0x10;
    local_3b00 = PTR_DAT_04bb2018 + 0x10;
    local_3af0 = PTR_DAT_04bbc5d8 + 0x10;
    local_3af8 = 0;
    local_3ae0 = 0;
    puStack_3ae8 = local_3b00;
    puStack_3ad8 = local_3b00;
    FUN_01300510(auStack_3ac8);
    FUN_01300510(auStack_2750);
    uVar1 = nn::os::GetSystemTick();
    local_13d8 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
    local_13d4 = (local_13d8 ^ local_13d8 >> 0x1e) * 0x6c078965 + 2;
    local_13d0 = (local_13d4 ^ local_13d4 >> 0x1e) * 0x6c078965 + 3;
    local_13cc = (local_13d0 ^ local_13d0 >> 0x1e) * 0x6c078965 + 4;
    local_3af8 = *(undefined8 *)(param_4 + 8);
    FUN_01303600(auStack_3ac8,auStack_13c8);
    FUN_01303600(auStack_2750,auStack_13c8);
    uVar1 = FUN_013038a4(&local_3b10,param_3);
    if ((uVar1 & 1) != 0) {
      FUN_0131bad0(param_2,auStack_3a90);
    }
  }
  return uVar1 & 1;
}

