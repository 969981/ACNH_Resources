
void FUN_022c4dd0(long param_1,byte *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined *local_80;
  uint local_78;
  uint uStack_74;
  undefined *local_70;
  uint local_68;
  uint uStack_64;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 local_58;
  byte local_54;
  byte local_53;
  undefined4 local_52;
  undefined *local_48;
  undefined *puStack_40;
  int local_38;
  int iStack_34;
  undefined *local_30;
  int local_28;
  int iStack_24;
  
  local_52 = 0xff;
  local_58 = 9;
  local_54 = *param_2;
  local_60 = 0;
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_78 = *(uint *)(param_1 + 8) & 0xfffffffe;
  uStack_74 = *(uint *)(param_1 + 0xc) & 0xfffffffe;
  if (7 < local_54) {
    local_54 = 0xff;
  }
  local_70 = local_80;
  local_68 = local_78;
  uStack_64 = uStack_74;
  uStack_5c = param_3;
  local_53 = local_54;
  uVar1 = FUN_011e8d00(&local_80,1);
  if (((uVar1 & 1) == 0) && ((param_3 & 0xfffffffe) == 8)) {
    if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
      local_48 = PTR_DAT_04bbc5d8 + 0x10;
      puStack_40 = PTR_DAT_04bb2018 + 0x10;
      fVar3 = (float)*(int *)(param_1 + 8) * 0.5;
      fVar4 = (float)*(int *)(param_1 + 0xc) * 0.5;
      uVar2 = 0;
      if (fVar3 != (float)(int)fVar3) {
        uVar2 = (uint)(fVar3 < 0.0);
      }
      local_38 = (int)fVar3 - uVar2;
      uVar2 = 0;
      if (fVar4 != (float)(int)fVar4) {
        uVar2 = (uint)(fVar4 < 0.0);
      }
      iStack_34 = (int)fVar4 - uVar2;
      local_30 = puStack_40;
      local_28 = local_38;
      iStack_24 = iStack_34;
      FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_48);
    }
    FUN_011dbc54(param_1,0);
  }
  return;
}

