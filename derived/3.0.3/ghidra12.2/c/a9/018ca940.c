
undefined8 FUN_018ca940(undefined8 param_1,undefined4 *param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  float *pfVar14;
  short *psVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined **local_128;
  undefined **ppuStack_120;
  undefined **local_108;
  int local_100;
  int iStack_fc;
  undefined *local_e8;
  undefined8 local_e0;
  undefined ***local_d8;
  undefined **ppuStack_d0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined *local_68;
  
  sVar5 = *(short *)PTR_DAT_04bb6298;
  local_68 = param_3;
  if (sVar5 != -1) {
    local_98 = (undefined *)CONCAT44(local_98._4_4_,0x1a);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar4 >> 0x1a & 1) != 0) &&
       (local_98 = (undefined *)CONCAT44(local_98._4_4_,1), (*puVar4 >> 1 & 1) != 0)) {
      local_a8 = PTR_DAT_04bb2018 + 0x10;
      uStack_a0 = 0;
      local_b8 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      local_98 = PTR_DAT_04bbc1a0 + 0x10;
      uStack_b0 = 0;
      local_78 = 0;
      local_88 = 0;
      local_c4 = 0;
      local_90 = local_b8;
      local_80 = local_b8;
      lVar11 = FUN_018cadb8(*(undefined8 *)PTR_DAT_04bb47e0,0x11,*param_2);
      puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x1b8) + 0xf0))(lVar11 + 0x1b8);
      local_c0 = *puVar12;
      local_e0 = &local_a8;
      local_d8 = &local_b8;
      ppuStack_d0 = &local_98;
      ppuStack_120 = &local_68;
      local_108 = &PTR_LAB_049d08e8;
      local_bc = 0;
      local_ba = 1;
      local_128 = &PTR_LAB_049d0910;
      local_e8 = param_3;
      uVar13 = FUN_018bbd90(&local_e8,&local_c4,&local_108,&local_128);
      if ((uVar13 & 1) != 0) {
        return 1;
      }
    }
  }
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
    local_e8 = PTR_DAT_04bbfe68 + 0x10;
    fVar19 = (float)(int)((int)((float)(int)*(float *)(local_68 + 8) / 10.0) -
                         (uint)(*(float *)(local_68 + 8) < 0.0)) * 10.0;
    fVar21 = (float)(int)((int)((float)(int)*(float *)(local_68 + 0x10) / 10.0) -
                         (uint)(*(float *)(local_68 + 0x10) < 0.0)) * 10.0;
    fVar20 = fVar19 + 2.5;
    fVar22 = fVar21 + 2.5;
    fVar19 = fVar19 + 10.0 + -2.5;
    fVar21 = fVar21 + 10.0 + -2.5;
    iVar6 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
    iVar7 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
    iVar17 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
    iVar3 = iVar6;
    if (iVar17 <= iVar6) {
      iVar3 = iVar17;
    }
    if (iVar6 <= iVar17) {
      iVar6 = iVar17;
    }
    lVar11 = *(long *)PTR_DAT_04bb2720;
    iVar10 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
    iVar17 = iVar7;
    if (iVar10 <= iVar7) {
      iVar17 = iVar10;
    }
    if (iVar7 <= iVar10) {
      iVar7 = iVar10;
    }
    if (lVar11 == 0) {
      puVar18 = &DAT_055c04a0;
    }
    else {
      puVar18 = &DAT_055c04a0;
      if (*(long *)(lVar11 + 0x330) != 0) {
        puVar18 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
        iVar10 = FUN_006bd550(*puVar18,0);
        puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar10 != 0x758f7eaf) {
          puVar18 = &DAT_055c04a0;
        }
      }
    }
    local_e0 = (undefined **)CONCAT44(*(undefined4 *)(puVar18 + 7),(undefined4)local_e0);
    uVar9 = FUN_017baf44();
    puVar8 = PTR_DAT_04bb27c8;
    local_d8 = (undefined ***)(CONCAT71(local_d8._1_7_,uVar9) & 0xffffffffffffff01);
    if (iVar7 + 1 != iVar17) {
      ppuVar1 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      iVar10 = iVar3;
      do {
        local_88 = CONCAT44(iVar17,iVar10);
        local_78 = CONCAT44(iVar17,iVar10);
        if ((*(long *)puVar8 == 0) || (lVar11 = *(long *)(*(long *)puVar8 + 0xa8), lVar11 == 0))
        goto LAB_018caac8;
        local_108 = ppuVar1;
        local_100 = iVar10;
        iStack_fc = iVar17;
        local_98 = puVar2;
        local_90 = ppuVar1;
        local_80 = ppuVar1;
        uVar13 = FUN_00971f80(lVar11,&local_98,0);
        if (((uVar13 & 1) == 0) ||
           ((uVar13 = FUN_00975dc0(&local_108), (uVar13 & 1) == 0 ||
            (psVar15 = (short *)FUN_01a5190c(&local_e8,0,&local_108,0), *psVar15 != -2))))
        goto LAB_018caac8;
        if (iVar10 < iVar6) {
          iVar10 = iVar10 + 1;
        }
        else {
          iVar17 = iVar17 + 1;
          iVar10 = iVar3;
        }
      } while ((iVar3 != iVar10) || (iVar7 + 1 != iVar17));
    }
    lVar11 = FUN_018cadb8(*(undefined8 *)PTR_DAT_04bb47e0,0x11,*param_2);
    uVar16 = 1;
    local_98 = *(undefined **)(local_68 + 8);
    local_90 = (undefined **)CONCAT44(local_90._4_4_,*(undefined4 *)(local_68 + 0x10));
    fVar19 = (float)FUN_015cb8d4(&local_98,1);
    pfVar14 = (float *)(**(code **)(*(long *)(lVar11 + 0x1b8) + 0xf0))(lVar11 + 0x1b8);
    fVar20 = *pfVar14;
    *(undefined4 *)(local_68 + 0x18) = 0;
    *(undefined4 *)(local_68 + 8) = local_98._0_4_;
    *(float *)(local_68 + 0xc) = fVar19 + fVar20;
    *(undefined4 *)(local_68 + 0x10) = local_90._0_4_;
  }
  else {
LAB_018caac8:
    uVar16 = 0;
  }
  return uVar16;
}

