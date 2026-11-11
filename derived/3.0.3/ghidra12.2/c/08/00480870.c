
void FUN_00480870(undefined4 **param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  uint *local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50 [32];
  
  local_60 = local_50;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0x80000020;
  if (*(int *)(param_1 + 1) == 0) {
    local_58._0_4_ = 1;
    local_58._4_4_ = 0x80000020;
    local_50[0] = 0x30;
    puVar11 = PTR_DAT_048607b8;
    goto LAB_00480b50;
  }
  local_70 = 0;
  local_68 = -0x8000000000000000;
  if (param_2 != 0) {
    FUN_00426990(PTR_DAT_048607b8,&local_70,4);
    *(int *)(local_70 + (long)(int)local_68 * 4) = param_2;
    local_68 = CONCAT44(local_68._4_4_,(int)local_68 + 1);
  }
  local_80 = (undefined4 *)0x0;
  local_78 = -0x8000000000000000;
  if (&local_80 == param_1) {
LAB_00480a80:
    local_88 = -0x8000000000000000;
    local_90 = (uint *)0x0;
    lVar10 = local_88;
  }
  else {
    local_78 = 0x8000000000000000;
    iVar9 = *(int *)(param_1 + 1);
    if (0 < iVar9) {
      puVar12 = *param_1;
      local_80 = (undefined4 *)
                 FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,iVar9,4,0,0,(long)&local_78 + 4);
      uVar7 = (long)iVar9 * 4 - 4;
      uVar4 = ((uint)(uVar7 >> 2) & 0x3fffffff) + 1;
      puVar6 = puVar12;
      puVar3 = local_80;
      if ((uVar4 & 3) != 0) {
        lVar10 = -((ulong)uVar4 & 3);
        puVar2 = local_80;
        puVar5 = puVar12;
        do {
          puVar6 = puVar5 + 1;
          lVar10 = lVar10 + 1;
          puVar3 = puVar2 + 1;
          *puVar2 = *puVar5;
          puVar2 = puVar3;
          puVar5 = puVar6;
        } while (lVar10 != 0);
      }
      if (0xb < uVar7) {
        do {
          *puVar3 = *puVar6;
          puVar3[1] = puVar6[1];
          puVar3[2] = puVar6[2];
          puVar2 = puVar6 + 3;
          puVar6 = puVar6 + 4;
          puVar3[3] = *puVar2;
          puVar3 = puVar3 + 4;
        } while (puVar6 != puVar12 + iVar9);
      }
    }
    puVar11 = PTR_DAT_048607b8;
    local_78 = CONCAT44(local_78._4_4_,iVar9);
    local_90 = (uint *)0x0;
    local_88 = -0x8000000000000000;
    if (iVar9 == 0) goto LAB_00480a80;
    do {
      FUN_0047ff90(&local_80,&local_70,&local_80,&local_90);
      uVar4 = 0;
      if ((int)local_88 != 0) {
        uVar4 = *local_90;
      }
      if ((uint)local_58 == (local_58._4_4_ & 0x3fffffff)) {
        FUN_00426990(puVar11,&local_60,1);
      }
      local_60[(int)(uint)local_58] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar4];
      local_58._0_4_ = (uint)local_58 + 1;
      lVar10 = local_88;
    } while ((int)local_78 != 0);
  }
  if (1 < (int)(uint)local_58) {
    lVar8 = 0;
    iVar9 = -1;
    do {
      uVar1 = local_60[lVar8];
      local_60[lVar8] = local_60[(int)((uint)local_58 + iVar9)];
      lVar8 = lVar8 + 1;
      local_60[(int)(iVar9 + (uint)local_58)] = uVar1;
      iVar9 = iVar9 + -1;
    } while (lVar8 < (int)(uint)local_58 >> 1);
  }
  puVar11 = PTR_DAT_048607b8;
  local_88._4_4_ = (uint)((ulong)lVar10 >> 0x20);
  uVar4 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_90 != (uint *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_90,4,uVar4 & 0x3fffffff);
  }
  lVar10 = local_78;
  uVar4 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_80 != (undefined4 *)0x0)) {
    FUN_00421f90(puVar11,local_80,4,uVar4 & 0x3fffffff);
  }
  lVar10 = local_68;
  uVar4 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_70 != 0)) {
    FUN_00421f90(puVar11,local_70,4,uVar4 & 0x3fffffff);
  }
LAB_00480b50:
  FUN_004225f0(param_3,local_60,(uint)local_58);
  uVar4 = local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < (int)uVar4) && (local_60 != (undefined1 *)0x0)) {
    FUN_00421f90(puVar11,local_60,1,uVar4 & 0x3fffffff);
  }
  return;
}

