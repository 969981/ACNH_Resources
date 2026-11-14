
undefined8 FUN_01cd2070(long param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined7 uStack_df;
  undefined **local_d8;
  char *pcStack_d0;
  undefined4 local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined **local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined ***local_58;
  undefined **ppuStack_50;
  undefined *local_48;
  undefined **ppuStack_40;
  undefined *local_38;
  
  local_c8 = 5;
  local_c0 = &PTR_FUN_04a484e0;
  local_90 = param_3[2];
  pcStack_d0 = *(char **)(param_1 + 8);
  local_a0 = (undefined **)*param_3;
  local_98 = param_3[1];
  local_d8 = &PTR_LAB_048f9770;
  local_88 = CONCAT71(uStack_df,(char)param_3[3]);
  uStack_b8 = param_2;
  if (*pcStack_d0 == '\0') {
    local_80 = &PTR_LAB_048f9770;
    puStack_78 = &DAT_0407ebb1;
    local_90._4_4_ = (int)(local_90 >> 0x20);
    iVar3 = local_90._4_4_;
    lVar6 = (long)local_90._4_4_;
    iVar2 = (int)local_90 - local_90._4_4_;
    iVar4 = FUN_01d3aee0(local_98 + lVar6,iVar2,&local_80,(ulong)local_a0 & 0xffffffff,0);
    iVar2 = 0;
    if (-1 < iVar4) {
      iVar2 = iVar3;
    }
    iVar3 = iVar2 + iVar4;
    iVar1 = iVar3;
    if (iVar3 < 0 != SCARRY4(iVar2,iVar4)) {
      iVar1 = -1;
    }
  }
  else {
    iVar3 = FUN_01d39660(&local_a0,&local_d8);
    iVar1 = iVar3;
  }
  if (iVar3 < 0) {
    uVar5 = 0xffffffff;
  }
  else {
    local_90 = CONCAT44(iVar1,(int)local_90);
    local_58 = &local_c0;
    ppuStack_50 = &PTR_LAB_048f9770;
    local_60 = 5;
    local_68 = (undefined1)local_88;
    local_38 = &DAT_040628e2;
    local_70 = local_90;
    local_48 = &DAT_040f9f64;
    ppuStack_40 = &PTR_LAB_048f9770;
    local_80 = local_a0;
    puStack_78 = (undefined8 *)local_98;
    uVar5 = FUN_01d39400(&local_80,0);
  }
  return uVar5;
}

