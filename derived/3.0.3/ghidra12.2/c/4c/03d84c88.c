
void FUN_03d84c88(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined **local_238;
  char *pcStack_230;
  undefined4 local_228;
  undefined1 local_224 [63];
  undefined1 local_1e5;
  undefined **local_1e0;
  char *pcStack_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc [63];
  undefined1 local_18d;
  undefined **local_188;
  char *pcStack_180;
  undefined4 local_178;
  undefined1 local_174 [63];
  undefined1 local_135;
  undefined **local_130;
  char *pcStack_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined **local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined **local_80;
  char *pcStack_78;
  
  plVar9 = *(long **)(param_2 + 0x18);
  if (plVar9 != (long *)0x0) {
    local_85 = 0;
    local_c4[0] = 0;
    param_3 = param_3 + 0x10;
    puStack_d0 = local_c4;
    local_c8 = 0x40;
    ppuVar1 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
    ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    pcStack_128 = "UB_Select";
    local_130 = ppuVar2;
    local_d8 = ppuVar1;
    FUN_03d71cb0(param_2,&local_d8,param_3,&local_130);
    pcStack_128 = local_11c;
    local_120 = 0x40;
    local_dd = 0;
    local_11c[0] = 0;
    pcStack_180 = "UB_Unselect";
    local_188 = ppuVar2;
    local_130 = ppuVar1;
    FUN_03d71cb0(param_2,&local_130,param_3,&local_188);
    pcStack_180 = local_174;
    local_178 = 0x40;
    local_135 = 0;
    local_174[0] = 0;
    pcStack_1d8 = "UB_Decide";
    local_1e0 = ppuVar2;
    local_188 = ppuVar1;
    FUN_03d71cb0(param_2,&local_188,param_3,&local_1e0);
    uVar3 = FUN_03ea4cf4(plVar9,&local_d8);
    *(undefined8 *)(param_1 + 0x288) = uVar3;
    uVar3 = FUN_03ea4cf4(plVar9,&local_130);
    *(undefined8 *)(param_1 + 0x290) = uVar3;
    uVar3 = FUN_03ea4cf4(plVar9,&local_188);
    pcStack_1d8 = local_1cc;
    *(undefined8 *)(param_1 + 0x298) = uVar3;
    local_1d0 = 0x40;
    local_18d = 0;
    local_1cc[0] = 0;
    pcStack_230 = "UB_DispValid";
    local_238 = ppuVar2;
    local_1e0 = ppuVar1;
    FUN_03d71df0(param_2,&local_1e0,param_3,&local_238);
    pcStack_230 = local_224;
    local_228 = 0x40;
    local_1e5 = 0;
    local_224[0] = 0;
    pcStack_78 = "UB_Unselect";
    local_238 = ppuVar1;
    local_80 = ppuVar2;
    FUN_03d71df0(param_2,&local_238,param_3,&local_80);
    uVar3 = FUN_03ea830c(*plVar9,&local_1e0);
    *(undefined8 *)(param_1 + 0x2a0) = uVar3;
    lVar4 = FUN_03ea830c(*plVar9,&local_238);
    *(long *)(param_1 + 0x2a8) = lVar4;
    if (*(long *)(param_1 + 0x2a0) == 0) {
      local_80 = &PTR_LAB_04b92898;
      lVar4 = FUN_03ea51f0(plVar9,&local_1e0,&local_80);
      lVar5 = *plVar9;
      plVar7 = (long *)(lVar5 + 0x88);
      lVar6 = *plVar7;
      plVar8 = (long *)(*(int *)(lVar5 + 0x9c) + lVar4);
      *plVar7 = (long)plVar8;
      *plVar8 = lVar6;
      plVar8[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar8;
      }
      *(int *)(lVar5 + 0x98) = *(int *)(lVar5 + 0x98) + 1;
      *(long *)(param_1 + 0x2a0) = lVar4;
      lVar4 = *(long *)(param_1 + 0x2a8);
    }
    if (lVar4 == 0) {
      local_80 = &PTR_LAB_04b928e8;
      lVar4 = FUN_03ea51f0(plVar9,&local_238,&local_80);
      lVar5 = *plVar9;
      plVar8 = (long *)(lVar5 + 0x88);
      lVar6 = *plVar8;
      plVar9 = (long *)(*(int *)(lVar5 + 0x9c) + lVar4);
      *plVar8 = (long)plVar9;
      *plVar9 = lVar6;
      plVar9[1] = (long)plVar8;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar9;
      }
      *(int *)(lVar5 + 0x98) = *(int *)(lVar5 + 0x98) + 1;
      *(long *)(param_1 + 0x2a8) = lVar4;
    }
  }
  return;
}

