
void FUN_03d84f10(long param_1,long *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined **local_60;
  char *pcStack_58;
  undefined **local_50;
  char *pcStack_48;
  
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_48 = "Select";
  local_50 = ppuVar1;
  uVar3 = FUN_03ea4cf4(param_2,&local_50);
  *(undefined8 *)(param_1 + 0x288) = uVar3;
  pcStack_48 = "Unselect";
  local_50 = ppuVar1;
  uVar3 = FUN_03ea4cf4(param_2,&local_50);
  *(undefined8 *)(param_1 + 0x290) = uVar3;
  pcStack_48 = "Decide";
  local_50 = ppuVar1;
  uVar3 = FUN_03ea4cf4(param_2,&local_50);
  *(undefined8 *)(param_1 + 0x298) = uVar3;
  pcStack_58 = "DispValid";
  local_50 = &PTR_LAB_04b92898;
  local_60 = ppuVar1;
  lVar4 = FUN_03ea51f0(param_2,&local_60,&local_50);
  lVar5 = *param_2;
  plVar7 = (long *)(lVar5 + 0x88);
  lVar6 = *plVar7;
  plVar2 = (long *)(*(int *)(lVar5 + 0x9c) + lVar4);
  *plVar7 = (long)plVar2;
  *plVar2 = lVar6;
  plVar2[1] = (long)plVar7;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar2;
  }
  pcStack_58 = "Input";
  *(int *)(lVar5 + 0x98) = *(int *)(lVar5 + 0x98) + 1;
  *(long *)(param_1 + 0x2a0) = lVar4;
  local_50 = &PTR_LAB_04b928e8;
  local_60 = ppuVar1;
  lVar4 = FUN_03ea51f0(param_2,&local_60,&local_50);
  lVar5 = *param_2;
  plVar7 = (long *)(lVar5 + 0x88);
  lVar6 = *plVar7;
  plVar2 = (long *)(*(int *)(lVar5 + 0x9c) + lVar4);
  *plVar7 = (long)plVar2;
  *plVar2 = lVar6;
  plVar2[1] = (long)plVar7;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar2;
  }
  *(int *)(lVar5 + 0x98) = *(int *)(lVar5 + 0x98) + 1;
  *(long *)(param_1 + 0x2a8) = lVar4;
  return;
}

