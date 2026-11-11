
void FUN_00393f90(undefined4 param_1,long param_2,long param_3,undefined8 *param_4,int param_5,
                 long param_6)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
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
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  fVar45 = *(float *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0xc4) == 0) {
    FUN_00392ea0(param_1,param_2,&local_a0,param_6 + 0x30);
  }
  else {
    puVar5 = (undefined8 *)
             (*(long *)(param_2 + 0xb8) +
             (ulong)*(ushort *)(*(long *)(param_2 + 0xa0) + (long)param_5 * 0xa0 + 2) * 0x40);
    local_90 = puVar5[2];
    uStack_88 = puVar5[3];
    fVar45 = fVar45 * *(float *)(puVar5 + 6);
    local_80 = puVar5[4];
    uStack_78 = puVar5[5];
    local_a0 = *puVar5;
    uStack_98 = puVar5[1];
  }
  puVar5 = *(undefined8 **)(param_2 + 0x20);
  pbVar9 = *(byte **)(param_3 + 200);
  fVar22 = (float)puVar5[2];
  fVar14 = (float)local_a0;
  fVar15 = (float)((ulong)local_a0 >> 0x20);
  fVar16 = (float)uStack_98;
  fVar17 = (float)((ulong)uStack_98 >> 0x20);
  fVar23 = (float)((ulong)puVar5[2] >> 0x20);
  fVar18 = (float)local_90;
  fVar19 = (float)((ulong)local_90 >> 0x20);
  fVar30 = (float)uStack_88;
  fVar32 = (float)((ulong)uStack_88 >> 0x20);
  fVar26 = (float)*puVar5;
  fVar28 = (float)((ulong)*puVar5 >> 0x20);
  fVar33 = (float)puVar5[4];
  fVar34 = (float)((ulong)puVar5[4] >> 0x20);
  lVar6 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
  fVar44 = (float)puVar5[3];
  fVar25 = (float)local_80;
  fVar27 = (float)((ulong)local_80 >> 0x20);
  fVar29 = (float)uStack_78;
  fVar31 = (float)((ulong)uStack_78 >> 0x20);
  uVar7 = lVar6 + 0x3fU & -lVar6;
  fVar20 = (float)puVar5[1];
  fVar35 = (float)puVar5[5];
  uVar24 = param_4[1];
  uVar36 = param_4[3];
  fVar37 = fVar14 * fVar26 + fVar18 * fVar28 + fVar25 * fVar20 + 0.0;
  fVar38 = fVar15 * fVar26 + fVar19 * fVar28 + fVar27 * fVar20 + 0.0;
  fVar39 = fVar16 * fVar26 + fVar30 * fVar28 + fVar29 * fVar20 + 0.0;
  fVar40 = (float)((ulong)puVar5[1] >> 0x20) + fVar17 * fVar26 + fVar32 * fVar28 + fVar31 * fVar20;
  fVar41 = fVar14 * fVar22 + fVar18 * fVar23 + fVar25 * fVar44 + 0.0;
  fVar42 = fVar15 * fVar22 + fVar19 * fVar23 + fVar27 * fVar44 + 0.0;
  fVar43 = fVar16 * fVar22 + fVar30 * fVar23 + fVar29 * fVar44 + 0.0;
  fVar44 = (float)((ulong)puVar5[3] >> 0x20) + fVar17 * fVar22 + fVar32 * fVar23 + fVar31 * fVar44;
  uVar21 = param_4[5];
  uVar46 = param_4[7];
  fVar26 = fVar14 * fVar33 + fVar18 * fVar34 + fVar25 * fVar35 + 0.0;
  fVar28 = fVar15 * fVar33 + fVar19 * fVar34 + fVar27 * fVar35 + 0.0;
  fVar30 = fVar16 * fVar33 + fVar30 * fVar34 + fVar29 * fVar35 + 0.0;
  fVar32 = (float)((ulong)puVar5[5] >> 0x20) + fVar17 * fVar33 + fVar32 * fVar34 + fVar31 * fVar35;
  fVar17 = (float)*param_4;
  fVar18 = (float)((ulong)*param_4 >> 0x20);
  fVar19 = (float)uVar24;
  fVar20 = (float)param_4[2];
  fVar22 = (float)((ulong)param_4[2] >> 0x20);
  fVar23 = (float)uVar36;
  fVar25 = (float)param_4[6];
  fVar27 = (float)((ulong)param_4[6] >> 0x20);
  fVar29 = (float)uVar46;
  fVar14 = (float)param_4[4];
  fVar15 = (float)((ulong)param_4[4] >> 0x20);
  fVar16 = (float)uVar21;
  if ((*pbVar9 & 1) == 0) {
    lVar6 = *(long *)(pbVar9 + 0x40);
    *(ulong *)(pbVar9 + 0x40) = lVar6 + uVar7;
  }
  else {
    plVar10 = *(long **)(pbVar9 + 0x40);
    do {
      lVar6 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar6 + uVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = (undefined8 *)(*(long *)(*(long *)(param_3 + 200) + 0x38) + lVar6);
  puVar5[1] = CONCAT44((float)((ulong)uVar24 >> 0x20) +
                       fVar40 * fVar17 + fVar44 * fVar18 + fVar32 * fVar19,
                       fVar39 * fVar17 + fVar43 * fVar18 + fVar30 * fVar19 + 0.0);
  *puVar5 = CONCAT44(fVar38 * fVar17 + fVar42 * fVar18 + fVar28 * fVar19 + 0.0,
                     fVar37 * fVar17 + fVar41 * fVar18 + fVar26 * fVar19 + 0.0);
  puVar5[3] = CONCAT44((float)((ulong)uVar36 >> 0x20) +
                       fVar40 * fVar20 + fVar44 * fVar22 + fVar32 * fVar23,
                       fVar39 * fVar20 + fVar43 * fVar22 + fVar30 * fVar23 + 0.0);
  puVar5[2] = CONCAT44(fVar38 * fVar20 + fVar42 * fVar22 + fVar28 * fVar23 + 0.0,
                       fVar37 * fVar20 + fVar41 * fVar22 + fVar26 * fVar23 + 0.0);
  puVar5[5] = CONCAT44((float)((ulong)uVar21 >> 0x20) +
                       fVar40 * fVar14 + fVar44 * fVar15 + fVar32 * fVar16,
                       fVar39 * fVar14 + fVar43 * fVar15 + fVar30 * fVar16 + 0.0);
  puVar5[4] = CONCAT44(fVar38 * fVar14 + fVar42 * fVar15 + fVar28 * fVar16 + 0.0,
                       fVar37 * fVar14 + fVar41 * fVar15 + fVar26 * fVar16 + 0.0);
  puVar5[7] = CONCAT44((float)((ulong)uVar46 >> 0x20) +
                       fVar40 * fVar25 + fVar44 * fVar27 + fVar32 * fVar29,
                       fVar39 * fVar25 + fVar43 * fVar27 + fVar30 * fVar29 + 0.0);
  puVar5[6] = CONCAT44(fVar38 * fVar25 + fVar42 * fVar27 + fVar28 * fVar29 + 0.0,
                       fVar37 * fVar25 + fVar41 * fVar27 + fVar26 * fVar29 + 0.0);
  *(long *)(*(long *)(param_2 + 0xa8) + (long)param_5 * 0x30) = lVar6;
  if (*(short *)(param_6 + 0x10) != 0) {
    uVar7 = 0;
    do {
      pbVar9 = *(byte **)(*(long *)(param_6 + 0x18) + uVar7 * 8);
      bVar2 = *pbVar9;
      if (bVar2 < 2) {
        if (bVar2 == 1) {
          uVar11 = FUN_0038ef70(param_1,pbVar9 + 0x30);
          uVar12 = FUN_0038ef70(param_1,pbVar9 + 0x40);
          uVar13 = FUN_0038ef70(param_1,pbVar9 + 0x50);
          fVar14 = (float)FUN_0038ef70(param_1,pbVar9 + 0x60);
          pbVar9 = *(byte **)(param_3 + 200);
          lVar6 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
          uVar8 = lVar6 + 0xfU & -lVar6;
          if ((*pbVar9 & 1) == 0) {
LAB_003942a0:
            lVar6 = *(long *)(pbVar9 + 0x40);
            *(ulong *)(pbVar9 + 0x40) = lVar6 + uVar8;
          }
          else {
            plVar10 = *(long **)(pbVar9 + 0x40);
            do {
              lVar6 = *plVar10;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *plVar10 = lVar6 + uVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
LAB_003942c4:
          puVar1 = (undefined4 *)(*(long *)(*(long *)(param_3 + 200) + 0x38) + lVar6);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = fVar45 * fVar14;
          goto LAB_00394194;
        }
        if (bVar2 == 0) {
          uVar11 = FUN_0038ef70(param_1,pbVar9 + 8);
          uVar12 = FUN_0038ef70(param_1,pbVar9 + 0x18);
          uVar13 = FUN_0038ef70(param_1,pbVar9 + 0x28);
          fVar14 = (float)FUN_0038ef70(param_1,pbVar9 + 0x38);
          pbVar9 = *(byte **)(param_3 + 200);
          lVar6 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
          uVar8 = lVar6 + 0xfU & -lVar6;
          if ((*pbVar9 & 1) == 0) goto LAB_003942a0;
          plVar10 = *(long **)(pbVar9 + 0x40);
          do {
            lVar6 = *plVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = lVar6 + uVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_003942c4;
        }
      }
      else {
        lVar6 = 0;
LAB_00394194:
        *(long *)(*(long *)(*(long *)(param_2 + 0xa8) + (long)param_5 * 0x30 + 8) + uVar7 * 8) =
             lVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(param_6 + 0x10));
  }
  return;
}

