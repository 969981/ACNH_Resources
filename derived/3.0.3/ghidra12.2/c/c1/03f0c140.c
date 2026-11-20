
void FUN_03f0c140(long param_1,uint *param_2,long *param_3)

{
  float *pfVar1;
  ushort *puVar2;
  float *pfVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar17;
  undefined8 uVar16;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 local_f0 [2];
  long local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  float local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_9c;
  
  lVar7 = *(long *)(param_1 + 0x18);
  if (0 < *(int *)(lVar7 + 0x90)) {
    lVar13 = 0;
    do {
      if ((*param_2 >> (ulong)((uint)lVar13 & 0x1f) & 1) != 0) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x88) + lVar13 * 8);
        switch(*(undefined4 *)(lVar7 + 0x24)) {
        case 1:
          uVar4 = *(uint *)(lVar7 + 0x30);
          if (0 < (int)uVar4) {
            lVar11 = 0;
            do {
              puVar2 = (ushort *)(*(long *)(lVar7 + 0x28) + lVar11);
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)puVar2[1] * 0x10);
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*puVar2 * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 0xc;
            } while ((ulong)uVar4 * 0xc != lVar11);
          }
          break;
        case 2:
          uVar4 = *(uint *)(lVar7 + 0x30);
          if (0 < (int)uVar4) {
            lVar11 = 0;
            do {
              puVar2 = (ushort *)(*(long *)(lVar7 + 0x28) + lVar11);
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)puVar2[1] * 0x10);
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*puVar2 * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 0xc;
            } while ((ulong)uVar4 * 0xc != lVar11);
          }
          break;
        case 3:
          uVar4 = *(uint *)(lVar7 + 0x30);
          if (0 < (int)uVar4) {
            lVar11 = 0;
            do {
              puVar2 = (ushort *)(*(long *)(lVar7 + 0x28) + lVar11);
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)puVar2[1] * 0x10);
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*puVar2 * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 0x14;
            } while ((ulong)uVar4 * 0x14 != lVar11);
          }
          break;
        case 4:
          uVar4 = *(uint *)(lVar7 + 0x30);
          if (0 < (int)uVar4) {
            lVar11 = 0;
            do {
              pfVar3 = (float *)(*(long *)(lVar7 + 0x28) + lVar11);
              lVar8 = *(long *)(param_1 + 0x20);
              pfVar1 = (float *)(lVar8 + (ulong)*(ushort *)((long)pfVar3 + 0x1e) * 0x10);
              uVar18 = *(undefined8 *)(pfVar1 + 2);
              uVar15 = *(undefined8 *)pfVar1;
              fVar28 = *pfVar3;
              fVar34 = pfVar3[1];
              fVar33 = pfVar3[2];
              fVar32 = pfVar3[3];
              puVar5 = (undefined8 *)(lVar8 + (ulong)*(ushort *)(pfVar3 + 6) * 0x10);
              uVar19 = puVar5[1];
              uVar16 = *puVar5;
              puVar5 = (undefined8 *)(lVar8 + (ulong)*(ushort *)((long)pfVar3 + 0x1a) * 0x10);
              uVar23 = puVar5[1];
              uVar21 = *puVar5;
              puVar5 = (undefined8 *)(lVar8 + (ulong)*(ushort *)(pfVar3 + 7) * 0x10);
              uVar20 = *puVar5;
              fVar30 = (float)uVar20;
              fVar31 = (float)((ulong)uVar20 >> 0x20);
              fVar29 = (float)puVar5[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar30;
                  local_ac = fVar31;
                  local_9c = fVar29;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              fVar14 = (float)uVar15;
              fVar17 = (float)((ulong)uVar15 >> 0x20);
              fVar22 = (float)uVar16 * fVar28 + (float)uVar21 * fVar34 + fVar30 * fVar33 +
                       fVar14 * fVar32;
              fVar24 = (float)((ulong)uVar16 >> 0x20) * fVar28 +
                       (float)((ulong)uVar21 >> 0x20) * fVar34 + fVar31 * fVar33 + fVar17 * fVar32;
              fVar32 = (float)uVar19 * fVar28 + (float)uVar23 * fVar34 + fVar29 * fVar33 +
                       (float)uVar18 * fVar32;
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_d8 = &local_c8;
                  local_c0 = 0;
                  local_bc = fVar30 + fVar22;
                  local_ac = fVar31 + fVar24;
                  local_9c = fVar29 + fVar32;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  uStack_e0 = 0;
                  local_d0 = 0;
                  local_e8 = lVar8;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                fVar29 = *pfVar1;
                fVar30 = pfVar1[1];
                plVar12 = (long *)(lVar8 + 0x80);
                fVar31 = pfVar1[2];
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_bc = fVar14 + fVar22;
                  local_ac = fVar17 + fVar24;
                  local_9c = (float)uVar18 + fVar32;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  uStack_e0 = 0;
                  local_d0 = 0;
                  local_e8 = lVar8;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 0x20;
            } while ((ulong)uVar4 * 0x20 != lVar11);
          }
          break;
        case 5:
          lVar11 = *(long *)(*(long *)(param_1 + 0x270) + 0x20);
          lVar11 = *(long *)(lVar11 + (long)*(int *)(*(long *)(lVar11 + (long)*(int *)(lVar7 + 0x48)
                                                                        * 8) + 0x110) * 8);
          if ((*(long *)(lVar11 + 0x18) != 0) && (uVar4 = *(uint *)(lVar7 + 0x30), 0 < (int)uVar4))
          {
            lVar8 = 0;
            do {
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                uVar27 = *(undefined8 *)(lVar11 + 0x98);
                uVar26 = *(undefined8 *)(lVar11 + 0x90);
                uVar19 = *(undefined8 *)(lVar11 + 0xa8);
                uVar15 = *(undefined8 *)(lVar11 + 0xa0);
                uVar20 = *(undefined8 *)(lVar11 + 200);
                uVar18 = *(undefined8 *)(lVar11 + 0xc0);
                puVar5 = (undefined8 *)
                         (*(long *)(lVar11 + 0x18) +
                         (ulong)*(byte *)(lVar11 + 0x24) *
                         (ulong)*(ushort *)(*(long *)(lVar7 + 0x28) + lVar8 + 2));
                uVar25 = puVar5[1];
                uVar23 = *puVar5;
                plVar12 = (long *)(lVar9 + 0x80);
                uVar21 = *(undefined8 *)(lVar11 + 0xb8);
                uVar16 = *(undefined8 *)(lVar11 + 0xb0);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_c0 = 0;
                  local_b0 = 0;
                  fVar29 = (float)uVar23;
                  local_a8 = 0;
                  fVar30 = (float)((ulong)uVar23 >> 0x20);
                  local_a0 = 0x3f800000;
                  uStack_e0 = 0;
                  local_d0 = 0;
                  fVar31 = (float)uVar25;
                  local_bc = (float)uVar18 + (float)uVar26 * fVar29 + (float)uVar15 * fVar30 +
                             (float)uVar16 * fVar31;
                  local_ac = (float)((ulong)uVar18 >> 0x20) +
                             (float)((ulong)uVar26 >> 0x20) * fVar29 +
                             (float)((ulong)uVar15 >> 0x20) * fVar30 +
                             (float)((ulong)uVar16 >> 0x20) * fVar31;
                  local_9c = (float)uVar20 + (float)uVar27 * fVar29 + (float)uVar19 * fVar30 +
                             (float)uVar21 * fVar31;
                  local_e8 = lVar9;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              lVar8 = lVar8 + 0x10;
            } while ((ulong)uVar4 * 0x10 != lVar8);
          }
          break;
        case 0xd:
          uVar4 = *(uint *)(lVar7 + 0x30);
          if (0 < (int)uVar4) {
            lVar11 = 0;
            do {
              lVar8 = *(long *)(lVar7 + 0x28) + lVar11;
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x38) * 0x10
                                );
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x30) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x3a) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x32) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x3c) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x34) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x3e) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x36) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 0x40;
            } while ((ulong)uVar4 * 0x40 != lVar11);
          }
          if (0 < *(int *)(lVar7 + 0x40)) {
            lVar8 = 0;
            lVar11 = 0;
            do {
              lVar9 = *(long *)(lVar7 + 0x38) + lVar8;
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar9 + 0xe) * 0x10)
              ;
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar10 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar10 != 0)) &&
                 (lVar10 = *(long *)**(undefined8 **)(lVar10 + 0x38),
                 (*(byte *)(lVar10 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar9 + 0xc) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar10 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar10;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar10 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 1;
              lVar8 = lVar8 + 0x10;
            } while (lVar11 < *(int *)(lVar7 + 0x40));
          }
          break;
        case 0xe:
          uVar4 = *(uint *)(lVar7 + 0x30);
          if (0 < (int)uVar4) {
            lVar11 = 0;
            do {
              lVar8 = *(long *)(lVar7 + 0x28) + lVar11;
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x68) * 0x10
                                );
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x60) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x6a) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x62) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x6c) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 100) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x6e) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x66) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 0x70;
            } while ((ulong)uVar4 * 0x70 != lVar11);
          }
          if (0 < *(int *)(lVar7 + 0x40)) {
            lVar8 = 0;
            lVar11 = 0;
            do {
              lVar9 = *(long *)(lVar7 + 0x38) + lVar8;
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar9 + 0x1a) * 0x10
                                );
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar10 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar10 != 0)) &&
                 (lVar10 = *(long *)**(undefined8 **)(lVar10 + 0x38),
                 (*(byte *)(lVar10 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar9 + 0x18) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar10 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar10;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar10 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 1;
              lVar8 = lVar8 + 0x1c;
            } while (lVar11 < *(int *)(lVar7 + 0x40));
          }
          break;
        case 0xf:
          uVar4 = *(uint *)(lVar7 + 0x30);
          if (0 < (int)uVar4) {
            lVar11 = 0;
            do {
              lVar8 = *(long *)(lVar7 + 0x28) + lVar11;
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x28) * 0x10
                                );
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x20) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x2a) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x22) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x2c) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x24) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x2e) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x26) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 0x30;
            } while ((ulong)uVar4 * 0x30 != lVar11);
          }
          if (0 < *(int *)(lVar7 + 0x40)) {
            lVar8 = 0;
            lVar11 = 0;
            do {
              lVar9 = *(long *)(lVar7 + 0x38) + lVar8;
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (long)*(int *)(lVar9 + 0xc) * 0x10);
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar10 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar10 != 0)) &&
                 (lVar10 = *(long *)**(undefined8 **)(lVar10 + 0x38),
                 (*(byte *)(lVar10 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (long)*(int *)(lVar9 + 8) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar10 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar10;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar10 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 1;
              lVar8 = lVar8 + 0x10;
            } while (lVar11 < *(int *)(lVar7 + 0x40));
          }
          break;
        case 0x14:
          uVar4 = *(uint *)(lVar7 + 0x30);
          if (0 < (int)uVar4) {
            lVar11 = 0;
            do {
              puVar2 = (ushort *)(*(long *)(lVar7 + 0x28) + lVar11);
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)puVar2[1] * 0x10);
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*puVar2 * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar4 * 0x10 != lVar11);
          }
          break;
        case 0x15:
          uVar4 = *(uint *)(lVar7 + 0x30);
          if (0 < (int)uVar4) {
            lVar11 = 0;
            do {
              lVar8 = *(long *)(lVar7 + 0x28) + lVar11;
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x48) * 0x10
                                );
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x40) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x4a) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x42) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x4c) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x44) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar8 + 0x4e) * 0x10
                                );
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              fVar31 = pfVar3[2];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar8 + 0x46) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar8 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar8 != 0)) &&
                 (lVar8 = *(long *)**(undefined8 **)(lVar8 + 0x38),
                 (*(byte *)(lVar8 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar8 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar8;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar8 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 0x50;
            } while ((ulong)uVar4 * 0x50 != lVar11);
          }
          if (0 < *(int *)(lVar7 + 0x40)) {
            lVar8 = 0;
            lVar11 = 0;
            do {
              lVar9 = *(long *)(lVar7 + 0x38) + lVar8;
              pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(ushort *)(lVar9 + 0x12) * 0x10
                                );
              fVar31 = pfVar3[2];
              fVar29 = *pfVar3;
              fVar30 = pfVar3[1];
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar10 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar10 != 0)) &&
                 (lVar10 = *(long *)**(undefined8 **)(lVar10 + 0x38),
                 (*(byte *)(lVar10 + 0xae) >> 3 & 1) != 0)) {
                pfVar3 = (float *)(*(long *)(param_1 + 0x20) +
                                  (ulong)*(ushort *)(lVar9 + 0x10) * 0x10);
                fVar32 = *pfVar3;
                fVar33 = pfVar3[1];
                fVar34 = pfVar3[2];
                plVar12 = (long *)(lVar10 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar10;
                  local_bc = fVar32;
                  local_ac = fVar33;
                  local_9c = fVar34;
                  (*(code *)**(undefined8 **)(lVar10 + 0x80))(plVar12,local_f0);
                }
              }
              if (((*(long *)(*param_3 + 0x50) != 0) &&
                  (lVar9 = *(long *)(*(long *)(*param_3 + 0x50) + 0x28), lVar9 != 0)) &&
                 (lVar9 = *(long *)**(undefined8 **)(lVar9 + 0x38),
                 (*(byte *)(lVar9 + 0xae) >> 3 & 1) != 0)) {
                plVar12 = (long *)(lVar9 + 0x80);
                uVar6 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if ((uVar6 & 1) != 0) {
                  local_d8 = &local_c8;
                  local_c8 = 0x3f800000;
                  local_b8 = 0x3f80000000000000;
                  local_f0[0] = 2;
                  local_c0 = 0;
                  local_b0 = 0;
                  local_a8 = 0;
                  local_a0 = 0x3f800000;
                  local_d0 = 0;
                  uStack_e0 = 0;
                  local_e8 = lVar9;
                  local_bc = fVar29;
                  local_ac = fVar30;
                  local_9c = fVar31;
                  (*(code *)**(undefined8 **)(lVar9 + 0x80))(plVar12,local_f0);
                }
              }
              lVar11 = lVar11 + 1;
              lVar8 = lVar8 + 0x14;
            } while (lVar11 < *(int *)(lVar7 + 0x40));
          }
        }
      }
      lVar7 = *(long *)(param_1 + 0x18);
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(lVar7 + 0x90));
  }
  return;
}

