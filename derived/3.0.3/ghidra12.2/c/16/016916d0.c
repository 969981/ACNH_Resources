
void FUN_016916d0(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined *local_a0b8;
  char *pcStack_a0b0;
  undefined **local_a0a8;
  undefined1 auStack_a0a0 [4096];
  undefined **local_90a0;
  undefined1 auStack_9098 [4096];
  undefined **local_8098;
  undefined1 auStack_8090 [4096];
  undefined **local_7090;
  undefined1 auStack_7088 [4096];
  undefined **local_6088;
  undefined1 auStack_6080 [4096];
  undefined **local_5080;
  undefined1 auStack_5078 [4096];
  undefined *local_4078;
  undefined1 auStack_4070 [16384];
  int local_70;
  int local_6c;
  char local_68;
  undefined1 auStack_44 [4];
  
  lVar7 = *param_1;
  local_a0a8 = &PTR_LAB_049bb2c8;
  local_90a0 = &PTR_LAB_049bb2c8;
  local_8098 = &PTR_LAB_049bb2c8;
  local_7090 = &PTR_LAB_049bb2c8;
  local_6088 = &PTR_LAB_049bb2c8;
  local_5080 = &PTR_LAB_049bb2c8;
  local_4078 = PTR_DAT_04bbbc40 + 0x10;
  memset(auStack_a0a0,0,0x1000);
  memset(auStack_9098,0,0x1000);
  memset(auStack_8090,0,0x1000);
  memset(auStack_7088,0,0x1000);
  memset(auStack_6080,0,0x1000);
  memset(auStack_5078,0,0x1000);
  memset(auStack_4070,0,0x4009);
  FUN_0168f050(&local_a0a8);
  if (0 < lVar7) {
    if (local_68 == '\0') {
      local_a0b8 = PTR_DAT_04bb2020 + 0x10;
      pcStack_a0b0 = "Unlock_MessageBottle";
      iVar3 = FUN_02757a80(auStack_44,&local_a0b8);
      if (iVar3 != 0) {
        FUN_01691990(&local_a0a8);
      }
    }
    if (0x1d < local_6c) {
      uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      uVar6 = (uint)((ulong)uVar5 * 100 >> 0x20);
      uVar4 = 2;
      if (uVar6 < 0x28) {
        uVar4 = 3;
      }
      uVar1 = 4;
      if (9 < uVar6) {
        uVar1 = uVar4;
      }
      DAT_05582b7c = uVar5;
      FUN_016921a0(&local_a0a8,uVar1);
    }
    lVar7 = lVar7 + 1;
    do {
      FUN_016925a0(&local_a0a8);
      uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar5;
      if (local_6c < 0x1e) {
        uVar5 = (uint)((ulong)uVar5 * 100 >> 0x20);
        iVar3 = 2;
        if (uVar5 < 0x28) {
          iVar3 = 3;
        }
        iVar2 = 4;
        if (9 < uVar5) {
          iVar2 = iVar3;
        }
        iVar3 = 0x1e - local_6c;
        if (iVar2 + local_6c < 0x1f) {
          iVar3 = iVar2;
        }
        FUN_016921a0(&local_a0a8,iVar3);
        if (0x1d < local_6c) goto LAB_016918d0;
      }
      else {
LAB_016918d0:
        if (0x1d < local_70) {
          return;
        }
      }
      lVar7 = lVar7 + -1;
    } while (1 < lVar7);
  }
  return;
}

