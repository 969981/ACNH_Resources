
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03bba0c0(long *param_1,undefined8 param_2,long param_3,float *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
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
  undefined8 local_2a8;
  ulong local_2a0;
  undefined1 auStack_298 [8];
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  float local_160;
  float fStack_15c;
  float local_158;
  float local_154;
  undefined8 local_150;
  float local_148;
  int local_144;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 *local_124;
  long local_11c;
  long local_114;
  long local_10c;
  long local_104;
  float local_fc;
  undefined4 local_f8;
  float fStack_f4;
  char cStack_f0;
  char cStack_ef;
  char cStack_ee;
  float local_ec;
  float fStack_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  if ((param_4 != (float *)0x0) || ((char)param_1[0x10] != '\0')) {
    if (param_4 == (float *)0x0) {
      fStack_15c = (float)param_1[0x11];
      local_158 = (float)((ulong)param_1[0x11] >> 0x20);
      local_150 = *(undefined8 *)((long)param_1 + 0x94);
      uVar6 = *(undefined8 *)((long)param_1 + 0xef);
      local_160 = *(float *)((long)param_1 + 0x84);
      local_154 = *(float *)(param_1 + 0x12);
      local_148 = *(float *)((long)param_1 + 0x9c);
      fStack_f4 = (float)((ulong)uVar6 >> 8);
      cStack_f0 = (char)((ulong)uVar6 >> 0x28);
      cStack_ef = (char)((ulong)uVar6 >> 0x30);
      cStack_ee = (char)((ulong)uVar6 >> 0x38);
      local_104 = param_1[0x1c];
      local_fc = (float)param_1[0x1d];
      local_f8 = (float)((ulong)param_1[0x1d] >> 0x20);
      local_114 = param_1[0x1a];
      local_10c = param_1[0x1b];
      local_124 = (undefined1 *)param_1[0x18];
      local_11c = param_1[0x19];
      local_144 = (int)param_1[0x14];
      fStack_140 = (float)((ulong)param_1[0x14] >> 0x20);
      uStack_13c = (undefined4)param_1[0x15];
      uStack_138 = (undefined4)((ulong)param_1[0x15] >> 0x20);
      uStack_134 = (undefined4)param_1[0x16];
      local_130 = (undefined4)((ulong)param_1[0x16] >> 0x20);
      uStack_12c = (undefined4)param_1[0x17];
      uStack_128 = (undefined4)((ulong)param_1[0x17] >> 0x20);
      if (*(char *)((long)param_1 + 0x81) == '\0') {
        lVar5 = *(long *)(DAT_05aebb78 + 0x28);
        local_150 = *(undefined8 *)(lVar5 + 0x120);
        local_160 = *(float *)(lVar5 + 0x110);
        local_154 = *(float *)(lVar5 + 0x11c);
        local_144 = *(int *)(lVar5 + 300);
        local_148 = *(float *)(lVar5 + 0x128);
        local_10c = *(long *)(lVar5 + 0x164);
        fStack_140 = *(float *)(lVar5 + 0x130);
        fStack_15c = (float)*(undefined8 *)(lVar5 + 0x114);
        local_158 = (float)((ulong)*(undefined8 *)(lVar5 + 0x114) >> 0x20);
        cStack_ef = (char)*(undefined2 *)(lVar5 + 0x181);
        cStack_ee = (char)((ushort)*(undefined2 *)(lVar5 + 0x181) >> 8);
        uStack_13c = (undefined4)*(undefined8 *)(lVar5 + 0x134);
        uStack_138 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x134) >> 0x20);
        uStack_134 = (undefined4)*(undefined8 *)(lVar5 + 0x13c);
        local_130 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x13c) >> 0x20);
        local_124 = *(undefined1 **)(lVar5 + 0x14c);
        uStack_12c = (undefined4)*(undefined8 *)(lVar5 + 0x144);
        uStack_128 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x144) >> 0x20);
        local_11c = *(long *)(lVar5 + 0x154);
        local_114 = *(long *)(lVar5 + 0x15c);
        local_104 = *(long *)(lVar5 + 0x16c);
      }
      bVar4 = true;
      if (*(char *)((long)param_1 + 0x81) == '\0') {
        bVar4 = cStack_f0 == '\0';
      }
    }
    else {
      fStack_15c = (float)*(undefined8 *)(param_4 + 1);
      local_158 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20);
      local_150 = *(undefined8 *)(param_4 + 4);
      local_160 = *param_4;
      local_154 = param_4[3];
      local_148 = param_4[6];
      local_104 = *(long *)(param_4 + 0x17);
      local_fc = (float)*(undefined8 *)(param_4 + 0x19);
      uVar6 = *(undefined8 *)((long)param_4 + 0x6b);
      local_11c = *(long *)(param_4 + 0x11);
      local_f8._0_3_ = (undefined3)((ulong)*(undefined8 *)(param_4 + 0x19) >> 0x20);
      local_f8._3_1_ = (undefined1)uVar6;
      fStack_f4 = (float)((ulong)uVar6 >> 8);
      cStack_f0 = (char)((ulong)uVar6 >> 0x28);
      cStack_ef = (char)((ulong)uVar6 >> 0x30);
      cStack_ee = (char)((ulong)uVar6 >> 0x38);
      local_124 = *(undefined1 **)(param_4 + 0xf);
      local_10c = *(long *)(param_4 + 0x15);
      local_114 = *(long *)(param_4 + 0x13);
      local_144 = (int)*(undefined8 *)(param_4 + 7);
      fStack_140 = (float)((ulong)*(undefined8 *)(param_4 + 7) >> 0x20);
      uStack_13c = (undefined4)*(undefined8 *)(param_4 + 9);
      uStack_138 = (undefined4)((ulong)*(undefined8 *)(param_4 + 9) >> 0x20);
      uStack_134 = (undefined4)*(undefined8 *)(param_4 + 0xb);
      local_130 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0xb) >> 0x20);
      uStack_12c = (undefined4)*(undefined8 *)(param_4 + 0xd);
      uStack_128 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0xd) >> 0x20);
      bVar4 = cStack_f0 == '\0';
    }
    fVar23 = fStack_f4;
    fVar21 = local_f8;
    FUN_03b7a790(auStack_298,param_3);
    puVar2 = PTR_DAT_04bd0c50;
    local_278 = param_2;
    (**(code **)(**(long **)PTR_DAT_04bd0c50 + 0x10))
              (*(long **)PTR_DAT_04bd0c50,param_2,local_288,uStack_280);
    puVar3 = local_290;
    if (bVar4) {
      fVar13 = 0.0;
      local_290 = &local_e0;
      uStack_b8 = 0;
      local_c8 = (ulong)(uint)(-((float)local_150 * 0.5) - local_158) << 0x20;
      puStack_d8 = (undefined1 *)((ulong)(uint)(fStack_15c + local_154 * 0.5) << 0x20);
      uStack_d0 = CONCAT44((float)local_150,local_154 * 0.0);
      local_e0 = CONCAT44((float)local_150 * 0.0,local_154);
      local_c0 = CONCAT44((float)local_150 * 0.0,local_154 * 0.0);
      (**(code **)(**(long **)puVar2 + 0x20))
                (*(long **)puVar2,local_278,&local_e0,&local_10c,&local_10c);
      local_e0 = 0x3f19999a3f19999a;
      puStack_d8 = (undefined1 *)0x3f8000003f19999a;
      local_290 = puVar3;
      if (0.0 < local_154) {
        fVar10 = (local_150._4_4_ / local_160) * local_154;
        do {
          local_2a0 = local_2a0 & 0xffffffff00000000;
          local_e4 = 0;
          local_ec = fVar13 + fStack_15c;
          fStack_e8 = -(local_158 + (float)local_150);
          local_2a8 = CONCAT44(-local_158,local_ec);
          FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
          fVar13 = fVar10 + fVar13;
        } while (fVar13 < local_154);
      }
      local_2a0 = local_2a0 & 0xffffffff00000000;
      local_e4 = 0;
      local_ec = local_154 + fStack_15c;
      local_2a8 = CONCAT44(-local_158,local_ec);
      fStack_e8 = -(local_158 + (float)local_150);
      FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
      if (0.0 < (float)local_150) {
        fVar10 = 0.0;
        fVar13 = local_148 * (float)local_150;
        do {
          local_2a0 = local_2a0 & 0xffffffff00000000;
          local_e4 = 0;
          fStack_e8 = -(fVar10 + local_158);
          local_2a8 = CONCAT44(fStack_e8,fStack_15c);
          local_ec = fStack_15c + local_154;
          FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
          fVar10 = fVar13 + fVar10;
        } while (fVar10 < (float)local_150);
      }
      local_2a0 = local_2a0 & 0xffffffff00000000;
      local_e4 = 0;
      fStack_e8 = -((float)local_150 + local_158);
      local_2a8 = CONCAT44(fStack_e8,fStack_15c);
      local_ec = fStack_15c + local_154;
      FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
    }
    else {
      FUN_03bb3b40(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x28),auStack_298);
    }
    if (cStack_ef != '\0') {
      local_2a0 = local_2a0 & 0xffffffff00000000;
      local_e0 = 0x3f19999a00000000;
      puStack_d8 = (undefined1 *)0x3f80000000000000;
      local_e4 = 0;
      fStack_e8 = -((float)local_150 * (1.0 - *(float *)((long)param_1 + 100)) + local_158);
      local_2a8._0_4_ = fStack_15c;
      local_ec = fStack_15c + local_154;
      local_2a8._4_4_ = fStack_e8;
      FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
      local_2a0 = local_2a0 & 0xffffffff00000000;
      local_e4 = 0;
      fStack_e8 = -((float)local_150 * (1.0 - *(float *)(param_1 + 0xd)) + local_158);
      local_2a8 = CONCAT44(fStack_e8,fStack_15c);
      local_ec = fStack_15c + local_154;
      FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
      if (cStack_ef != '\0') {
        local_2a0 = local_2a0 & 0xffffffff00000000;
        local_e4 = 0;
        local_e0 = 0x3f0000003f4ccccd;
        puStack_d8 = (undefined1 *)0x3f8000003e99999a;
        fStack_e8 = -(local_158 + (float)local_150);
        local_ec = (local_154 * *(float *)((long)param_1 + 0x6c)) / local_160 + fStack_15c;
        local_2a8 = CONCAT44(-local_158,local_ec);
        FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
      }
    }
    if ((param_4 == (float *)0x0) && ((char)param_1[0x20] != '\0')) {
      lVar5 = 0;
      if (DAT_05aebb78 != 0) {
        lVar5 = *(long *)(DAT_05aebb78 + 0x28);
      }
      uVar8 = *(uint *)((long)param_1 + 0xfc);
      if (((-1 < (int)uVar8) && ((int)uVar8 < (int)*(uint *)(lVar5 + 0x18))) &&
         (uVar8 < *(uint *)(lVar5 + 0x18))) {
        lVar7 = lVar5 + 8;
        uVar1 = uVar8 + 1 & 3;
        if (2 < uVar8) {
          uVar8 = uVar8 + 1 & 0xfffffffc;
          do {
            uVar8 = uVar8 - 4;
            lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
          } while (uVar8 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          lVar7 = *(long *)(lVar7 + 8);
        }
        if (((lVar7 != 0) && (lVar7 = lVar7 - *(int *)(lVar5 + 0x1c), lVar7 != 0)) &&
           (lVar5 = *(long *)(lVar7 + 0x90), lVar5 != 0)) {
          fVar21 = *(float *)(lVar5 + 0x50);
          fVar23 = *(float *)(lVar5 + 0x54);
        }
      }
    }
    fVar10 = *(float *)(param_1 + 0xf);
    fVar13 = fVar23 + fVar10;
    if (fVar10 <= 0.0) {
      fVar13 = fVar21;
      fVar10 = fVar21 - fVar23;
    }
    if ((cStack_ef != '\0') && (0.0 < fVar13)) {
      local_2a0 = local_2a0 & 0xffffffff00000000;
      local_e0 = 0x3e4ccccd3e4ccccd;
      puStack_d8 = &DAT_3f8000003f800000;
      local_e4 = 0;
      local_2a8._4_4_ = -local_158;
      local_ec = (fVar13 * local_154) / local_160 + fStack_15c;
      fStack_e8 = -(local_158 + (float)local_150);
      local_2a8._0_4_ = local_ec;
      FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
      local_2a0 = local_2a0 & 0xffffffff00000000;
      local_e4 = 0;
      local_ec = (fVar10 * local_154) / local_160 + fStack_15c;
      local_2a8 = CONCAT44(-local_158,local_ec);
      fStack_e8 = -(local_158 + (float)local_150);
      FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
    }
    fVar21 = (float)(**(code **)(*param_1 + 0x28))(0,param_1);
    if (0 < local_144) {
      iVar9 = 0;
      fVar21 = (1.0 - fVar21) * (float)local_150;
      if (fVar13 <= 0.0) {
        fVar12 = 0.0;
        do {
          iVar9 = iVar9 + 1;
          fVar14 = (float)local_144;
          fVar11 = (float)(**(code **)(*param_1 + 0x28))
                                    (((float)iVar9 / fVar14) * local_160,param_1);
          local_e0 = CONCAT44(uStack_138,uStack_13c);
          puStack_d8 = (undefined1 *)CONCAT44(local_130,uStack_134);
          local_2a0 = local_2a0 & 0xffffffff00000000;
          local_e4 = 0;
          fVar22 = (1.0 - fVar11) * (float)local_150;
          fVar11 = ((float)iVar9 / fVar14) * local_154;
          local_ec = fVar11 + fStack_15c;
          fStack_e8 = -(fVar22 + local_158);
          local_2a8 = CONCAT44(-(fVar21 + local_158),fVar12 + fStack_15c);
          FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
          fVar21 = fVar22;
          fVar12 = fVar11;
        } while (iVar9 < local_144);
      }
      else {
        fVar12 = 0.0;
        do {
          iVar9 = iVar9 + 1;
          fVar14 = (float)local_144;
          fVar22 = ((float)iVar9 / fVar14) * local_160;
          fVar11 = (float)(**(code **)(*param_1 + 0x28))(fVar22,param_1);
          local_e0 = CONCAT44(uStack_138,uStack_13c);
          puStack_d8 = (undefined1 *)CONCAT44(local_130,uStack_134);
          if ((0.0 < fVar13) &&
             ((fVar15 = 0.0, fVar13 <= fVar22 ||
              (((0.0 < fVar23 && (fVar13 - fVar23 < fVar22)) &&
               (fVar15 = 1.0 - (fVar22 - (fVar13 - fVar23)) / fVar23, fVar15 = fVar15 * fVar15,
               fVar15 < 1.0)))))) {
            fVar11 = fVar11 * fVar15;
            local_e0 = CONCAT44(uStack_128,uStack_12c);
            puStack_d8 = local_124;
          }
          local_2a0 = local_2a0 & 0xffffffff00000000;
          local_e4 = 0;
          fVar14 = ((float)iVar9 / fVar14) * local_154;
          fVar11 = (1.0 - fVar11) * (float)local_150;
          local_ec = fVar14 + fStack_15c;
          fStack_e8 = -(fVar11 + local_158);
          local_2a8 = CONCAT44(-(fVar21 + local_158),fVar12 + fStack_15c);
          FUN_038c5944(auStack_298,&local_2a8,&local_ec,&local_e0,&local_e0);
          fVar21 = fVar11;
          fVar12 = fVar14;
        } while (iVar9 < local_144);
      }
    }
    fVar21 = (float)(**(code **)(*param_1 + 0x28))(local_fc,param_1);
    if (0.0 < fVar13) {
      fVar12 = 1.0;
      if (((0.0 < fVar13) && (fVar12 = 0.0, local_fc < fVar13)) && (fVar12 = 1.0, 0.0 < fVar23)) {
        fVar12 = 1.0;
        if (fVar13 - fVar23 < local_fc) {
          fVar12 = 1.0 - (local_fc - (fVar13 - fVar23)) / fVar23;
          fVar12 = fVar12 * fVar12;
        }
      }
      fVar21 = fVar21 * fVar12;
    }
    if (cStack_ef != '\0') {
      puStack_d8 = (undefined1 *)((ulong)puStack_d8 & 0xffffffff00000000);
      local_2a8 = 0x3f800000;
      local_2a0 = 0x3f80000000000000;
      local_e4 = 0;
      fVar11 = (local_154 * local_fc) / local_160;
      fStack_e8 = -(local_158 + (float)local_150);
      local_ec = fVar11 + fStack_15c;
      local_e0 = CONCAT44(-local_158,local_ec);
      FUN_038c5944(auStack_298,&local_e0,&local_ec,&local_2a8,&local_2a8);
      fVar14 = fStack_140 + fStack_140;
      fVar11 = fVar11 + fStack_15c;
      fVar12 = -((1.0 - fVar21) * (float)local_150 + local_158);
      fVar22 = (float)*local_290;
      fVar15 = (float)((ulong)*local_290 >> 0x20);
      fVar16 = (float)local_290[1];
      local_e0 = CONCAT44(fVar22 * 0.0 + fVar14 * fVar15 + fVar16 * 0.0 + 0.0,
                          fVar14 * fVar22 + fVar15 * 0.0 + fVar16 * 0.0 + 0.0);
      puStack_d8 = (undefined1 *)
                   CONCAT44((float)((ulong)local_290[1] >> 0x20) +
                            fVar11 * fVar22 + fVar12 * fVar15 + fVar16 * 0.0,
                            fVar22 * 0.0 + fVar15 * 0.0 + fVar14 * fVar16 + 0.0);
      fVar22 = (float)local_290[2];
      fVar15 = (float)((ulong)local_290[2] >> 0x20);
      fVar17 = (float)local_290[4];
      fVar18 = (float)((ulong)local_290[4] >> 0x20);
      fVar20 = (float)((ulong)local_290[5] >> 0x20);
      fVar16 = (float)local_290[3];
      fVar19 = (float)local_290[5];
      uStack_d0 = CONCAT44(fVar22 * 0.0 + fVar14 * fVar15 + fVar16 * 0.0 + 0.0,
                           fVar14 * fVar22 + fVar15 * 0.0 + fVar16 * 0.0 + 0.0);
      local_c8 = CONCAT44((float)((ulong)local_290[3] >> 0x20) +
                          fVar11 * fVar22 + fVar12 * fVar15 + fVar16 * 0.0,
                          fVar22 * 0.0 + fVar15 * 0.0 + fVar14 * fVar16 + 0.0);
      local_c0 = CONCAT44(fVar17 * 0.0 + fVar14 * fVar18 + fVar19 * 0.0 + 0.0,
                          fVar14 * fVar17 + fVar18 * 0.0 + fVar19 * 0.0 + 0.0);
      uStack_b8 = CONCAT44(fVar20 + fVar11 * fVar17 + fVar12 * fVar18 + fVar19 * 0.0,
                           fVar17 * 0.0 + fVar18 * 0.0 + fVar14 * fVar19 + 0.0);
      (**(code **)(**(long **)puVar2 + 0x50))
                (local_c0,CONCAT44(fVar20,fVar20),*(long **)puVar2,local_278,&local_e0,&local_2a8,
                 &local_2a8);
    }
    (**(code **)(**(long **)puVar2 + 0x18))(*(long **)puVar2,local_278);
    if (cStack_ee != '\0') {
      (**(code **)(**(long **)(param_3 + 0x20) + 0x38))
                (*(long **)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x70));
      *(undefined1 *)(param_3 + 0x6c) = 0;
      lVar5 = *(long *)(param_3 + 8);
      *(float *)(param_3 + 0x28) =
           fStack_15c - (*(float *)(lVar5 + 0x10) - *(float *)(lVar5 + 8)) * 0.5;
      fVar12 = *(float *)(lVar5 + 0x14);
      fVar11 = *(float *)(lVar5 + 0xc);
      *(long *)(param_3 + 0x38) = local_11c;
      *(long *)(param_3 + 0x40) = local_114;
      *(undefined1 **)(param_3 + 0x30) = &DAT_3f8000003f800000;
      *(float *)(param_3 + 0x2c) = (fVar12 - fVar11) * 0.5 - (local_158 + (float)local_150);
      FUN_038e6d8c((double)*(float *)((long)param_1 + 100),(double)*(float *)(param_1 + 0xd),param_3
                   ,"(range : %.3f - %.3f)\n");
      FUN_038e6d8c((double)*(float *)((long)param_1 + 0x6c),param_3,"hold dist   : %.3f\n");
      FUN_038e6d8c((double)*(float *)(param_1 + 0xe),param_3,"unit dist   : %.3f\n");
      FUN_038e6d8c((double)*(float *)((long)param_1 + 0x74),param_3,"decay ratio : %.3f\n");
      if (0.0 < fVar13) {
        lVar5 = *(long *)(param_3 + 8);
        *(float *)(param_3 + 0x28) =
             (fStack_15c + local_154 * 0.3) -
             (*(float *)(lVar5 + 0x10) - *(float *)(lVar5 + 8)) * 0.5;
        *(float *)(param_3 + 0x2c) =
             (*(float *)(lVar5 + 0x14) - *(float *)(lVar5 + 0xc)) * 0.5 -
             (local_158 + (float)local_150);
        FUN_038e6d8c((double)fVar10,param_3,"culling start : %.3f\n");
        FUN_038e6d8c((double)fVar13,param_3,"culling dist  : %.3f\n");
        FUN_038e6d8c((double)fVar23,param_3,"(mergin)      : %.3f\n");
      }
      lVar5 = *(long *)(param_3 + 8);
      *(float *)(param_3 + 0x28) =
           (fStack_15c + local_154 * 0.7) - (*(float *)(lVar5 + 0x10) - *(float *)(lVar5 + 8)) * 0.5
      ;
      *(float *)(param_3 + 0x2c) =
           (*(float *)(lVar5 + 0x14) - *(float *)(lVar5 + 0xc)) * 0.5 -
           (local_158 + (float)local_150);
      FUN_038e6d8c(param_3,"(value per grid)\n");
      FUN_038e6d8c((double)local_150._4_4_,param_3,"X: %.3f\n");
      FUN_038e6d8c((double)local_148,param_3,"Y: %.3f\n");
      fVar23 = local_158;
      fVar10 = (local_154 * local_fc) / local_160 + fStack_15c;
      fVar13 = (float)(**(code **)(**(long **)(param_3 + 0x20) + 0x10))();
      lVar5 = *(long *)(param_3 + 8);
      *(float *)(param_3 + 0x28) = fVar10 - (*(float *)(lVar5 + 0x10) - *(float *)(lVar5 + 8)) * 0.5
      ;
      *(float *)(param_3 + 0x2c) =
           (*(float *)(lVar5 + 0x14) - *(float *)(lVar5 + 0xc)) * 0.5 -
           (fVar23 - fVar13 * *(float *)(param_3 + 0x34));
      FUN_038e6d8c((double)local_fc,(double)fVar21,param_3,"(%.3f, %.3f)");
      fVar23 = fStack_15c + local_154;
      fVar13 = local_158 + (float)local_150;
      fVar21 = (float)(**(code **)(**(long **)(param_3 + 0x20) + 0x20))
                                (*(long **)(param_3 + 0x20),0x57);
      lVar5 = *(long *)(param_3 + 8);
      *(float *)(param_3 + 0x28) =
           (fVar23 + *(float *)(param_3 + 0x30) * fVar21 * -8.0) -
           (*(float *)(lVar5 + 0x10) - *(float *)(lVar5 + 8)) * 0.5;
      *(float *)(param_3 + 0x2c) =
           (*(float *)(lVar5 + 0x14) - *(float *)(lVar5 + 0xc)) * 0.5 - fVar13;
      FUN_038e6d8c(param_3,"(max X)\n");
      FUN_038e6d8c((double)local_160,param_3,&DAT_040f1c93);
      *(undefined1 *)(param_3 + 0x6c) = 1;
      (**(code **)(**(long **)(param_3 + 0x20) + 0x40))
                (*(long **)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x70));
    }
  }
  return;
}

