
void FUN_0259ff98(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  long lVar7;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,7);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "FishUniqueId";
  local_40 = puVar1;
  uVar3 = FUN_0277d6c4(*param_2);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
  }
  pcStack_38 = "FishTableId";
  lVar7 = *(long *)PTR_DAT_04bb3d80;
  local_40 = puVar1;
  uVar4 = FUN_0277d6c4(*param_2);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x348);
  if (((uVar4 < *(uint *)(lVar7 + 0x328)) &&
      (lVar7 = *(long *)(*(long *)(lVar7 + 0x330) + (long)(int)uVar4 * 8), lVar7 != 0)) &&
     (puVar5 = (undefined2 *)FUN_014073c0(lVar7,0xb,0x54706054,*(undefined8 *)PTR_DAT_04bbcaf0),
     puVar5 != (undefined2 *)0x0)) {
    uVar6 = *puVar5;
    lVar7 = *(long *)(param_1 + 8);
  }
  else {
    uVar6 = 0;
    lVar7 = *(long *)(param_1 + 8);
  }
  if (lVar7 != 0) {
    FUN_02605660(lVar7,&local_40,uVar6);
  }
  pcStack_38 = "ToolUniqueId";
  local_40 = puVar2 + 0x10;
  uVar3 = FUN_0277d6c4(param_2[1]);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
  }
  uVar3 = FUN_025567f4(param_2[1]);
  pcStack_38 = "ToolDamage";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar2 + 0x10;
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
  }
  return;
}

