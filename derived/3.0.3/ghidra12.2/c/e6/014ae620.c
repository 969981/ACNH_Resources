
void FUN_014ae620(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  
  if (*(int *)(param_1 + 8) != 0) {
    lVar4 = (long)*(int *)(param_1 + 8) << 3;
    plVar3 = *(long **)(param_1 + 0x10);
    do {
      lVar1 = *plVar3;
      uVar2 = (ulong)(*(uint *)(lVar1 + 0x14) >> 0x14) & 0xff0;
      fVar5 = (float)(*(uint *)(lVar1 + 0x14) & 0xffffff) * 5.9604645e-08;
      fVar20 = *(float *)((long)&DAT_041997a0 + uVar2) +
               fVar5 * *(float *)((long)&DAT_041997a4 + uVar2);
      fVar17 = *(float *)((long)&DAT_04199798 + uVar2) +
               fVar5 * *(float *)((long)&DAT_0419979c + uVar2);
      fVar5 = -(*(float *)((long)&DAT_0419979c + uVar2) * fVar5) -
              *(float *)((long)&DAT_04199798 + uVar2);
      fVar22 = fVar20 * 0.0;
      fVar7 = fVar17 * 0.0;
      fVar17 = fVar17 + 0.0;
      fVar12 = fVar7 * 0.0 + 1.0;
      fVar6 = *(float *)(lVar1 + 0x10);
      fVar21 = *(float *)(lVar1 + 8);
      fVar10 = (float)param_2[1];
      fVar8 = (float)*param_2;
      fVar9 = (float)((ulong)*param_2 >> 0x20);
      fVar15 = (float)param_2[3];
      fVar13 = (float)param_2[2];
      fVar14 = (float)((ulong)param_2[2] >> 0x20);
      fVar23 = *(float *)(lVar1 + 0xc);
      fVar11 = (float)((ulong)param_2[1] >> 0x20) + fVar21 * fVar8 + fVar23 * fVar9 + fVar6 * fVar10
      ;
      fVar16 = (float)((ulong)param_2[3] >> 0x20) +
               fVar21 * fVar13 + fVar23 * fVar14 + fVar6 * fVar15;
      fVar18 = (float)param_2[4];
      fVar19 = (float)((ulong)param_2[4] >> 0x20);
      uStack_a8 = CONCAT44(fVar11,fVar17 * fVar8 + fVar7 * fVar9 + fVar20 * fVar10 + 0.0);
      local_b0 = CONCAT44(fVar7 * fVar8 + fVar12 * fVar9 + fVar22 * fVar10 + 0.0,
                          fVar20 * fVar8 + fVar22 * fVar9 + fVar5 * fVar10 + 0.0);
      uStack_98 = CONCAT44(fVar16,fVar17 * fVar13 + fVar7 * fVar14 + fVar20 * fVar15 + 0.0);
      local_a0 = CONCAT44(fVar7 * fVar13 + fVar12 * fVar14 + fVar22 * fVar15 + 0.0,
                          fVar20 * fVar13 + fVar22 * fVar14 + fVar5 * fVar15 + 0.0);
      fVar8 = (float)param_2[5];
      fVar6 = (float)((ulong)param_2[5] >> 0x20) + fVar21 * fVar18 + fVar23 * fVar19 + fVar6 * fVar8
      ;
      uStack_88 = CONCAT44(fVar6,fVar17 * fVar18 + fVar7 * fVar19 + fVar20 * fVar8 + 0.0);
      local_90 = CONCAT44(fVar7 * fVar18 + fVar12 * fVar19 + fVar22 * fVar8 + 0.0,
                          fVar20 * fVar18 + fVar22 * fVar19 + fVar5 * fVar8 + 0.0);
      lVar1 = *plVar3;
      *(ulong *)(lVar1 + 0x18) = CONCAT44(fVar16,fVar11);
      *(float *)(lVar1 + 0x20) = fVar6;
      lVar1 = *plVar3;
      FUN_0147cbb4(auStack_80,&local_b0);
      *(undefined4 *)(lVar1 + 0x24) = local_7c;
      FUN_01225960(0x3f800000,0,0,0,DAT_0514f7f0,*plVar3,*plVar3,&local_b0);
      lVar4 = lVar4 + -8;
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}

