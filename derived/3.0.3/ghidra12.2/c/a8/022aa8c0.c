
undefined8 FUN_022aa8c0(float param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined *puVar5;
  int iVar6;
  short sVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined1 local_44 [4];
  
  puVar5 = PTR_DAT_04bb27c8;
  if ((param_3 & 1) == 0) {
    if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
      sVar7 = *(short *)PTR_DAT_04bb6298;
      if (sVar7 == -1) {
        return 0;
      }
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar4 >> 1 & 1) == 0) {
        puVar5 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
        if (0xff < (uint)(int)sVar7) {
          puVar5 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar5 + 4) & 1) == 0) {
          return 0;
        }
        local_88 = *(int *)(param_2 + 8);
        iStack_84 = *(int *)(param_2 + 0xc);
        local_98 = PTR_DAT_04bbc1a0 + 0x10;
        local_90 = PTR_DAT_04bb2010 + 0x10;
        local_78 = local_88 + 1;
        iStack_74 = iStack_84 + 1;
        local_80 = local_90;
        uVar8 = FUN_0097d8e0(&local_98);
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        local_90 = (undefined *)CONCAT44(local_90._4_4_,(float)*(int *)(param_2 + 0xc) * 5.0 + 5.0);
        local_98 = (undefined *)(ulong)(uint)((float)*(int *)(param_2 + 8) * 5.0 + 5.0);
        lVar9 = *(long *)PTR_DAT_04bb27c8;
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x90) != 0)) {
          fVar14 = (float)FUN_0094ba6c(lVar9 + 0x28,&local_98,0);
          goto LAB_022aac38;
        }
        goto LAB_022aac10;
      }
    }
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    iVar6 = *(int *)(param_2 + 8);
    iVar12 = *(int *)(param_2 + 0xc);
    iVar1 = iVar12 + 2;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    iVar13 = iVar6;
    do {
      lVar9 = *(long *)puVar5;
      if (lVar9 == 0) {
        return 0;
      }
      lVar9 = *(long *)(lVar9 + 0xa8);
      if (lVar9 == 0) {
        return 0;
      }
      local_a8 = puVar2;
      local_a0 = iVar13;
      iStack_9c = iVar12;
      local_98 = puVar3;
      local_90 = puVar2;
      local_88 = iVar13;
      iStack_84 = iVar12;
      local_80 = puVar2;
      local_78 = iVar13;
      iStack_74 = iVar12;
      uVar8 = FUN_00971f80(lVar9,&local_98,0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      uVar8 = FUN_00975dc0(&local_a8);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      if (iVar13 < iVar6 + 1) {
        iVar13 = iVar13 + 1;
      }
      else {
        iVar12 = iVar12 + 1;
        iVar13 = iVar6;
      }
    } while ((iVar6 != iVar13) || (iVar1 != iVar12));
    local_90 = (undefined *)CONCAT44(local_90._4_4_,(float)*(int *)(param_2 + 0xc) * 5.0 + 5.0);
    local_98 = (undefined *)CONCAT44(local_98._4_4_,(float)*(int *)(param_2 + 8) * 5.0 + 5.0);
    fVar14 = (float)FUN_0093a950(*(long *)puVar5 + 0x28,&local_98,0);
  }
  else {
    local_88 = *(int *)(param_2 + 8);
    iStack_84 = *(int *)(param_2 + 0xc);
    local_98 = PTR_DAT_04bbc1a0 + 0x10;
    local_90 = PTR_DAT_04bb2010 + 0x10;
    local_78 = local_88 + 1;
    iStack_74 = iStack_84 + 1;
    local_80 = local_90;
    uVar8 = FUN_0097d8e0(&local_98);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    local_90 = (undefined *)CONCAT44(local_90._4_4_,(float)*(int *)(param_2 + 0xc) * 5.0 + 5.0);
    local_98 = (undefined *)CONCAT44(local_98._4_4_,(float)*(int *)(param_2 + 8) * 5.0 + 5.0);
    if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
       (lVar9 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar9 != 0)) {
      local_44[0] = 0;
      sVar7 = *(short *)PTR_DAT_04bb6298;
      if (sVar7 == -1) {
        uVar11 = 7;
      }
      else {
        puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
        if (0xff < (uint)(int)sVar7) {
          puVar4 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar11 = 7;
        if ((*puVar4 & 2) != 0) {
          uVar11 = 5;
        }
      }
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar11);
      fVar14 = (float)FUN_00962700(lVar9,&local_98,&local_a8,0,local_44);
      goto LAB_022aac38;
    }
LAB_022aac10:
    fVar14 = -500.0;
  }
LAB_022aac38:
  uVar10 = 0;
  if ((fVar14 - param_1 <= 5.0) && (-5.0 <= fVar14 - param_1)) {
    uVar10 = 1;
  }
  return uVar10;
}

