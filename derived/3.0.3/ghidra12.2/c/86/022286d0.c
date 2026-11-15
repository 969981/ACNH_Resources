
void FUN_022286d0(long param_1)

{
  int iVar1;
  long *plVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  (**(code **)(**(long **)(param_1 + 0x68) + 0x178))(*(undefined4 *)(param_1 + 0x318));
  lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x1150);
  if (lVar4 != 0) {
    local_a0 = &PTR_LAB_048f9770;
    uStack_98 = s_ItemBox_Root_04a77876;
    if (*(int *)(lVar4 + 0x30) == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      lVar7 = *(long *)(lVar4 + 0x38);
      lVar6 = 0;
      lVar8 = (long)*(int *)(lVar4 + 0x30) << 3;
      uVar5 = 0xffffffff;
      do {
        plVar2 = (long *)**(undefined8 **)(lVar7 + lVar6 * 8);
        iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,&local_a0);
        if (iVar1 != -1) {
          uVar5 = (ulong)((uint)lVar6 & 0xffff | iVar1 << 0x10);
          break;
        }
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    plVar2 = (long *)**(undefined8 **)
                       (*(long *)(lVar4 + 0x38) +
                       (-(uVar5 >> 0xf & 1) & 0xfffffffffff80000 | (uVar5 & 0xffff) << 3));
    (**(code **)(*plVar2 + 0x70))(plVar2,&local_a0,(int)uVar5 >> 0x10);
    local_d0 = &PTR_LAB_048f9770;
    local_c8 = "joint2";
    fVar22 = uStack_98._4_4_ + local_a0._4_4_ * 0.0 + (float)local_a0 * 0.0 + (float)uStack_98 * 0.0
    ;
    fVar23 = local_88._4_4_ + local_90._4_4_ * 0.0 + (float)local_90 * 0.0 + (float)local_88 * 0.0;
    fVar24 = uStack_78._4_4_ + local_80._4_4_ * 0.0 + (float)local_80 * 0.0 + (float)uStack_78 * 0.0
    ;
    if (*(int *)(lVar4 + 0x30) == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      lVar7 = *(long *)(lVar4 + 0x38);
      lVar6 = 0;
      lVar8 = (long)*(int *)(lVar4 + 0x30) << 3;
      uVar5 = 0xffffffff;
      do {
        plVar2 = (long *)**(undefined8 **)(lVar7 + lVar6 * 8);
        iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,&local_d0);
        if (iVar1 != -1) {
          uVar5 = (ulong)((uint)lVar6 & 0xffff | iVar1 << 0x10);
          break;
        }
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    plVar2 = (long *)**(undefined8 **)
                       (*(long *)(lVar4 + 0x38) +
                       (-(uVar5 >> 0xf & 1) & 0xfffffffffff80000 | (uVar5 & 0xffff) << 3));
    (**(code **)(*plVar2 + 0x70))(plVar2,&local_d0,(int)uVar5 >> 0x10);
    fVar22 = fVar22 - (local_c8._4_4_ +
                      local_d0._4_4_ * 0.0 + (float)local_d0 * 0.0 + (float)local_c8 * 0.0);
    fVar23 = fVar23 - (fStack_b4 + fStack_bc * 0.0 + local_c0 * 0.0 + local_b8 * 0.0);
    fVar24 = fVar24 - (fStack_a4 + fStack_ac * 0.0 + local_b0 * 0.0 + local_a8 * 0.0);
    lVar4 = FUN_0222821c(param_1);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x150) + 0xf0))(lVar4 + 0x150);
    fVar9 = *(float *)(param_1 + 0x318);
    fVar12 = SQRT(fVar23 * fVar23 + fVar22 * fVar22 + fVar24 * fVar24);
    if (0.0 < fVar12) {
      fVar12 = (*pfVar3 - (fVar9 * -3.8 + 3.8)) / fVar12;
      fVar22 = fVar22 * fVar12;
      fVar23 = fVar23 * fVar12;
      fVar24 = fVar24 * fVar12;
    }
    local_a0._4_4_ = fVar9 * local_a0._4_4_;
    local_90._4_4_ = fVar9 * local_90._4_4_;
    local_a0._0_4_ = fVar9 * (float)local_a0;
    local_90._0_4_ = fVar9 * (float)local_90;
    local_80._4_4_ = fVar9 * local_80._4_4_;
    uStack_98._4_4_ = fVar9 * fVar22 + uStack_98._4_4_;
    local_80._0_4_ = fVar9 * (float)local_80;
    uStack_98._0_4_ = fVar9 * (float)uStack_98;
    local_88._4_4_ = fVar9 * fVar23 + local_88._4_4_;
    uStack_78._4_4_ = fVar9 * fVar24 + uStack_78._4_4_;
    local_88._0_4_ = fVar9 * (float)local_88;
    uStack_78._0_4_ = fVar9 * (float)uStack_78;
    lVar4 = FUN_0222821c(param_1);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x308) + 0xf0))(lVar4 + 0x308);
    fVar12 = *pfVar3;
    fVar10 = cosf(fVar12 * 0.5);
    fVar12 = sinf(fVar12 * 0.5);
    *(float *)(param_1 + 0x308) = fVar9 * fVar22;
    *(float *)(param_1 + 0x30c) = fVar9 * fVar23;
    *(float *)(param_1 + 0x310) = fVar9 * fVar24;
    fVar23 = fVar12 * 0.0;
    fVar14 = fVar12 * (fVar12 + fVar12);
    fVar24 = (fVar10 + fVar10) * fVar23;
    fVar27 = fVar23 * (fVar23 + fVar23);
    fVar15 = fVar12 * (fVar23 + fVar23);
    fVar11 = (fVar10 + fVar10) * fVar12;
    fVar23 = (fVar12 + fVar12) * fVar23;
    fVar13 = (1.0 - fVar14) - fVar27;
    fVar25 = fVar24 + fVar15;
    fVar15 = fVar15 - fVar24;
    fVar14 = (1.0 - fVar27) - fVar14;
    fVar26 = fVar27 - fVar11;
    fVar11 = fVar11 + fVar27;
    fVar27 = (1.0 - fVar27) - fVar27;
    fVar16 = fVar24 + fVar23;
    fVar23 = fVar23 - fVar24;
    fVar19 = fVar11 * (float)local_90;
    fVar20 = (float)local_90 * 0.0;
    fVar17 = fVar11 * (float)local_a0;
    fVar18 = (float)local_a0 * 0.0;
    fVar24 = fVar23 * local_a0._4_4_;
    fVar9 = local_a0._4_4_ * 0.0;
    fVar22 = fVar23 * local_90._4_4_;
    fVar12 = local_90._4_4_ * 0.0;
    fVar11 = fVar11 * (float)local_80;
    fVar21 = (float)local_80 * 0.0;
    fVar23 = fVar23 * local_80._4_4_;
    fVar10 = local_80._4_4_ * 0.0;
    local_a0 = (undefined **)
               CONCAT44(fVar15 * (float)local_a0 + fVar27 * local_a0._4_4_ +
                        fVar16 * (float)uStack_98 + 0.0,
                        fVar13 * (float)local_a0 + fVar25 * local_a0._4_4_ +
                        fVar26 * (float)uStack_98 + 0.0);
    uStack_98 = (char *)CONCAT44(uStack_98._4_4_ + fVar18 + fVar9 + (float)uStack_98 * 0.0,
                                 fVar17 + fVar24 + fVar14 * (float)uStack_98 + 0.0);
    local_90 = CONCAT44(fVar15 * (float)local_90 + fVar27 * local_90._4_4_ +
                        fVar16 * (float)local_88 + 0.0,
                        fVar13 * (float)local_90 + fVar25 * local_90._4_4_ +
                        fVar26 * (float)local_88 + 0.0);
    local_88 = CONCAT44(local_88._4_4_ + fVar20 + fVar12 + (float)local_88 * 0.0,
                        fVar19 + fVar22 + fVar14 * (float)local_88 + 0.0);
    local_80 = CONCAT44(fVar15 * (float)local_80 + fVar27 * local_80._4_4_ +
                        fVar16 * (float)uStack_78 + 0.0,
                        fVar13 * (float)local_80 + fVar25 * local_80._4_4_ +
                        fVar26 * (float)uStack_78 + 0.0);
    uStack_78 = CONCAT44(uStack_78._4_4_ + fVar21 + fVar10 + (float)uStack_78 * 0.0,
                         fVar11 + fVar23 + fVar14 * (float)uStack_78 + 0.0);
  }
  if ((*(byte *)(param_1 + 0x328) >> 6 & 1) == 0) {
    FUN_01225960(0x3f800000,0,0,0,*(undefined8 *)PTR_DAT_04bb4778,param_1,param_1 + 0x280,&local_a0)
    ;
  }
  return;
}

