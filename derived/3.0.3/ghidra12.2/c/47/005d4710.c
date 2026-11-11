
void FUN_005d4710(undefined8 param_1,long param_2,long param_3,float *param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  long *plVar16;
  int iVar17;
  uint uVar18;
  int iVar22;
  undefined1 auVar19 [12];
  int iVar21;
  undefined1 auVar20 [16];
  int iVar23;
  int iVar25;
  int iVar26;
  undefined1 auVar24 [16];
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  int local_70;
  undefined4 *local_68;
  
  puVar15 = (undefined2 *)PTR_DAT_04bd4d90;
  uVar9 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d90);
  uVar8 = FUN_0054e2d0(*(long *)(param_2 + 8) + 0x50,uVar9,4);
  lVar10 = FUN_0043c4e0(*puVar15);
  if (lVar10 != 0) {
    FUN_00443a00(lVar10,"TtcomputeContactPlanes");
  }
  puVar14 = (undefined2 *)PTR_DAT_04bd4d10;
  iVar17 = *(ushort *)((long)param_4 + 0x22) + 4;
  lVar11 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  plVar16 = (long *)PTR_DAT_04bd4d18;
  lVar10 = *(long *)PTR_DAT_04bd4d18;
  if (lVar11 != 0) {
    lVar10 = lVar11;
  }
  uVar13 = (ulong)(iVar17 * 0x10 + 0x7f) & 0x3fff80;
  if (uVar13 <= *(ulong *)(lVar10 + 0x10)) {
    local_78 = *(long *)(lVar10 + 0x18);
    uVar13 = uVar13 + local_78;
    if (uVar13 <= *(ulong *)(lVar10 + 0x20)) {
      *(ulong *)(lVar10 + 0x18) = uVar13;
      goto LAB_005d47e4;
    }
  }
  local_78 = FUN_00439510();
LAB_005d47e4:
  lVar10 = *(long *)(param_3 + 0x1a0);
  lVar11 = *(long *)(param_3 + 0x1a8);
  if ((lVar10 == 0) ||
     ((*(float *)(lVar10 + 0x40) < *(float *)(lVar10 + 0x30) ||
      *(float *)(lVar10 + 0x44) < *(float *)(lVar10 + 0x34)) ||
      *(float *)(lVar10 + 0x48) < *(float *)(lVar10 + 0x38))) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(lVar10 + 0x20) != 0;
  }
  if ((lVar11 == 0) ||
     ((*(float *)(lVar11 + 0x40) < *(float *)(lVar11 + 0x30) ||
      *(float *)(lVar11 + 0x44) < *(float *)(lVar11 + 0x34)) ||
      *(float *)(lVar11 + 0x48) < *(float *)(lVar11 + 0x38))) {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)(lVar11 + 0x20) != 0;
  }
  auVar24 = *(undefined1 (*) [16])(PTR_DAT_04bd4c80 + 0x240);
  auVar20._0_8_ = CONCAT44(-auVar24._4_4_,-auVar24._0_4_);
  auVar20._8_4_ = -auVar24._8_4_;
  auVar20._12_4_ = -auVar24._12_4_;
  uStack_98 = auVar24._8_8_;
  local_a0 = auVar24._0_8_;
  uStack_88 = auVar20._8_8_;
  local_90 = auVar20._0_8_;
  if (bVar6) {
    auVar1._12_4_ = (int)((ulong)*(undefined8 *)(lVar10 + 0x38) >> 0x20);
    auVar1._0_12_ = *(undefined1 (*) [12])(lVar10 + 0x30);
    auVar24 = NEON_fmin(auVar24,auVar1,4);
    auVar2._12_4_ = (int)((ulong)*(undefined8 *)(lVar10 + 0x48) >> 0x20);
    auVar2._0_12_ = *(undefined1 (*) [12])(lVar10 + 0x40);
    auVar20 = NEON_fmax(auVar20,auVar2,4);
    uStack_98 = auVar24._8_8_;
    local_a0 = auVar24._0_8_;
    uStack_88 = auVar20._8_8_;
    local_90 = auVar20._0_8_;
  }
  if (bVar7) {
    auVar3._12_4_ = (int)((ulong)*(undefined8 *)(lVar11 + 0x38) >> 0x20);
    auVar3._0_12_ = *(undefined1 (*) [12])(lVar11 + 0x30);
    auVar24 = NEON_fmin(auVar24,auVar3,4);
    uStack_98 = auVar24._8_8_;
    local_a0 = auVar24._0_8_;
    auVar24 = NEON_fmax(auVar20,*(undefined1 (*) [16])(lVar11 + 0x40),4);
    uStack_88 = auVar24._8_8_;
    local_90 = auVar24._0_8_;
  }
  local_70 = iVar17;
  FUN_005d7b80(param_4,&local_a0,param_5,&local_78,&local_a4);
  if (0 < local_a4) {
    if (bVar6) {
      lVar12 = FUN_0043c4e0(*puVar15);
      if (lVar12 != 0) {
        FUN_00443a00(lVar12,"TtcollideTriangles");
      }
      iVar17 = *(int *)(lVar10 + 0x20);
      if (0 < iVar17) {
        lVar10 = *(long *)(lVar10 + 0x18);
        do {
          iVar21 = iVar17;
          if (0xffef < iVar17) {
            iVar21 = 0xfff0;
          }
          FUN_005d8210(param_4,lVar10,iVar21,&local_78,local_a4,param_5);
          lVar10 = lVar10 + (long)iVar21 * 0x30;
          iVar17 = iVar17 - iVar21;
        } while (0 < iVar17);
      }
      puVar15 = (undefined2 *)PTR_DAT_04bd4d90;
      lVar10 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d90);
      plVar16 = (long *)PTR_DAT_04bd4d18;
      puVar14 = (undefined2 *)PTR_DAT_04bd4d10;
      if (lVar10 != 0) {
        FUN_00443a70(lVar10,&DAT_04085310);
      }
    }
    if (bVar7) {
      lVar10 = FUN_0043c4e0(*puVar15);
      if (lVar10 != 0) {
        FUN_00443a00(lVar10,"TtcollideConvexes");
      }
      if (*(int *)(lVar11 + 0x20) != 0) {
        lVar12 = (long)*(int *)(lVar11 + 0x20) * 0x70;
        lVar10 = *(long *)(lVar11 + 0x18);
        do {
          iVar17 = -(uint)(*(float *)(lVar10 + 0x50) <= param_4[4]);
          iVar21 = -(uint)(*(float *)(lVar10 + 0x54) <= param_4[5]);
          iVar22 = -(uint)(*(float *)(lVar10 + 0x58) <= param_4[6]);
          iVar23 = -(uint)(*param_4 <= (float)*(undefined8 *)(lVar10 + 0x60));
          iVar25 = -(uint)(param_4[1] <= (float)((ulong)*(undefined8 *)(lVar10 + 0x60) >> 0x20));
          iVar26 = -(uint)(param_4[2] <= (float)*(undefined8 *)(lVar10 + 0x68));
          uVar18 = CONCAT13((byte)((uint)iVar23 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                            CONCAT12((byte)((uint)iVar23 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                                     CONCAT11((byte)((uint)iVar23 >> 8) & (byte)((uint)iVar17 >> 8),
                                              (byte)iVar23 & (byte)iVar17)));
          auVar19._0_8_ =
               CONCAT17((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
                        CONCAT16((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar21 >> 0x10),
                                 CONCAT15((byte)((uint)iVar25 >> 8) & (byte)((uint)iVar21 >> 8),
                                          CONCAT14((byte)iVar25 & (byte)iVar21,uVar18))));
          auVar19[8] = (byte)iVar26 & (byte)iVar22;
          auVar19[9] = (byte)((uint)iVar26 >> 8) & (byte)((uint)iVar22 >> 8);
          auVar19[10] = (byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar22 >> 0x10);
          auVar19[0xb] = (byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar22 >> 0x18);
          if ((uVar18 & (uint)((ulong)auVar19._0_8_ >> 0x20) & auVar19._8_4_) != 0) {
            FUN_005d83e0(param_4,lVar10,&local_78,local_a4,param_5);
          }
          lVar10 = lVar10 + 0x70;
          lVar12 = lVar12 + -0x70;
        } while (lVar12 != 0);
      }
      lVar10 = FUN_0043c4e0(*puVar15);
      if (lVar10 != 0) {
        FUN_00443a70(lVar10,&DAT_04085310);
      }
    }
  }
  FUN_005da4e0(param_4,param_5);
  if ((uVar8 & 1) != 0) {
    lVar10 = FUN_0043c4e0(*puVar15);
    local_68 = (undefined4 *)0x0;
    if ((lVar10 != 0) &&
       (FUN_00443d50(lVar10,&DAT_0405b9b0,&local_68,PTR_DAT_04bd71c8,0x18,4),
       local_68 != (undefined4 *)0x0)) {
      uVar4 = *(undefined4 *)(param_3 + 0xb4);
      uVar5 = *(undefined4 *)(param_3 + 0xb8);
      *local_68 = *(undefined4 *)(param_3 + 0xb0);
      local_68[1] = uVar4;
      local_68[2] = uVar5;
      auVar24 = *(undefined1 (*) [16])(param_3 + 0xc0);
      *(long *)(local_68 + 3) = auVar24._0_8_;
      local_68[5] = auVar24._8_4_;
    }
  }
  iVar17 = local_70;
  lVar11 = local_78;
  lVar12 = FUN_0043c4e0(*puVar14);
  lVar10 = *plVar16;
  if (lVar12 != 0) {
    lVar10 = lVar12;
  }
  uVar13 = (ulong)(int)(iVar17 * 0x10 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar10 + 0x10) < uVar13) || (*(long *)(lVar10 + 0x18) != uVar13 + lVar11)) ||
     (*(long *)(lVar10 + 0x28) == lVar11)) {
    FUN_00439980(lVar10,lVar11);
    lVar10 = FUN_0043c4e0(*puVar15);
  }
  else {
    *(long *)(lVar10 + 0x18) = lVar11;
    lVar10 = FUN_0043c4e0(*puVar15);
  }
  if (lVar10 != 0) {
    FUN_00443a70(lVar10,&DAT_04085310);
  }
  return;
}

