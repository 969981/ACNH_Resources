
void FUN_038e6fd0(long param_1,short *param_2,int param_3,uint param_4,float *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  long *plVar2;
  short sVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  short *psVar14;
  ulong uVar15;
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
  float fVar28;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  
  local_e0 = *(float *)(param_1 + 0x30);
  local_cc = *(float *)(param_1 + 0x34);
  fStack_dc = 0.0;
  fStack_d8 = 0.0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0x3f800000;
  fStack_d4 = 0.0;
  fStack_d0 = 0.0;
  uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  fVar26 = *(float *)(param_1 + 0x28);
  fVar25 = *(float *)(param_1 + 0x2c);
  fVar16 = (float)(**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  fVar16 = fVar16 * *(float *)(param_1 + 0x34);
  fVar27 = *(float *)(param_1 + 0x58);
  if (param_5 != (float *)0x0) {
    fVar17 = fVar25 - fVar16;
    fVar28 = fVar25;
    if (fVar25 <= fVar17) {
      fVar28 = fVar17;
      fVar17 = fVar25;
    }
    *param_5 = fVar26;
    param_5[1] = fVar17;
    param_5[2] = fVar26;
    param_5[3] = fVar28;
  }
  if ((*(char *)(param_1 + 0x6c) != '\0') && ((param_4 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x38))
              (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x70));
  }
  sVar3 = *param_2;
  fVar28 = fVar26;
  if (sVar3 != 0) {
    fVar27 = fVar26 + fVar27;
    uVar12 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    lVar6 = 0;
    iVar9 = 0;
    psVar14 = param_2;
    do {
      if (param_3 < 0) {
        fVar17 = 0.0;
        uVar11 = 0;
        do {
          if (sVar3 == 10) {
            iVar8 = 1;
            iVar13 = 1;
            goto LAB_038e726c;
          }
          if (uVar12 == uVar11) {
            iVar8 = 0;
            iVar13 = 3;
            uVar11 = uVar12;
            goto LAB_038e726c;
          }
          fVar18 = (float)(**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
          fVar18 = fVar18 * *(float *)(param_1 + 0x30);
          if ((*(float *)(param_1 + 0x58) != INFINITY) && (fVar27 < fVar28 + fVar17 + fVar18)) {
            iVar8 = 0;
            iVar13 = 2;
            goto LAB_038e726c;
          }
          fVar17 = fVar17 + fVar18;
          sVar3 = param_2[lVar6 + uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (sVar3 != 0);
        iVar8 = 0;
        iVar13 = 0;
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
        fVar17 = 0.0;
        iVar8 = iVar9;
        if (iVar9 <= param_3) {
          iVar8 = param_3;
        }
        uVar15 = 0;
        uVar11 = (ulong)(uint)(iVar8 - iVar9);
        do {
          if (uVar11 == uVar15) {
            iVar8 = 0;
            iVar13 = 0;
            goto LAB_038e7268;
          }
          if (sVar3 == 10) {
            iVar8 = 1;
            uVar11 = uVar15 & 0xffffffff;
            iVar13 = 1;
            goto LAB_038e7268;
          }
          if (uVar12 == uVar15) {
            iVar8 = 0;
            iVar13 = 3;
            uVar11 = uVar12;
            goto LAB_038e7268;
          }
          fVar18 = (float)(**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
          fVar18 = fVar18 * *(float *)(param_1 + 0x30);
          if ((*(float *)(param_1 + 0x58) != INFINITY) && (fVar27 < fVar28 + fVar17 + fVar18)) {
            iVar8 = 0;
            iVar13 = 2;
            uVar11 = uVar15 & 0xffffffff;
            goto LAB_038e7268;
          }
          fVar17 = fVar17 + fVar18;
          sVar3 = param_2[lVar6 + uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (sVar3 != 0);
        iVar8 = 0;
        iVar13 = 0;
        uVar11 = uVar15 & 0xffffffff;
LAB_038e7268:
      }
LAB_038e726c:
      iVar10 = (int)uVar11;
      if ((iVar10 != 0) && ((param_4 & 1) != 0)) {
        puVar7 = *(undefined8 **)(param_1 + 0x50);
        if (puVar7 == (undefined8 *)0x0) {
          plVar2 = *(long **)(param_1 + 0x20);
          uVar4 = *(undefined8 *)(param_1 + 0x70);
          pfVar5 = &local_e0;
        }
        else {
          fVar18 = fVar25 - fVar16;
          plVar2 = *(long **)(param_1 + 0x20);
          uVar4 = *(undefined8 *)(param_1 + 0x70);
          pfVar5 = (float *)&local_110;
          fVar21 = (float)*puVar7;
          fVar19 = (float)((ulong)*puVar7 >> 0x20);
          fVar20 = (float)puVar7[1];
          fVar22 = (float)local_c0;
          fVar23 = (float)((ulong)local_c0 >> 0x20);
          fVar24 = (float)uStack_b8;
          local_110 = CONCAT44(fStack_dc * fVar21 + local_cc * fVar19 + fVar23 * fVar20 + 0.0,
                               local_e0 * fVar21 + fStack_d0 * fVar19 + fVar22 * fVar20 + 0.0);
          uStack_108 = CONCAT44((float)((ulong)puVar7[1] >> 0x20) +
                                fVar28 * fVar21 + fVar18 * fVar19 + fVar20 * 0.0,
                                fStack_d8 * fVar21 + (float)local_c8 * fVar19 + fVar24 * fVar20 +
                                0.0);
          fVar21 = (float)puVar7[2];
          fVar19 = (float)((ulong)puVar7[2] >> 0x20);
          fVar20 = (float)puVar7[3];
          uStack_100 = CONCAT44(fStack_dc * fVar21 + local_cc * fVar19 + fVar23 * fVar20 + 0.0,
                                local_e0 * fVar21 + fStack_d0 * fVar19 + fVar22 * fVar20 + 0.0);
          uStack_f8 = CONCAT44((float)((ulong)puVar7[3] >> 0x20) +
                               fVar28 * fVar21 + fVar18 * fVar19 + fVar20 * 0.0,
                               fStack_d8 * fVar21 + (float)local_c8 * fVar19 + fVar24 * fVar20 + 0.0
                              );
          fVar21 = (float)puVar7[4];
          fVar19 = (float)((ulong)puVar7[4] >> 0x20);
          fVar20 = (float)puVar7[5];
          local_f0 = CONCAT44(fStack_dc * fVar21 + local_cc * fVar19 + fVar23 * fVar20 + 0.0,
                              local_e0 * fVar21 + fStack_d0 * fVar19 + fVar22 * fVar20 + 0.0);
          uStack_e8 = CONCAT44((float)((ulong)puVar7[5] >> 0x20) +
                               fVar28 * fVar21 + fVar18 * fVar19 + fVar20 * 0.0,
                               fStack_d8 * fVar21 + (float)local_c8 * fVar19 + fVar24 * fVar20 + 0.0
                              );
        }
        local_c8 = CONCAT44(fVar25 - fVar16,(float)local_c8);
        uStack_b8 = uStack_b8 & 0xffffffff;
        fStack_d4 = fVar28;
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,uVar4,param_6,param_7,pfVar5,param_1 + 0x38,psVar14,uVar11 & 0xffffffff);
      }
      if ((param_5 != (float *)0x0) && (iVar10 != 0)) {
        fVar18 = fVar28 + fVar17;
        if (fVar18 < *param_5) {
          *param_5 = fVar18;
        }
        fVar21 = fVar25 - fVar16;
        if (fVar21 < param_5[1]) {
          param_5[1] = fVar21;
        }
        if (param_5[2] < fVar18) {
          param_5[2] = fVar18;
        }
        if (param_5[3] < fVar21) {
          param_5[3] = fVar21;
        }
      }
      if (iVar13 == 3) {
        fVar28 = fVar28 + fVar17;
      }
      else {
        if (iVar13 == 0) {
          if ((param_4 & 1) == 0) {
            return;
          }
          goto LAB_038e7410;
        }
        iVar10 = iVar8 + iVar10;
        fVar25 = fVar25 - (fVar16 + *(float *)(param_1 + 0x4c));
        fVar28 = fVar26;
      }
      iVar9 = iVar10 + iVar9;
      psVar14 = param_2 + iVar9;
      lVar6 = (long)iVar9;
      sVar3 = *psVar14;
    } while (sVar3 != 0);
  }
  fVar17 = 0.0;
  if ((param_4 & 1) != 0) {
LAB_038e7410:
    if (*(char *)(param_1 + 0x6c) != '\0') {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x40))
                (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x70));
    }
    *(float *)(param_1 + 0x28) = fVar28 + fVar17;
    *(float *)(param_1 + 0x2c) = fVar25;
  }
  return;
}

