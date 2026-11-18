
uint FUN_0354bc00(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_74 [12];
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_3c [12];
  
  FUN_0354bdb0(auStack_74);
  local_68 = 0xffffffff;
  uVar5 = *(uint *)(param_1 + 0x1c288);
  local_88 = PTR_DAT_04bb2e18 + 0x10;
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x1c270))) {
    lVar3 = param_1 + 0x1c260;
    uVar2 = uVar5 + 1 & 3;
    if (2 < uVar5) {
      uVar5 = uVar5 + 1 & 0xfffffffc;
      do {
        uVar5 = uVar5 - 4;
        lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) + 8);
      } while (uVar5 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar3 = *(long *)(lVar3 + 8);
    }
    local_68 = 0xffffffff;
    if ((lVar3 != 0) && (lVar3 = lVar3 - *(int *)(param_1 + 0x1c274), lVar3 != 0)) {
      local_68 = *(undefined4 *)(lVar3 + 0x270);
    }
  }
  FUN_0354bdb0(auStack_3c,param_1,param_2);
  FUN_03414580(&local_68,auStack_3c,param_1 + 0x1f8);
  local_a0 = local_68;
  local_90 = local_58;
  local_9c = local_64;
  local_98 = local_60;
  uStack_94 = uStack_5c;
  local_80 = local_48;
  uStack_7c = uStack_44;
  uVar2 = FUN_03416230(auStack_74,&local_a0);
  uVar5 = *(uint *)(param_1 + 0x1c288);
  iVar4 = -1;
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x1c270))) {
    lVar3 = param_1 + 0x1c260;
    uVar1 = uVar5 + 1 & 3;
    if (2 < uVar5) {
      uVar5 = uVar5 + 1 & 0xfffffffc;
      do {
        uVar5 = uVar5 - 4;
        lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) + 8);
      } while (uVar5 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      lVar3 = *(long *)(lVar3 + 8);
    }
    iVar4 = -1;
    if ((lVar3 != 0) && (lVar3 = lVar3 - *(int *)(param_1 + 0x1c274), lVar3 != 0)) {
      iVar4 = *(int *)(lVar3 + 0x270);
    }
  }
  uVar5 = uVar2 & 0xfffffffb;
  if (iVar4 != 0x78) {
    uVar5 = uVar2;
  }
  return uVar5;
}

