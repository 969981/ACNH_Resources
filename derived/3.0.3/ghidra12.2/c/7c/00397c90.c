
void FUN_00397c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  iVar9 = (int)*(float *)(*(long *)(param_1 + 0x20) + 0x24);
  iVar10 = (int)*(float *)(*(long *)(param_1 + 0x20) + 0x20);
  if (0 < *(int *)(param_1 + 0x154)) {
    plVar5 = (long *)FUN_00367b30(0xd8);
    if (plVar5 != (long *)0x0) {
      *(undefined4 *)(plVar5 + 2) = 0;
      puVar1 = PTR_DAT_04bd07b8;
      plVar5[7] = 0;
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plVar5[6] = 0;
      *plVar5 = (long)(puVar1 + 0x10);
      plVar5[1] = -1;
      FUN_0034f974(plVar5 + 8);
      FUN_0034f3dc(plVar5 + 0x11);
      plVar5[0x1a] = -0x100000000;
    }
    *(long **)(param_1 + 0x1c0) = plVar5;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    iStack_7c = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_86 = 0;
    uStack_84 = 0;
    FUN_0034fd48(&local_90);
    local_78 = CONCAT44(local_78._4_4_,iVar9);
    local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
    uStack_84 = 0xb01;
    local_80 = 0xa0;
    local_88 = (undefined2)*(undefined4 *)(param_1 + 0x154);
    local_90 = CONCAT26(1,(undefined6)local_90);
    iStack_7c = iVar10;
    uVar6 = (**(code **)(**(long **)(param_1 + 0x1c0) + 0x30))();
    if ((uVar6 & 1) == 0) {
      FUN_0038ba78(*(undefined8 *)(param_1 + 0x1c0),param_2,param_3,&local_90,0);
    }
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    iStack_7c = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_86 = 0;
    uStack_84 = 0;
    FUN_0034fc18(&local_90);
    uVar2 = local_90;
    uVar4 = local_90._4_2_;
    local_90._0_3_ = (uint3)(ushort)local_90;
    uVar3 = local_90;
    local_90._6_2_ = SUB82(uVar2,6);
    local_90._0_4_ = (undefined4)uVar3;
    local_90 = CONCAT26(local_90._6_2_,CONCAT24(uVar4,(undefined4)local_90)) | 0xe00000000;
    FUN_0034fbf8(&local_78);
    local_78 = CONCAT71(local_78._1_7_,(char)*(undefined4 *)(param_1 + 0x154));
    lVar7 = FUN_00367b30(0x30);
    if (lVar7 != 0) {
      FUN_0034e9dc(lVar7);
    }
    *(long *)(param_1 + 0x1c8) = lVar7;
    FUN_0034e9f0(lVar7,param_2,&local_90);
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  iStack_7c = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_86 = 0;
  uStack_84 = 0;
  FUN_0034fd48(&local_90);
  uStack_84 = 0xb01;
  local_80 = 0xa0;
  local_78 = CONCAT44(local_78._4_4_,iVar9);
  local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
  local_90 = CONCAT26(1,(undefined6)local_90);
  iStack_7c = iVar10;
  uVar6 = (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  if ((uVar6 & 1) == 0) {
    FUN_0038ba78(*(undefined8 *)(param_1 + 8),param_2,param_3,&local_90,0);
  }
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  iStack_7c = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_86 = 0;
  uStack_84 = 0;
  FUN_0034fd48(&local_90);
  local_90._0_2_ = CONCAT11(2,(undefined1)local_90);
  uStack_84 = 0x1307;
  local_80 = 0x100;
  local_90 = CONCAT26(1,(undefined6)local_90);
  local_78 = CONCAT44(1,iVar9);
  local_88 = (undefined2)*(undefined4 *)(param_1 + 0x154);
  iStack_7c = iVar10;
  (**(code **)PTR_DAT_04bc9520)
            (param_1 + 0x160,param_1 + 0x168,param_1 + 0x170,0,&local_90,
             *(undefined8 *)PTR_DAT_04bc9530,0);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_0034fdc4(&local_c0);
  uVar8 = 6;
  if (*(int *)(param_1 + 0x154) < 1) {
    uVar8 = 1;
  }
  local_c0 = CONCAT71(local_c0._1_7_,uVar8);
  local_a8 = *(undefined8 *)(param_1 + 0x160);
  FUN_0034fa74(param_1 + 0x178);
  FUN_0034fa90(param_1 + 0x178,param_2,&local_c0);
  return;
}

