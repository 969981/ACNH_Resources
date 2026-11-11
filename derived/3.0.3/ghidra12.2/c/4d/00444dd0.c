
void FUN_00444dd0(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long local_f0;
  long lStack_e8;
  ulong local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined2 local_96;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_1 + 7) != 0) {
    lVar9 = (long)*(int *)(param_1 + 7) << 3;
    puVar8 = (undefined8 *)param_1[6];
    do {
      if ((long *)*puVar8 == param_2) {
        return;
      }
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  if (param_1[3] != 0) {
    FUN_00444dd0(param_1[3],param_2,param_3);
  }
  local_a0 = *param_1;
  local_98 = (undefined1)param_3;
  local_96 = 0;
  local_94 = 0;
  local_90 = nn::os::GetCurrentThread();
  uStack_88 = 0;
  uStack_68 = 0;
  local_97 = 1;
  local_80 = 0;
  local_78 = param_1[4];
  local_70 = (ulong)*(uint *)(param_1 + 5);
  FUN_00427c30(&local_c0,param_1[2],0);
  iVar10 = 0;
LAB_00444e90:
  if (local_c0 + 1 < puStack_b8) {
    local_c0 = local_c0 + 1;
    uVar3 = FUN_004290b0();
  }
  else {
    uVar4 = FUN_00427c40(&local_c0);
    if ((uVar4 & 1) == 0) goto LAB_00444ecc;
    uVar3 = FUN_004290b0(local_c0);
  }
  if ((uVar3 >> 5 & 1) != 0) {
    iVar10 = iVar10 + 1;
  }
  goto LAB_00444e90;
LAB_00444ecc:
  iVar10 = iVar10 + -1;
  iVar1 = iVar10 * 8 + 0x10;
  lVar5 = FUN_0043c4e0(DAT_04c6f050);
  lVar9 = DAT_04c6f058;
  if (lVar5 != 0) {
    lVar9 = lVar5;
  }
  plVar6 = (long *)FUN_00422030(*(undefined8 *)(lVar9 + 0x58),1,iVar1);
  iVar2 = iVar10 * 8 + 8;
  lVar5 = FUN_0043c4e0(DAT_04c6f050);
  lVar9 = DAT_04c6f058;
  if (lVar5 != 0) {
    lVar9 = lVar5;
  }
  plVar7 = (long *)FUN_00422030(*(undefined8 *)(lVar9 + 0x58),1,iVar2);
  *plVar6 = (long)iVar10;
  plVar6[1] = (long)plVar7;
  *plVar7 = (long)iVar10;
  local_d8 = (undefined8 *)param_1[1];
  uStack_d0 = param_1[2];
  uVar11 = *local_d8;
  local_c8 = 0;
  FUN_00427c30(&local_c0,uStack_d0,0);
  do {
    while (puStack_b8 <= local_c0 + 1) {
      uVar4 = FUN_00427c40(&local_c0);
      if (((uVar4 & 1) == 0) || (uVar3 = FUN_004290b0(local_c0), (uVar3 >> 5 & 1) != 0))
      goto LAB_00444fa0;
    }
    local_c0 = local_c0 + 1;
    uVar3 = FUN_004290b0();
  } while ((uVar3 >> 5 & 1) == 0);
LAB_00444fa0:
  lVar9 = 0;
LAB_00444fb4:
  do {
    if (puStack_b8 <= local_c0 + 1) goto LAB_00444fd4;
    local_c0 = local_c0 + 1;
    uVar3 = FUN_004290b0();
  } while ((uVar3 >> 5 & 1) == 0);
  goto LAB_00444fec;
LAB_00444fd4:
  uVar4 = FUN_00427c40(&local_c0);
  if ((uVar4 & 1) == 0) {
    FUN_00444570(&local_a0,uVar11,plVar6);
    if ((local_c8 & 1) != 0) {
      FUN_0043dd50(local_c8 & 0xfffffffffffffffe);
    }
    lVar5 = FUN_0043c4e0(DAT_04c6f050);
    lVar9 = DAT_04c6f058;
    if (lVar5 != 0) {
      lVar9 = lVar5;
    }
    FUN_004220c0(*(undefined8 *)(lVar9 + 0x58),plVar7,1,iVar2);
    lVar5 = FUN_0043c4e0(DAT_04c6f050);
    lVar9 = DAT_04c6f058;
    if (lVar5 != 0) {
      lVar9 = lVar5;
    }
    FUN_004220c0(*(undefined8 *)(lVar9 + 0x58),plVar6,1,iVar1);
    (**(code **)(*param_2 + 0x20))(param_2,&local_a0);
    uVar3 = *(uint *)(param_1 + 7);
    if (uVar3 == (*(uint *)((long)param_1 + 0x3c) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 6,8);
      uVar3 = *(uint *)(param_1 + 7);
    }
    *(long **)(param_1[6] + (long)(int)uVar3 * 8) = param_2;
    FUN_004435a0(param_2);
    *(uint *)(param_1 + 7) = uVar3 + 1;
    FUN_0043be10(&uStack_88);
    return;
  }
  uVar3 = FUN_004290b0(local_c0);
  if ((uVar3 >> 5 & 1) != 0) {
LAB_00444fec:
    FUN_0043f280(&local_f0,&local_d8,*local_c0);
    plVar6[lVar9 + 2] = local_f0;
    plVar7[lVar9 + 1] = lStack_e8;
    if ((local_e0 & 1) != 0) {
      FUN_0043dd50(local_e0 & 0xfffffffffffffffe);
    }
    lVar9 = lVar9 + 1;
  }
  goto LAB_00444fb4;
}

