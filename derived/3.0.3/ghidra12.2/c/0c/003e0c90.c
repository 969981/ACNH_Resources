
undefined8
FUN_003e0c90(long param_1,undefined8 param_2,long param_3,undefined4 param_4,long param_5,
            undefined4 *param_6,int *param_7)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined8 local_d8;
  long lStack_d0;
  undefined4 *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined7 local_93;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 local_80 [2];
  long local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  
  local_68 = 0;
  local_64 = 0;
  uVar3 = FUN_003b8698(param_2,param_4,&local_6c);
  if ((uVar3 & 1) == 0) {
    return 3;
  }
  plVar12 = *(long **)(param_7 + 0x10);
  iVar1 = *(int *)(*(long *)(param_5 + 0x20) + 0x48);
  if (((*(long *)(param_1 + 0x80) != 0) &&
      (lVar4 = FUN_003b8394(param_2,*(undefined4 *)(param_5 + 0x110)), lVar4 != 0)) &&
     (plVar5 = *(long **)(param_1 + 0x80), (char)plVar5[1] != '\0')) {
    lVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,lVar4,PTR_DAT_04bd02c8,PTR_s_bxwsd_04bd02e0,0);
    plVar5 = *(long **)(param_1 + 0x80);
    if ((((char)plVar5[1] != '\0') &&
        (lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,lVar4,PTR_DAT_04bd02c8,PTR_s_bxwar_04bd02f8,0)
        , lVar6 != 0)) && (lVar4 != 0)) {
      FUN_003c8dd4(&local_b8,lVar4,0);
      lVar4 = FUN_003c8fec(&local_b8,local_6c);
      if (lVar4 != 0) {
        local_80[0] = *(undefined4 *)(param_5 + 0x110);
        bVar8 = false;
        iVar1 = *param_7;
        local_b0 = param_7[1];
        uStack_a4 = 0;
        local_a0 = 0x7f;
        local_9c = false;
        local_78 = lVar6;
        goto joined_r0x003e0e88;
      }
    }
  }
  local_78 = FUN_003e0344(param_3,*param_6);
  local_80[0] = *(undefined4 *)(param_5 + 0x110);
  if (local_78 == 0) {
    if (iVar1 == 0) {
      return 8;
    }
    lVar4 = 0;
    bVar8 = true;
    iVar1 = *param_7;
    local_b0 = param_7[1];
    lVar6 = 0;
    uStack_a4 = 0;
    local_a0 = 0x7f;
    local_9c = false;
  }
  else {
    uVar10 = 0x7f;
    lVar6 = local_78;
    if (plVar12 == (long *)0x0) {
      uVar11 = 0;
      bVar2 = false;
    }
    else {
      uVar11 = *(undefined4 *)((long)plVar12 + 0xc);
      uVar10 = *(uint *)(plVar12 + 2) & ((int)*(uint *)(plVar12 + 2) >> 0x1f ^ 0xffffffffU);
      lVar4 = *plVar12;
      if (0x7e < (int)uVar10) {
        uVar10 = 0x7f;
      }
      bVar2 = *(char *)((long)plVar12 + 0x14) != '\0';
      if (lVar4 != 0) {
        bVar8 = false;
        iVar1 = *param_7;
        local_b0 = param_7[1];
        uStack_a4 = uVar11;
        local_a0 = uVar10;
        local_9c = bVar2;
        goto joined_r0x003e0e88;
      }
    }
    lVar4 = FUN_003b8108(local_78,local_6c,param_2,param_3 + 0x18);
    uStack_a4 = uVar11;
    local_a0 = uVar10;
    local_9c = bVar2;
    if (lVar4 == 0) {
      if (iVar1 == 0) {
        return 9;
      }
      lVar4 = 0;
      bVar8 = true;
      iVar1 = *param_7;
      local_b0 = param_7[1];
    }
    else {
      bVar8 = false;
      iVar1 = *param_7;
      local_b0 = param_7[1];
    }
  }
joined_r0x003e0e88:
  if (iVar1 == 0) {
    uStack_b4 = 1;
    puVar9 = *(undefined4 **)(param_7 + 0x12);
  }
  else if (iVar1 == 2) {
    uStack_b4 = 0;
    puVar9 = *(undefined4 **)(param_7 + 0x12);
  }
  else {
    uStack_b4 = 0;
    local_b0 = 0;
    puVar9 = *(undefined4 **)(param_7 + 0x12);
  }
  if (puVar9 == (undefined4 *)0x0) {
    local_94 = 0;
    local_98 = 0;
  }
  else {
    local_98 = *puVar9;
    local_94 = *(undefined1 *)(puVar9 + 1);
  }
  local_93 = 0;
  iStack_ac = param_7[2];
  local_a8 = param_7[3];
  iStack_88 = param_7[4];
  uStack_8c = 0;
  if (bVar8) {
    uStack_c0 = *(undefined8 *)(param_5 + 0x20);
    local_c8 = local_80;
    local_d8 = param_2;
    lStack_d0 = param_3;
    FUN_003e1428(param_5,&local_d8,&local_b8);
  }
  else {
    if ((plVar12 == (long *)0x0) || (*plVar12 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (undefined1)plVar12[1];
    }
    FUN_003e1334(param_5,lVar6,lVar4,&local_b8,uVar7);
  }
  FUN_003e152c(param_5,(undefined1)local_64,local_64._1_1_);
  return 0;
}

