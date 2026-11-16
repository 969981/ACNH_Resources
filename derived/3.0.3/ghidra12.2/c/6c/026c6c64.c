
undefined8 FUN_026c6c64(long param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined7 uStack_cf;
  undefined *local_c8;
  char *pcStack_c0;
  undefined4 local_b8;
  undefined **local_b0;
  undefined8 uStack_a8;
  undefined *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined ***local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puVar3 = PTR_DAT_04bb2020;
  local_b8 = 0xc;
  local_b0 = &PTR_FUN_04a886f8;
  local_80 = param_3[2];
  pcStack_c0 = *(char **)(param_1 + 8);
  local_90 = (undefined *)*param_3;
  local_88 = param_3[1];
  local_c8 = PTR_DAT_04bb2020 + 0x10;
  local_78 = CONCAT71(uStack_cf,(char)param_3[3]);
  uStack_a8 = param_2;
  if (*pcStack_c0 == '\0') {
    puStack_68 = &DAT_0407ebb1;
    local_80._4_4_ = (int)(local_80 >> 0x20);
    iVar4 = local_80._4_4_;
    lVar7 = (long)local_80._4_4_;
    iVar2 = (int)local_80 - local_80._4_4_;
    local_70 = local_c8;
    iVar5 = FUN_01d3aee0(local_88 + lVar7,iVar2,&local_70,(ulong)local_90 & 0xffffffff,0);
    iVar2 = 0;
    if (-1 < iVar5) {
      iVar2 = iVar4;
    }
    iVar4 = iVar2 + iVar5;
    iVar1 = iVar4;
    if (iVar4 < 0 != SCARRY4(iVar2,iVar5)) {
      iVar1 = -1;
    }
  }
  else {
    iVar4 = FUN_01d39660(&local_90,&local_c8);
    iVar1 = iVar4;
  }
  if (iVar4 < 0) {
    uVar6 = 0xffffffff;
  }
  else {
    local_80 = CONCAT44(iVar1,(int)local_80);
    local_50 = 0xc;
    local_48 = &local_b0;
    puStack_40 = puVar3 + 0x10;
    local_28 = &DAT_040628e2;
    local_58 = (undefined1)local_78;
    local_60 = local_80;
    local_38 = &DAT_040f9f64;
    local_70 = local_90;
    puStack_68 = (undefined8 *)local_88;
    puStack_30 = puStack_40;
    uVar6 = FUN_01d39400(&local_70,0);
  }
  return uVar6;
}

