
uint FUN_031669b0(long param_1,uint param_2)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined4 local_a0;
  ushort local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  ushort local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  
  uVar5 = *(uint *)(param_1 + 0x1c1f0);
  bVar1 = false;
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x1c1d8))) {
    lVar4 = param_1 + 0x1c1c8;
    uVar3 = uVar5 + 1 & 3;
    if (2 < uVar5) {
      uVar5 = uVar5 + 1 & 0xfffffffc;
      do {
        uVar5 = uVar5 - 4;
        lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
      } while (uVar5 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      lVar4 = *(long *)(lVar4 + 8);
    }
    bVar1 = false;
    if ((lVar4 != 0) && (lVar4 = lVar4 - *(int *)(param_1 + 0x1c1dc), lVar4 != 0)) {
      bVar1 = *(int *)(lVar4 + 0x270) == 0x6f;
    }
  }
  FUN_0315e2f0(auStack_4c,param_1,param_2);
  local_74 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = PTR_DAT_04bb2e18 + 0x10;
  local_58 = 0;
  if (bVar1) {
    if ((-1 < (int)param_2) && ((int)param_2 < **(int **)(param_1 + 0x1c308))) {
      lVar4 = *(long *)(*(long *)(*(int **)(param_1 + 0x1c308) + 2) + (ulong)param_2 * 8);
      if (lVar4 == 0) {
        uStack_7c = 0;
        local_80 = 0;
        local_9c = 0;
        local_90 = 0;
        uStack_94 = 0;
        local_a0 = 0;
        local_98 = 0;
      }
      else {
        FUN_03414040(&local_a0,lVar4,param_1 + 0x1f8);
      }
      local_70 = CONCAT44(uStack_94,local_98);
      local_58 = CONCAT44(uStack_7c,local_80);
      local_78 = local_a0;
      local_74 = local_9c;
      local_68 = local_90;
    }
  }
  else {
    FUN_03414580(&local_a0,auStack_4c,param_1 + 0x1f8);
    uVar2 = FUN_034233e0(auStack_48,param_1 + 0x1f8,param_1 + 0x1d58c);
    local_9c = CONCAT11(uVar2,(undefined1)local_9c) & 0x1ff;
    local_68 = local_90;
    local_78 = local_a0;
    local_70 = CONCAT44(uStack_94,local_98);
    local_74 = local_9c;
    local_58 = CONCAT44(uStack_7c,local_80);
  }
  uVar3 = FUN_03416230(auStack_4c,&local_78);
  uVar5 = uVar3 & 0xfffffffb;
  if (!bVar1) {
    uVar5 = uVar3;
  }
  return uVar5;
}

