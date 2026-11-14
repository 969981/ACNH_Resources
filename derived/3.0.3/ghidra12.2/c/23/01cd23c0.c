
ulong FUN_01cd23c0(long param_1,int param_2,ulong *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_78;
  undefined *local_70;
  char *pcStack_68;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined8 *puStack_38;
  
  uVar7 = (**(code **)(&DAT_0535e1d0)[(long)param_2 * 0x16])
                    (&DAT_0535e1d0 + (long)param_2 * 0x16,*(undefined8 *)(param_1 + 8));
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar7 & 1) == 0) {
    uStack_88 = *param_3;
    local_80 = param_3[1];
    local_90 = *(ulong *)(param_1 + 8);
    local_78 = param_3[2];
    local_70 = (undefined *)CONCAT71(local_70._1_7_,(char)param_3[3]);
    uVar7 = (**(code **)(&DAT_0535e1f0)[(long)param_2 * 0x16])
                      (&DAT_0535e1f0 + (long)param_2 * 0x16,&local_90);
    return uVar7;
  }
  local_78 = CONCAT71(local_78._1_7_,(char)param_3[3]);
  local_90 = *param_3;
  uVar7 = param_3[1];
  local_80 = param_3[2];
  pcStack_68 = (char *)(&DAT_0535e188)[(long)param_2 * 0x16];
  local_70 = PTR_DAT_04bb2020 + 0x10;
  uStack_48 = local_78;
  uStack_88 = uVar7;
  local_60 = local_90;
  local_58 = uVar7;
  local_50 = local_80;
  if (*pcStack_68 == '\0') {
    local_50._0_4_ = (int)local_80;
    iVar8 = (int)local_50;
    local_50._4_4_ = (uint)(local_80 >> 0x20);
    iVar3 = local_50._4_4_;
    lVar9 = (long)(int)local_50._4_4_;
    puStack_38 = &DAT_0407ebb1;
    iVar6 = (int)local_50 - local_50._4_4_;
    local_40 = local_70;
    iVar5 = FUN_01d3aee0(uVar7 + lVar9,iVar6,&local_40,local_90 & 0xffffffff,0);
    iVar6 = 0;
    if (-1 < iVar5) {
      iVar6 = iVar3;
    }
    uVar1 = iVar6 + iVar5;
    uVar4 = uVar1;
    if ((int)uVar1 < 0 != SCARRY4(iVar6,iVar5)) {
      uVar4 = 0xffffffff;
    }
    if ((int)uVar1 < 0) {
      return 0xffffffff;
    }
  }
  else {
    uVar4 = FUN_01d39660(&local_60,&local_70);
    if ((int)uVar4 < 0) {
      return 0xffffffff;
    }
    uVar7 = local_58;
    iVar8 = (int)local_50;
  }
  local_40 = puVar2 + 0x10;
  puStack_38 = (undefined8 *)&DAT_04085431;
  local_50._4_4_ = uVar4;
  iVar6 = FUN_01d3aee0(uVar7 + uVar4,iVar8 - uVar4,&local_40,0,0);
  uVar1 = 0;
  if (-1 < iVar6) {
    uVar1 = local_50._4_4_;
  }
  return (ulong)(uVar1 + iVar6);
}

