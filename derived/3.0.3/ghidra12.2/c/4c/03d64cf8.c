
void FUN_03d64cf8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined **local_130;
  char *pcStack_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined **local_80;
  char *pcStack_78;
  
  local_85 = 0;
  plVar8 = *(long **)(param_2 + 0x18);
  puStack_d0 = local_c4;
  local_c4[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_c8 = 0x40;
  pcStack_128 = "KI_Decide";
  local_130 = ppuVar2;
  local_d8 = puVar1;
  FUN_03d71cb0(param_2,&local_d8,param_3 + 0x10,&local_130);
  pcStack_128 = local_11c;
  local_120 = 0x40;
  local_dd = 0;
  local_11c[0] = 0;
  pcStack_78 = "KI_DispValid";
  local_130 = (undefined **)puVar1;
  local_80 = ppuVar2;
  FUN_03d71df0(param_2,&local_130,param_3 + 0x10,&local_80);
  if (plVar8 != (long *)0x0) {
    uVar3 = FUN_03ea4cf4(plVar8,&local_d8);
    *(undefined8 *)(param_1 + 0x290) = uVar3;
    lVar4 = FUN_03ea830c(*plVar8,&local_130);
    *(long *)(param_1 + 0x298) = lVar4;
    if (lVar4 == 0) {
      local_80 = &PTR_LAB_04b90428;
      lVar4 = FUN_03ea51f0(plVar8,&local_130,&local_80);
      lVar5 = *plVar8;
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
      *(long *)(param_1 + 0x298) = lVar4;
    }
  }
  return;
}

