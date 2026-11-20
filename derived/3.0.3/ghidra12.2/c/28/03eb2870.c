
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03eb2870(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined *local_1a0;
  char *pcStack_198;
  undefined8 local_12c;
  undefined4 local_124;
  float local_120;
  float local_11c;
  float fStack_118;
  float local_114;
  float local_110;
  float fStack_10c;
  undefined4 local_108;
  float local_104;
  float fStack_100;
  undefined4 local_fc;
  float local_f8;
  float fStack_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  local_1a0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_198 = "IsDispDMark";
  FUN_038b0130(*(undefined8 *)PTR_DAT_04bb2668,&local_1a0,1);
  if ((0.0 < *(float *)(param_1 + 0x124)) && (*(long *)(param_1 + 0x108) != 0)) {
    FUN_038e4cec(&local_1a0);
    local_1a0 = (undefined *)((ulong)local_1a0 & 0xffffffffffff0000 | 0x100000000);
    FUN_038e4d90(&local_1a0,*(undefined8 *)(param_2 + 0x50));
    uVar3 = _UNK_041023d8;
    uVar2 = _DAT_041023d0;
    fVar32 = *(float *)(param_1 + 300);
    fVar11 = fVar32 + *(float *)(param_1 + 0x134);
    plVar6 = *(long **)(param_1 + 0x108);
    fVar29 = fVar11 + *(float *)(param_1 + 0x138);
    fVar30 = fVar29;
    fVar13 = fVar11;
    if (plVar6 != (long *)0x0) {
      uVar10 = 0;
      iVar4 = 0;
      do {
        if ((iVar4 != 0) && (iVar4 + (uVar10 / 0x19) * 0x19 == 0)) {
          fVar19 = *(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x138);
          fVar32 = fVar32 + fVar19;
          fVar11 = fVar11 + fVar19;
          fVar29 = fVar29 + fVar19;
        }
        fVar19 = fVar30;
        fVar12 = fVar13;
        if ((char)plVar6[1] != '\0') {
          plVar7 = *(long **)(param_1 + 0x118);
          fVar19 = *(float *)(param_1 + 0x124);
          uVar8 = *(undefined8 *)(param_2 + 0x50);
          plVar9 = *(long **)PTR_DAT_04bd0c58;
          if (*(long **)PTR_DAT_04bd0ef8 != (long *)0x0) {
            plVar9 = *(long **)PTR_DAT_04bd0ef8;
          }
          fVar12 = (float)(**(code **)(*plVar9 + 0x10))();
          local_e0._0_4_ = fVar29 - fVar32;
          fVar20 = *(float *)(plVar6 + 0xb);
          uVar1 = 0xf0b139ff;
          if (plVar6 != plVar7) {
            uVar1 = 0x608060ff;
          }
          plVar9 = *(long **)(param_2 + 0x38);
          fVar12 = fVar20 - (fVar12 + 6.0);
          local_e0._4_4_ = (float)((ulong)*(undefined8 *)PTR_DAT_04bd4708 >> 0x20);
          uStack_d8._4_4_ = (fVar29 + fVar32) * 0.5;
          uStack_d8._0_4_ = (float)*(undefined8 *)(PTR_DAT_04bd4708 + 8);
          local_d0._4_4_ = fVar20 - fVar12;
          uStack_c8._4_4_ = (fVar20 + fVar12) * 0.5;
          local_c0 = *(undefined8 *)(PTR_DAT_04bd4708 + 0x20);
          uStack_b8 = *(undefined8 *)(PTR_DAT_04bd4708 + 0x28);
          local_d0._0_4_ = (float)*(undefined8 *)(PTR_DAT_04bd4708 + 0x10);
          uStack_c8._0_4_ = (float)*(undefined8 *)(PTR_DAT_04bd4708 + 0x18);
          if ((char)plVar9[1] == '\0') {
            uVar14 = uVar2;
            uVar17 = uVar3;
            if (*(char *)((long)plVar9 + 9) != '\0') goto LAB_03eb2c2c;
          }
          else {
            (**(code **)(*plVar9 + 0x58))(plVar9,(long)plVar9 + 0xc);
            *(undefined2 *)(plVar9 + 1) = 0x100;
LAB_03eb2c2c:
            (**(code **)(*plVar9 + 0x60))
                      (plVar9,(long)plVar9 + 0x4c,(long)plVar9 + 0xc,
                       *(undefined4 *)((long)plVar9 + 0x8c));
            *(undefined1 *)((long)plVar9 + 9) = 0;
            uVar14 = local_c0;
            uVar17 = uStack_b8;
          }
          lVar5 = *(long *)(param_2 + 0x30);
          fVar36 = (float)*(undefined8 *)(lVar5 + 0x18);
          fVar33 = (float)local_e0 * fVar36;
          fVar34 = local_e0._4_4_ * fVar36;
          fVar35 = (float)uStack_d8 * fVar36;
          fVar36 = uStack_d8._4_4_ * fVar36;
          fVar24 = (float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20);
          fVar25 = (float)*(undefined8 *)(lVar5 + 0x20);
          fVar20 = (float)uVar14;
          fVar15 = (float)((ulong)uVar14 >> 0x20);
          fVar16 = (float)uVar17;
          fVar18 = (float)((ulong)uVar17 >> 0x20);
          fVar21 = (float)*(undefined8 *)(lVar5 + 8);
          fVar22 = (float)((ulong)*(undefined8 *)(lVar5 + 8) >> 0x20);
          fVar23 = (float)*(undefined8 *)(lVar5 + 0x10);
          local_11c = (float)(uVar1 >> 0x18) / 255.0;
          fVar26 = (float)*(undefined8 *)(lVar5 + 0x28);
          fVar27 = (float)((ulong)*(undefined8 *)(lVar5 + 0x28) >> 0x20);
          fVar28 = (float)*(undefined8 *)(lVar5 + 0x30);
          fVar31 = (float)(uint)(int)(fVar19 * 255.0) / 255.0;
          fStack_118 = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
          local_c0 = CONCAT44(local_e0._4_4_ * fVar26 + local_d0._4_4_ * fVar27 + fVar15 * fVar28 +
                              0.0,(float)local_e0 * fVar26 + (float)local_d0 * fVar27 +
                                  fVar20 * fVar28 + 0.0);
          uStack_b8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20) +
                               uStack_d8._4_4_ * fVar26 + uStack_c8._4_4_ * fVar27 + fVar18 * fVar28
                               ,(float)uStack_d8 * fVar26 + (float)uStack_c8 * fVar27 +
                                fVar16 * fVar28 + 0.0);
          local_114 = (float)(uVar1 >> 8 & 0xff) / 255.0;
          local_110 = fVar31;
          local_e0 = CONCAT44(local_e0._4_4_ * fVar21 + local_d0._4_4_ * fVar22 + fVar15 * fVar23 +
                              0.0,(float)local_e0 * fVar21 + (float)local_d0 * fVar22 +
                                  fVar20 * fVar23 + 0.0);
          uStack_d8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) +
                               uStack_d8._4_4_ * fVar21 + uStack_c8._4_4_ * fVar22 + fVar18 * fVar23
                               ,(float)uStack_d8 * fVar21 + (float)uStack_c8 * fVar22 +
                                fVar16 * fVar23 + 0.0);
          local_d0 = CONCAT44(fVar34 + local_d0._4_4_ * fVar24 + fVar15 * fVar25 + 0.0,
                              fVar33 + (float)local_d0 * fVar24 + fVar20 * fVar25 + 0.0);
          uStack_c8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) +
                               fVar36 + uStack_c8._4_4_ * fVar24 + fVar18 * fVar25,
                               fVar35 + (float)uStack_c8 * fVar24 + fVar16 * fVar25 + 0.0);
          FUN_03946340(uVar8,&local_11c,&local_e0,(long)plVar9 + 0xc);
          lVar5 = *(long *)(param_2 + 0x30);
          plVar9 = *(long **)(param_2 + 0x38);
          if ((char)plVar9[1] == '\0') {
            if (*(char *)((long)plVar9 + 9) != '\0') goto LAB_03eb298c;
          }
          else {
            (**(code **)(*plVar9 + 0x58))(plVar9,(long)plVar9 + 0xc);
            *(undefined2 *)(plVar9 + 1) = 0x100;
LAB_03eb298c:
            (**(code **)(*plVar9 + 0x60))
                      (plVar9,(long)plVar9 + 0x4c,(long)plVar9 + 0xc,
                       *(undefined4 *)((long)plVar9 + 0x8c));
            *(undefined1 *)((long)plVar9 + 9) = 0;
          }
          FUN_039424e0(uVar8,lVar5 + 8,(long)plVar9 + 0xc);
          fStack_118 = (float)plVar6[0xb];
          local_114 = 0.0;
          local_108 = 0;
          local_fc = 0;
          local_f0 = 0;
          local_e4 = 0;
          local_12c = 0;
          local_124 = 0;
          local_120 = fVar31;
          local_11c = fVar32;
          local_110 = fVar29;
          fStack_10c = fStack_118;
          local_104 = fVar29;
          fStack_100 = fVar12;
          local_f8 = fVar32;
          fStack_f4 = fVar12;
          local_ec = fVar32;
          uStack_e8 = fStack_118;
          FUN_039427b0(0x3f800000,uVar8,&local_11c,&local_110,&local_12c);
          local_12c = 0;
          local_124 = 0;
          local_120 = fVar31;
          FUN_039427b0(0x3f800000,uVar8,&local_110,&local_104,&local_12c);
          local_12c = 0;
          local_124 = 0;
          local_120 = fVar31;
          FUN_039427b0(0x3f800000,uVar8,&local_104,&local_f8,&local_12c);
          local_12c = 0;
          local_124 = 0;
          local_120 = fVar31;
          FUN_039427b0(0x3f800000,uVar8,&local_f8,&local_ec,&local_12c);
          fStack_118 = (float)plVar6[0xb];
          local_114 = 0.0;
          local_108 = 0;
          local_12c = 0;
          local_124 = 0;
          local_120 = fVar31;
          local_11c = fVar11;
          local_110 = fVar11;
          fStack_10c = fVar12;
          FUN_039427b0(0x3f800000,uVar8,&local_11c,&local_110,&local_12c);
          (**(code **)(*plVar6 + 0x30))(fVar11,fVar29,fVar19,plVar6,param_2);
          fVar19 = fVar29;
          fVar12 = fVar11;
          if (plVar6 != plVar7) {
            fVar19 = fVar30;
            fVar12 = fVar13;
          }
        }
        fVar13 = fVar12;
        fVar30 = fVar19;
        plVar6 = (long *)plVar6[7];
        uVar10 = uVar10 + 1;
        iVar4 = iVar4 + -1;
      } while (plVar6 != (long *)0x0);
    }
    if (0.0 < *(float *)(param_1 + 0x128)) {
      (**(code **)(**(long **)(param_1 + 0x118) + 0x38))
                (fVar13,fVar30,*(long **)(param_1 + 0x118),param_2);
    }
  }
  return;
}

