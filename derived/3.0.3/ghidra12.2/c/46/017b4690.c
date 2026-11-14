
uint FUN_017b4690(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_68;
  char local_64 [7];
  char cStack_5d;
  char acStack_5c [7];
  undefined1 local_55;
  undefined1 local_25;
  undefined1 auStack_8 [4];
  int local_4;
  
  local_68 = 0x40;
  pcStack_70 = local_64;
  local_78 = PTR_DAT_04bb2bc0 + 0x10;
  local_64 = (char  [7])s_IdrTsunekichi00_040c51f7._0_7_;
  local_25 = 0;
  local_55 = 0;
  cStack_5d = s_IdrTsunekichi00_040c51f7[7];
  acStack_5c = (char  [7])s_IdrTsunekichi00_040c51f7._8_7_;
  local_88 = PTR_DAT_04bb2010 + 0x10;
  local_80 = 0;
  uVar2 = FUN_00979580(&local_78,&local_88,&local_4,auStack_8);
  if ((uVar2 & 1) != 0) {
    local_80._0_4_ = *(int *)(PTR_DAT_04bbe490 + 8) + (int)local_80;
    local_80._4_4_ = *(int *)(PTR_DAT_04bbe490 + 0xc) + local_80._4_4_;
    iVar3 = (int)local_80 + local_4 + -1;
    iVar1 = (int)local_80;
    if (iVar3 <= (int)local_80) {
      iVar1 = iVar3;
    }
    if ((int)local_80 <= iVar3) {
      local_80._0_4_ = iVar3;
    }
    iVar3 = local_80._4_4_;
    if (0x24 < local_80._4_4_) {
      iVar3 = 0x25;
    }
    if (local_80._4_4_ < 0x26) {
      local_80._4_4_ = 0x25;
    }
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(int *)(param_1 + 0x20) = (int)local_80;
    *(int *)(param_1 + 0x24) = local_80._4_4_;
  }
  return uVar2 & 1;
}

